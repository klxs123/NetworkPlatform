
#ifndef __COMMEND_H_
#define __COMMEND_H_

#include <String>
#include <cstdint>
#include "networkplatform.h"
#include "networkplatform_global.h"

using std::string;

enum CommendType
{
	RT_REGISTART = 1,

	RT_END
};

struct Iserializable
{
	virtual const string to_data() const = 0;
	virtual void form_data(const string&) = 0;
};

struct Commend : public Iserializable
{
	virtual CommendType type() const;

	//virtual uint32_t len() = 0;
};

struct NETWORKPLATFORM_EXPORT CommendRegistr : public Commend
{
	string name;
	string passwd;
	string info;
	string img;

	virtual const string to_data() const override;
	virtual void form_data(const string &) override;
	//virtual uint32_t len() override;
};

struct NETWORKPLATFORM_EXPORT CommecdMessage : public Commend
{
	string name;
	string passwd;
	string account;
	
	//virtual const string to_data() const override;
	//virtual void form_data(const string &) override;


	
};

struct NETWORKPLATFORM_EXPORT Package : public Iserializable
{
	
	CommendRegistr* m_registr;
	
	Package();
	Package(CommendRegistr*);
	~Package();

	virtual const string to_data() const override;
	virtual void form_data(const string &) override;

};


#endif