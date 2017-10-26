#include "userlogin.h"
#include <Qimagereader>

UserLogin::UserLogin(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	
	ui.m_LoginImage->SetImages(":/image/Resources/510216.png");
	ui.m_LoginPasswd->setEchoMode(QLineEdit::Password);
	
}

UserLogin::~UserLogin()
{
}
