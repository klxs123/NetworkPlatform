#include "userregitis.h"
#include <QMessagebox>
#include <Qimagereader>
#include <Qlineedit>
#include <QFile>

UserRegistr::UserRegistr(QWidget *parent)
	: QDialog(parent),m_cmd(0)
{
	ui.setupUi(this);

	ui.m_lbImage->SetImages(":/image/Resources/571229.png");
	ui.m_RegiPasswd->setEchoMode(QLineEdit::Password);
	ui.m_RegiRepPasswd->setEchoMode(QLineEdit::Password);
	
	QObject::connect(ui.m_RegiName, SIGNAL(returnPressed()), this, SLOT(PremitAccount()));
	QObject::connect(ui.m_RegiName, SIGNAL(cursorPositionChanged()), this, SLOT(PremitAccount()));
	QObject::connect(ui.m_RegiPasswd, SIGNAL(returnPressed()), this, SLOT(PremitPasswd()));

	QObject::connect(ui.m_RegiNext, SIGNAL(clicked()), this, SLOT(OnRegister()));

	QObject::connect(ui.m_RegiRepPasswd, SIGNAL(returnPressed()), this, SLOT(EqualPasswd()));

}

UserRegistr::~UserRegistr()
{
	
}

void UserRegistr::EqualPasswd()
{
	QLineEdit posit(this);
	int i = posit.cursorPosition();
	//QString str_passwd = ui.m_RegiPasswd->text();
	//QString str_repspasswd = ui.m_RegiRepPasswd->text();
	ui.m_passwdstate2->clear();
	QImageReader tr2(":/image/Resources/581386.png");
	if (ui.m_RegiPasswd->text() != ui.m_RegiRepPasswd->text())
	{
		tr2.setFileName(":/image/Resources/581414.png");
	}
	QPixmap image2 = QPixmap::fromImageReader(&tr2);
	ui.m_passwdstate2->setPixmap(image2.scaled(ui.m_passwdstate2->size()));
}

void UserRegistr::SetProcessBar()
{
	for (int value = 0;value <= 100;value++)
	{
		_sleep(50);
		ui.m_RegiProgress->setValue(value);
	}
}

void UserRegistr::OnRegister()
{
	emit us_register();
}

CommendRegistr* UserRegistr::commend()
{
	if (m_cmd != 0)
	{
		
		delete m_cmd;
		m_cmd = 0;
	}
	
	m_cmd = new CommendRegistr;
	m_cmd->name = ui.m_RegiName->text().toStdString();
	m_cmd->passwd = ui.m_RegiPasswd->text().toStdString();
	m_cmd->info = ui.m_RegiInformation->toPlainText().toStdString();

	const QString& filename = ui.m_lbImage->GetImages();
	QFile file(filename);
	if (file.open(QIODevice::ReadOnly))
	{
		QByteArray bytes = file.readAll();
		m_cmd->img = bytes.toStdString();
		
	}
	else
	{
		delete m_cmd;
		m_cmd = 0;
	}

	return m_cmd;
}


void UserRegistr::PremitAccount()
{
	QLineEdit posit(this);
	int i = posit.cursorPosition();
	QImageReader tr(":/image/Resources/581386.png");
	QPixmap image = QPixmap::fromImageReader(&tr);
	ui.m_accountstate->setPixmap(image.scaled(ui.m_accountstate->size()));
}

void UserRegistr::PremitPasswd()
{
	QLineEdit posit(this);
	int i = posit.cursorPosition();
	QImageReader tr(":/image/Resources/581386.png");
	QPixmap image = QPixmap::fromImageReader(&tr);
	ui.m_passwdstate->setPixmap(image.scaled(ui.m_passwdstate->size()));
}

