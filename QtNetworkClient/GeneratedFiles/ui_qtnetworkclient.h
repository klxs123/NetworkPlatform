/********************************************************************************
** Form generated from reading UI file 'qtnetworkclient.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTNETWORKCLIENT_H
#define UI_QTNETWORKCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtNetworkClientClass
{
public:
    QAction *m_useregitis;
    QAction *m_userlogin;
    QAction *m_menuGet_Help;
    QAction *m_menuFind;
    QWidget *centralWidget;
    QLineEdit *m_lineedit;
    QSpinBox *spinBox;
    QPushButton *m_btConnect;
    QListWidget *m_lwMessages;
    QGraphicsView *m_ClickImage;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuUser;
    QMenu *menuFind;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtNetworkClientClass)
    {
        if (QtNetworkClientClass->objectName().isEmpty())
            QtNetworkClientClass->setObjectName(QStringLiteral("QtNetworkClientClass"));
        QtNetworkClientClass->resize(699, 457);
        m_useregitis = new QAction(QtNetworkClientClass);
        m_useregitis->setObjectName(QStringLiteral("m_useregitis"));
        m_userlogin = new QAction(QtNetworkClientClass);
        m_userlogin->setObjectName(QStringLiteral("m_userlogin"));
        m_menuGet_Help = new QAction(QtNetworkClientClass);
        m_menuGet_Help->setObjectName(QStringLiteral("m_menuGet_Help"));
        m_menuFind = new QAction(QtNetworkClientClass);
        m_menuFind->setObjectName(QStringLiteral("m_menuFind"));
        centralWidget = new QWidget(QtNetworkClientClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        m_lineedit = new QLineEdit(centralWidget);
        m_lineedit->setObjectName(QStringLiteral("m_lineedit"));
        m_lineedit->setGeometry(QRect(80, 130, 113, 20));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(240, 130, 42, 22));
        m_btConnect = new QPushButton(centralWidget);
        m_btConnect->setObjectName(QStringLiteral("m_btConnect"));
        m_btConnect->setGeometry(QRect(310, 130, 75, 23));
        m_lwMessages = new QListWidget(centralWidget);
        m_lwMessages->setObjectName(QStringLiteral("m_lwMessages"));
        m_lwMessages->setGeometry(QRect(30, 240, 601, 141));
        m_ClickImage = new QGraphicsView(centralWidget);
        m_ClickImage->setObjectName(QStringLiteral("m_ClickImage"));
        m_ClickImage->setGeometry(QRect(500, 70, 131, 121));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 231, 31));
        QtNetworkClientClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtNetworkClientClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 699, 26));
        menuUser = new QMenu(menuBar);
        menuUser->setObjectName(QStringLiteral("menuUser"));
        menuFind = new QMenu(menuBar);
        menuFind->setObjectName(QStringLiteral("menuFind"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        QtNetworkClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtNetworkClientClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtNetworkClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtNetworkClientClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtNetworkClientClass->setStatusBar(statusBar);

        menuBar->addAction(menuUser->menuAction());
        menuBar->addAction(menuFind->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuUser->addAction(m_useregitis);
        menuUser->addAction(m_userlogin);
        menuFind->addAction(m_menuFind);
        menuHelp->addAction(m_menuGet_Help);

        retranslateUi(QtNetworkClientClass);

        QMetaObject::connectSlotsByName(QtNetworkClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtNetworkClientClass)
    {
        QtNetworkClientClass->setWindowTitle(QApplication::translate("QtNetworkClientClass", "QtNetworkClient", Q_NULLPTR));
        m_useregitis->setText(QApplication::translate("QtNetworkClientClass", "UserRegitis", Q_NULLPTR));
        m_userlogin->setText(QApplication::translate("QtNetworkClientClass", "UserLogin", Q_NULLPTR));
        m_menuGet_Help->setText(QApplication::translate("QtNetworkClientClass", "Get Help", Q_NULLPTR));
        m_menuFind->setText(QApplication::translate("QtNetworkClientClass", "Find...", Q_NULLPTR));
        m_btConnect->setText(QApplication::translate("QtNetworkClientClass", "connect", Q_NULLPTR));
        label->setText(QApplication::translate("QtNetworkClientClass", "Welcome To Communication System", Q_NULLPTR));
        menuUser->setTitle(QApplication::translate("QtNetworkClientClass", "User", Q_NULLPTR));
        menuFind->setTitle(QApplication::translate("QtNetworkClientClass", "Find", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("QtNetworkClientClass", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtNetworkClientClass: public Ui_QtNetworkClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTNETWORKCLIENT_H
