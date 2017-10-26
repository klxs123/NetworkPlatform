#pragma once

#include <QDialog>
#include "ui_userregitis.h"
#include "NetworkCommend.h"

class CommendRegistr;

class  UserRegistr : public QDialog
{
	Q_OBJECT

public:
	UserRegistr(QWidget *parent = Q_NULLPTR);
	~UserRegistr();
	CommendRegistr* commend();
Q_SIGNALS:
	void us_register();

public slots:
	void EqualPasswd();
	void PremitAccount();
	void PremitPasswd();
	void SetProcessBar();
	void OnRegister();

	//void SetStateImage(const QString& file);

private:
	Ui::UserRegitis ui;
	CommendRegistr* m_cmd;
};
