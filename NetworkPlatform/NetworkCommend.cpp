#include "NetworkCommend.h"
#define TypeData uint32_t

string get_value(const string& data, string start, string end)
{
	int sta = data.find(start) + start.length();
	int en = data.find(end);
	int se = data.find(end) - sta;
	string value = data.substr(sta, se);

	return value;
}

string get_value(const string& data, string value)
{

	string end = "</" + value + ">";
	value = "<" + value + ">";

	return get_value(data, value, end);
}


Package::Package() : m_registr(0)
{

}

Package::Package(CommendRegistr* cmd)
{
	m_registr = cmd;
	cmd = 0;
}

Package::~Package() 
{
	//if (m_registr != 0)
	//{
	//	delete m_registr;
	//}
}

static const char* start = "<start>";
static const char* end = "<end>";

const string Package::to_data() const
{	
	string data;
	string sdata = m_registr->to_data();
	//TypeData length = sdata.length();
	TypeData length = m_registr->len();
	data += start;
	data.append((const char*)&length, sizeof(TypeData));				//无法继续追加字符串
	data += sdata;
	data += end;

	return data;
}

int Package::form_data(const string &fdata)
{
	int data_start = fdata.find(start)+ strlen(start);
	int data_end = fdata.find(end);

	if (data_start == string::npos || data_end == string::npos)
	{
		//结束标志是否出现在数据长度末尾
		return -1;//检验数据包完整度
	}

	string data = fdata.substr(data_start, sizeof(uint32_t));
	uint32_t len = *(uint32_t*)data.data();
	string cmd_data = fdata.substr(data_start, len);

	string stype = get_value(cmd_data, "type");
	uint32_t type = *(uint32_t*)stype.data();
	switch (type)
	{
	case CT_REGISTER:
	{
		m_registr = new CommendRegistr;
	}
	break;
	case CT_REGISTER_RESPONSE:
	{

	}
	break;
	case CT_LOGIN:
	{

	}
	break;
	case CT_LOGIN_RESPONSE:
	{

	}
	break;
	default:
		break;
	}

	if (m_registr == 0)
	{
		return -1;
	}

	m_registr->form_data(cmd_data);
	return data_end + strlen(end);
}

CommendType CommendRegistr::type() const
{
	return CommendType();
}

const string CommendRegistr::to_data() const
{
	string strdata;
	
	strdata += "<type>";
	TypeData tmp = type();
	strdata.append((char*)&tmp,sizeof(TypeData));
	strdata += "</type>";

	strdata += "<name>";
	strdata += name;
	strdata += "</name>";

	strdata += "<psd>";
	strdata += passwd;
	strdata += "</psd>";

	strdata += "<info>";
	strdata += info;
	strdata += "</info>";

	strdata += "<img>";						//error
	strdata += img;
	strdata += "</img>";

	return strdata;
}

int CommendRegistr::form_data(const string & data)
{
	//type = (CommendType)*(uint32_t*)(get_value(data, "type").data());
	
	this->name = get_value(data, "name");
	this->passwd = get_value(data, "psd");
	this->info = get_value(data, "info");
	this->img = get_value(data, "img");
	return 0;
}

uint32_t CommendRegistr::len()
{
	uint32_t lens = strlen("<type>") * 2 + 1;
	lens += sizeof(TypeData);
	lens += strlen("<name>") * 2 + 1;
	lens += strlen("<psd>") * 2 + 1;
	lens += strlen("<info>") * 2 + 1;
	lens += strlen("<img>") * 2 + 1;

	lens += name.length();
	lens += passwd.length();
	lens += info.length();
	lens += img.length();

	return lens;
}

CommendType Commend::type() const
{
	return  CT_REGISTER;
}

uint32_t CommecdMessage::len()
{
	return uint32_t();
}

CommendType CommecdMessage::type() const
{
	return CommendType();
}

const string CommecdMessage::to_data() const
{
	return string();
}

int CommecdMessage::form_data(const string & data)
{
	return 0;
}

uint32_t CommendRegistrRequest::len()
{
	return strlen("<success>") * 2 + 1 + 1;
}

CommendType CommendRegistrRequest::type() const
{
	return CT_REGISTER_RESPONSE;
}

const string CommendRegistrRequest::to_data() const
{
	return success?"<success>1</success>":"<success>0</success>";
}

int CommendRegistrRequest::form_data(const string & data)
{
	return success = (get_value(data, "success") == "0"?true:false);

}
