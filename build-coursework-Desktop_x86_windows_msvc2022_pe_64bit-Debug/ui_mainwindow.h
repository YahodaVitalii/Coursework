/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_main;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_username;
    QLabel *label;
    QWidget *tab_accounts;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_username_2;
    QLabel *label_2;
    QWidget *tab_payments;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_username_3;
    QLabel *label_3;
    QWidget *tab_user;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(820, 460);
        MainWindow->setMinimumSize(QSize(820, 460));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        MainWindow->setFocusPolicy(Qt::NoFocus);
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tabWidget->setAutoFillBackground(true);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideMiddle);
        tab_main = new QWidget();
        tab_main->setObjectName("tab_main");
        horizontalLayoutWidget = new QWidget(tab_main);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(660, 0, 151, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_username = new QLabel(horizontalLayoutWidget);
        label_username->setObjectName("label_username");
        label_username->setMaximumSize(QSize(35, 35));
        label_username->setPixmap(QPixmap(QString::fromUtf8("../Image/user.png")));
        label_username->setScaledContents(true);

        horizontalLayout->addWidget(label_username);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        tabWidget->addTab(tab_main, QString());
        tab_accounts = new QWidget();
        tab_accounts->setObjectName("tab_accounts");
        horizontalLayoutWidget_2 = new QWidget(tab_accounts);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(660, 0, 151, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_username_2 = new QLabel(horizontalLayoutWidget_2);
        label_username_2->setObjectName("label_username_2");
        label_username_2->setMaximumSize(QSize(35, 35));
        label_username_2->setPixmap(QPixmap(QString::fromUtf8("../Image/user.png")));
        label_username_2->setScaledContents(true);

        horizontalLayout_2->addWidget(label_username_2);

        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_2);

        tabWidget->addTab(tab_accounts, QString());
        tab_payments = new QWidget();
        tab_payments->setObjectName("tab_payments");
        horizontalLayoutWidget_3 = new QWidget(tab_payments);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(660, 0, 151, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_username_3 = new QLabel(horizontalLayoutWidget_3);
        label_username_3->setObjectName("label_username_3");
        label_username_3->setMaximumSize(QSize(35, 35));
        label_username_3->setPixmap(QPixmap(QString::fromUtf8("../Image/user.png")));
        label_username_3->setScaledContents(true);

        horizontalLayout_3->addWidget(label_username_3);

        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName("label_3");
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_3);

        tabWidget->addTab(tab_payments, QString());
        tab_user = new QWidget();
        tab_user->setObjectName("tab_user");
        tabWidget->addTab(tab_user, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Courswork", nullptr));
        label_username->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_main), QCoreApplication::translate("MainWindow", "Main", nullptr));
        label_username_2->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_accounts), QCoreApplication::translate("MainWindow", "Accounts", nullptr));
        label_username_3->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_payments), QCoreApplication::translate("MainWindow", "Payments", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_user), QCoreApplication::translate("MainWindow", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
