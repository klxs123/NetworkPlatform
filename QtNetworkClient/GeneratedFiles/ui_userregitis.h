/********************************************************************************
** Form generated from reading UI file 'userregitis.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERREGITIS_H
#define UI_USERREGITIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "imageselect.h"

QT_BEGIN_NAMESPACE

class Ui_UserRegitis
{
public:
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLineEdit *m_RegiName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *m_RegiPasswd;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *m_RegiRepPasswd;
    QVBoxLayout *verticalLayout_7;
    QLabel *m_accountstate;
    QLabel *m_passwdstate;
    QLabel *m_passwdstate2;
    QSpacerItem *horizontalSpacer;
    ImageSelect *m_lbImage;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QLineEdit *m_InfoName;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QRadioButton *m_InfoSex_boy;
    QRadioButton *m_InfoSex_girl;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *m_InfoTel;
    QSpacerItem *horizontalSpacer_6;
    QTextEdit *m_RegiInformation;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QProgressBar *m_RegiProgress;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *m_RegiNext;
    QPushButton *m_RegiBack;
    QPushButton *m_RegiCancel;

    void setupUi(QDialog *UserRegitis)
    {
        if (UserRegitis->objectName().isEmpty())
            UserRegitis->setObjectName(QStringLiteral("UserRegitis"));
        UserRegitis->resize(955, 673);
        verticalLayout_9 = new QVBoxLayout(UserRegitis);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_10 = new QLabel(UserRegitis);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_8->addWidget(label_10);

        m_RegiName = new QLineEdit(UserRegitis);
        m_RegiName->setObjectName(QStringLiteral("m_RegiName"));
        m_RegiName->setMinimumSize(QSize(120, 30));
        m_RegiName->setEchoMode(QLineEdit::Normal);

        horizontalLayout_8->addWidget(m_RegiName);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(UserRegitis);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        m_RegiPasswd = new QLineEdit(UserRegitis);
        m_RegiPasswd->setObjectName(QStringLiteral("m_RegiPasswd"));
        m_RegiPasswd->setMinimumSize(QSize(120, 30));
        m_RegiPasswd->setEchoMode(QLineEdit::Normal);

        horizontalLayout_2->addWidget(m_RegiPasswd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(UserRegitis);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        m_RegiRepPasswd = new QLineEdit(UserRegitis);
        m_RegiRepPasswd->setObjectName(QStringLiteral("m_RegiRepPasswd"));
        m_RegiRepPasswd->setMinimumSize(QSize(120, 30));
        m_RegiRepPasswd->setEchoMode(QLineEdit::Normal);

        horizontalLayout_3->addWidget(m_RegiRepPasswd);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        m_accountstate = new QLabel(UserRegitis);
        m_accountstate->setObjectName(QStringLiteral("m_accountstate"));
        m_accountstate->setMinimumSize(QSize(40, 40));
        m_accountstate->setMaximumSize(QSize(40, 40));

        verticalLayout_7->addWidget(m_accountstate);

        m_passwdstate = new QLabel(UserRegitis);
        m_passwdstate->setObjectName(QStringLiteral("m_passwdstate"));
        m_passwdstate->setMinimumSize(QSize(40, 40));
        m_passwdstate->setMaximumSize(QSize(40, 40));

        verticalLayout_7->addWidget(m_passwdstate);

        m_passwdstate2 = new QLabel(UserRegitis);
        m_passwdstate2->setObjectName(QStringLiteral("m_passwdstate2"));
        m_passwdstate2->setMinimumSize(QSize(40, 40));
        m_passwdstate2->setMaximumSize(QSize(40, 40));

        verticalLayout_7->addWidget(m_passwdstate2);


        horizontalLayout_5->addLayout(verticalLayout_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        m_lbImage = new ImageSelect(UserRegitis);
        m_lbImage->setObjectName(QStringLiteral("m_lbImage"));
        m_lbImage->setMinimumSize(QSize(170, 170));
        m_lbImage->setMaximumSize(QSize(100, 160));

        horizontalLayout_5->addWidget(m_lbImage);

        label_4 = new QLabel(UserRegitis);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));

        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(UserRegitis);
        groupBox->setObjectName(QStringLiteral("groupBox"));

        verticalLayout_3->addWidget(groupBox);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label = new QLabel(UserRegitis);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_10->addWidget(label);

        m_InfoName = new QLineEdit(UserRegitis);
        m_InfoName->setObjectName(QStringLiteral("m_InfoName"));
        m_InfoName->setMaximumSize(QSize(350, 16777215));

        horizontalLayout_10->addWidget(m_InfoName);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_8->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_6 = new QLabel(UserRegitis);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(250, 0));
        label_6->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_9->addWidget(label_6);

        m_InfoSex_boy = new QRadioButton(UserRegitis);
        m_InfoSex_boy->setObjectName(QStringLiteral("m_InfoSex_boy"));
        m_InfoSex_boy->setMinimumSize(QSize(150, 0));
        m_InfoSex_boy->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_9->addWidget(m_InfoSex_boy);

        m_InfoSex_girl = new QRadioButton(UserRegitis);
        m_InfoSex_girl->setObjectName(QStringLiteral("m_InfoSex_girl"));
        m_InfoSex_girl->setMinimumSize(QSize(150, 0));
        m_InfoSex_girl->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_9->addWidget(m_InfoSex_girl);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);


        verticalLayout_8->addLayout(horizontalLayout_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_8 = new QLabel(UserRegitis);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        m_InfoTel = new QLineEdit(UserRegitis);
        m_InfoTel->setObjectName(QStringLiteral("m_InfoTel"));

        horizontalLayout->addWidget(m_InfoTel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout_8->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_8);

        m_RegiInformation = new QTextEdit(UserRegitis);
        m_RegiInformation->setObjectName(QStringLiteral("m_RegiInformation"));

        verticalLayout_5->addWidget(m_RegiInformation);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(UserRegitis);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        m_RegiProgress = new QProgressBar(UserRegitis);
        m_RegiProgress->setObjectName(QStringLiteral("m_RegiProgress"));
        m_RegiProgress->setValue(0);

        horizontalLayout_6->addWidget(m_RegiProgress);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        m_RegiNext = new QPushButton(UserRegitis);
        m_RegiNext->setObjectName(QStringLiteral("m_RegiNext"));

        horizontalLayout_6->addWidget(m_RegiNext);

        m_RegiBack = new QPushButton(UserRegitis);
        m_RegiBack->setObjectName(QStringLiteral("m_RegiBack"));

        horizontalLayout_6->addWidget(m_RegiBack);

        m_RegiCancel = new QPushButton(UserRegitis);
        m_RegiCancel->setObjectName(QStringLiteral("m_RegiCancel"));

        horizontalLayout_6->addWidget(m_RegiCancel);


        verticalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_9->addLayout(verticalLayout_6);


        retranslateUi(UserRegitis);
        QObject::connect(m_RegiCancel, SIGNAL(clicked()), UserRegitis, SLOT(close()));

        QMetaObject::connectSlotsByName(UserRegitis);
    } // setupUi

    void retranslateUi(QDialog *UserRegitis)
    {
        UserRegitis->setWindowTitle(QApplication::translate("UserRegitis", "UserRegitis", Q_NULLPTR));
        label_10->setText(QApplication::translate("UserRegitis", "           Name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserRegitis", "       Password:", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserRegitis", "Repeat Password:", Q_NULLPTR));
        m_accountstate->setText(QString());
        m_passwdstate->setText(QString());
        m_passwdstate2->setText(QString());
        m_lbImage->setText(QString());
        label_4->setText(QString());
        groupBox->setTitle(QApplication::translate("UserRegitis", "Information:", Q_NULLPTR));
        label->setText(QApplication::translate("UserRegitis", "                         Account:", Q_NULLPTR));
        label_6->setText(QApplication::translate("UserRegitis", "                            Sex: ", Q_NULLPTR));
        m_InfoSex_boy->setText(QApplication::translate("UserRegitis", "  Boy", Q_NULLPTR));
        m_InfoSex_girl->setText(QApplication::translate("UserRegitis", "  Girl", Q_NULLPTR));
        label_8->setText(QApplication::translate("UserRegitis", "                             Tel:", Q_NULLPTR));
        label_5->setText(QApplication::translate("UserRegitis", "Regitisy...", Q_NULLPTR));
        m_RegiNext->setText(QApplication::translate("UserRegitis", "Next", Q_NULLPTR));
        m_RegiBack->setText(QApplication::translate("UserRegitis", "Back", Q_NULLPTR));
        m_RegiCancel->setText(QApplication::translate("UserRegitis", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserRegitis: public Ui_UserRegitis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREGITIS_H
