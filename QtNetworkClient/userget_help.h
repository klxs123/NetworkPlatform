#pragma once

#include <QDialog>
#include "ui_userget_help.h"

class UserGet_help : public QDialog
{
	Q_OBJECT

public:
	UserGet_help(QWidget *parent = Q_NULLPTR);
	~UserGet_help();

private:
	Ui::UserGet_help ui;
};
