/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "imageselect.h"

QT_BEGIN_NAMESPACE

class Ui_UserLogin
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *account;
    QLineEdit *m_LoginAccount;
    QHBoxLayout *horizontalLayout_2;
    QLabel *password;
    QLineEdit *m_LoginPasswd;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *s_chooseps;
    QPushButton *m_Login;
    ImageSelect *m_LoginImage;

    void setupUi(QDialog *UserLogin)
    {
        if (UserLogin->objectName().isEmpty())
            UserLogin->setObjectName(QStringLiteral("UserLogin"));
        UserLogin->setEnabled(true);
        UserLogin->resize(705, 624);
        verticalLayoutWidget = new QWidget(UserLogin);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(210, 210, 261, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        account = new QLabel(verticalLayoutWidget);
        account->setObjectName(QStringLiteral("account"));

        horizontalLayout->addWidget(account);

        m_LoginAccount = new QLineEdit(verticalLayoutWidget);
        m_LoginAccount->setObjectName(QStringLiteral("m_LoginAccount"));

        horizontalLayout->addWidget(m_LoginAccount);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        password = new QLabel(verticalLayoutWidget);
        password->setObjectName(QStringLiteral("password"));

        horizontalLayout_2->addWidget(password);

        m_LoginPasswd = new QLineEdit(verticalLayoutWidget);
        m_LoginPasswd->setObjectName(QStringLiteral("m_LoginPasswd"));
        m_LoginPasswd->setEnabled(true);

        horizontalLayout_2->addWidget(m_LoginPasswd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayoutWidget_3 = new QWidget(UserLogin);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(180, 370, 331, 71));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        s_chooseps = new QCheckBox(horizontalLayoutWidget_3);
        s_chooseps->setObjectName(QStringLiteral("s_chooseps"));

        horizontalLayout_3->addWidget(s_chooseps);

        m_Login = new QPushButton(horizontalLayoutWidget_3);
        m_Login->setObjectName(QStringLiteral("m_Login"));

        horizontalLayout_3->addWidget(m_Login);

        m_LoginImage = new ImageSelect(UserLogin);
        m_LoginImage->setObjectName(QStringLiteral("m_LoginImage"));
        m_LoginImage->setGeometry(QRect(250, 10, 201, 161));

        retranslateUi(UserLogin);

        QMetaObject::connectSlotsByName(UserLogin);
    } // setupUi

    void retranslateUi(QDialog *UserLogin)
    {
        UserLogin->setWindowTitle(QApplication::translate("UserLogin", "UserLogin", Q_NULLPTR));
        account->setText(QApplication::translate("UserLogin", " Account:", Q_NULLPTR));
        password->setText(QApplication::translate("UserLogin", "Password:", Q_NULLPTR));
        s_chooseps->setText(QApplication::translate("UserLogin", "Save password", Q_NULLPTR));
        m_Login->setText(QApplication::translate("UserLogin", "Login in", Q_NULLPTR));
        m_LoginImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserLogin: public Ui_UserLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
