#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qtnetworkclient.h"
#include "userregitis.h"
#include "userlogin.h"
#include "userget_help.h"
#include <QTcpSocket>


class CommendRegistr;

class  QtNetworkClient : public QMainWindow
{
	Q_OBJECT

public:
	QtNetworkClient(QWidget *parent = Q_NULLPTR);

private Q_SLOTS:
    void OnConnectClick();
	void OnConnected();
	void OnSocketError(QAbstractSocket::SocketError);
	void OnDataReadyRead();
	void OnUserRegister();

private:
	Ui::QtNetworkClientClass ui;
	QTcpSocket* m_socket;
	UserRegistr* m_userregistr;
	UserLogin* m_userlogin;
	UserGet_help* m_userget_help;
};
