/********************************************************************************
** Form generated from reading UI file 'userget_help.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERGET_HELP_H
#define UI_USERGET_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_UserGet_help
{
public:

    void setupUi(QDialog *UserGet_help)
    {
        if (UserGet_help->objectName().isEmpty())
            UserGet_help->setObjectName(QStringLiteral("UserGet_help"));
        UserGet_help->resize(400, 300);

        retranslateUi(UserGet_help);

        QMetaObject::connectSlotsByName(UserGet_help);
    } // setupUi

    void retranslateUi(QDialog *UserGet_help)
    {
        UserGet_help->setWindowTitle(QApplication::translate("UserGet_help", "UserGet_help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserGet_help: public Ui_UserGet_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERGET_HELP_H
