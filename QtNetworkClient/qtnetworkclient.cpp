#include "qtnetworkclient.h"

#include <QTcpSocket>
#include <QHostAddress>
//#include <QPainter>

QtNetworkClient::QtNetworkClient(QWidget *parent)
	: QMainWindow(parent),m_socket(0),m_userlogin(0),m_userregistr(0)
{
	ui.setupUi(this);
	QObject::connect(ui.m_btConnect, SIGNAL(clicked()), this, SLOT(OnConnectClick()));

	//创建
	m_userregistr = new UserRegistr(this);
	connect(ui.m_useregitis, &QAction::triggered, m_userregistr, &UserRegistr::exec);
	
	//登录
	m_userlogin = new UserLogin(this);
	//QAction *action = ui.m_userlogin->addAction("Login");
	connect(ui.m_userlogin, &QAction::triggered, m_userlogin, &UserLogin::exec);

	//连接数据库之前不允许进行注册和登录
	//ui.m_useregitis->setEnabled(false);
	ui.m_userlogin->setEnabled(false);
	

	//响应用户注册
	connect(m_userregistr, SIGNAL(us_register()), this, SLOT(OnUserRegister()));


	//帮助
	m_userget_help = new UserGet_help(this);
	connect(ui.m_menuGet_Help, &QAction::triggered, m_userget_help, &UserGet_help::exec);

	ui.m_useregitis->setIcon(QIcon(":/image/Resources/1081653.png"));
	ui.m_userlogin->setIcon(QIcon(":/image/Resources/1081621.png"));
	ui.m_menuFind->setIcon(QIcon(":/image/Resources/510209.png"));
	ui.m_menuGet_Help->setIcon(QIcon(":/image/Resources/1081636.png"));

	//next PushButton
	//QObject::connect(ui.m_RegiNext, SIGNAL(us_register()), this, SLOT(onRegister_next()));

}

void QtNetworkClient::OnConnectClick()
{
	if (m_socket == 0)
	{
		m_socket = new QTcpSocket;
		QObject::connect(m_socket, SIGNAL(connected()), this, SLOT(OnConnected()));
		QObject::connect(m_socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(OnSocketError(QAbstractSocket::SocketError)));
		QObject::connect(m_socket, SIGNAL(readyRead()), this, SLOT(OnDataReadyRead()));
	}

	//QHostAddress ha("127.0.0.1");

	
	m_socket->connectToHost("127.0.0.1", 8001);

	ui.m_btConnect->setDisabled(true);
	ui.m_btConnect->setText("connectiong...");
	
}

void QtNetworkClient::OnConnected()
{
	ui.m_useregitis->setEnabled(true);
	ui.m_userlogin->setEnabled(true);
	ui.m_btConnect->setText("connected");
}

void QtNetworkClient::OnSocketError(QAbstractSocket::SocketError error)
{
	ui.m_btConnect->setEnabled(true);
	ui.m_btConnect->setText("connect");
}

void QtNetworkClient::OnDataReadyRead()
{
	QByteArray data =  m_socket->readAll();

	//string str = data.toStdString();

	ui.m_lwMessages->addItem(data);
}

void QtNetworkClient::OnUserRegister()
{
	CommendRegistr* cmd = m_userregistr->commend();
	
	if (cmd == 0)
	{
		return;
	}
	Package package(cmd);

	string data = package.to_data();
	
	m_socket->write(data.data(),data.length());
	
}


