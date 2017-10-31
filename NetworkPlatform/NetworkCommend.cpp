#include "NetworkCommend.h"
#define TypeData uint32_t
string get_value(const string& data, string start)
{
	
	string end = "</" + start + ">";
	start = "<" + start + ">";

	int sta = data.find(start) + start.length();
	int en = data.find(end);
	int se = data.find(end) - sta;
	string value = data.substr(sta, se);


	return value;
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
	if (m_registr != 0)
	{
		delete m_registr;
	}
}

static const char* start = "<start>";
static const char* end = "<end>";

const string Package::to_data() const
{
	
	string data;
	string sdata = m_registr->to_data();
	TypeData length = sdata.length();
	data += start;
	data.append((const char*)&length, sizeof(TypeData));				//无法继续追加字符串
	data += sdata;
	data += end;

	return data;
}

void Package::form_data(const string &fdata)
{
	int data_start = fdata.find(start)+ strlen(start);
	int data_end = fdata.find(end);

	if (data_start == string::npos || data_end == string::npos)
	{
		//结束标志是否出现在数据长度末尾
		return;//检验数据包完整度
	}

	string data = fdata.substr(data_start, sizeof(uint32_t));
	uint32_t len = *(uint32_t*)data.data();
	string cmd_data = fdata.substr(data_start, len);

	string stype = get_value(cmd_data, "type");
	uint32_t type = *(uint32_t*)stype.data();
	switch (type)
	{
	case RT_REGISTART:
	{
		m_registr = new CommendRegistr;
		m_registr->form_data(cmd_data);
	}
	break;
	default:
		break;
	}
	return ;
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

void CommendRegistr::form_data(const string & data)
{
	//type = (CommendType)*(uint32_t*)(get_value(data, "type").data());
	
	this->name = get_value(data, "name");
	this->passwd = get_value(data, "psd");
	this->info = get_value(data, "info");
	this->img = get_value(data, "img");
}

CommendType Commend::type() const
{
	return  RT_REGISTART;
}
