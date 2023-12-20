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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_34;
    QTabWidget *tabWidget;
    QWidget *tab_accounts;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_33;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_username_2;
    QLabel *label_userData_account_login;
    QHBoxLayout *horizontalLayout_28;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_33;
    QLabel *label_userData_account_balance;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QTabWidget *tabWidget_Accounts;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_username_4;
    QLabel *label_userLogin5;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label;
    QLineEdit *lineEdit_Account_name;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButton_Accounts_create;
    QWidget *tab;
    QVBoxLayout *verticalLayout_26;
    QVBoxLayout *verticalLayout_25;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QComboBox *comboBox_Account;
    QPushButton *pushButton_Account_Chose;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_2;
    QLabel *label_Account_Balance;
    QPushButton *pushButton_Accounts_Recharge;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QLabel *label_Account_Amount;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *pushButton_Accounts_add;
    QPushButton *pushButton_Accounts_changeUser;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_15;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_24;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_25;
    QLineEdit *lineEdit_Recharging;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_8;
    QPushButton *pushButton_Recharging;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_9;
    QWidget *tab_payments;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_32;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_username_5;
    QLabel *label_userData_payment_login;
    QHBoxLayout *horizontalLayout_27;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_31;
    QLabel *label_userData_paiment_balance;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_11;
    QTabWidget *tabWidget_Paymants;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_28;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_13;
    QComboBox *comboBox_Payments;
    QPushButton *pushButton_Payments_ChosePaymant;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_3;
    QLabel *label_Paymants_amount;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_19;
    QLabel *label_Paymants_date;
    QVBoxLayout *verticalLayout_27;
    QLabel *label_26;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_Payments_add;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_30;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_27;
    QLineEdit *lineEdit_Payments_name;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_29;
    QLineEdit *lineEdit_Payments_amount;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_29;
    QLabel *label_28;
    QTextEdit *textEdit_Payments_description;
    QPushButton *pushButton_Payments_pay;
    QSpacerItem *horizontalSpacer_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(870, 508);
        MainWindow->setMinimumSize(QSize(820, 460));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        MainWindow->setFocusPolicy(Qt::NoFocus);
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_34 = new QVBoxLayout(centralwidget);
        verticalLayout_34->setObjectName("verticalLayout_34");
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
        tab_accounts = new QWidget();
        tab_accounts->setObjectName("tab_accounts");
        verticalLayout_9 = new QVBoxLayout(tab_accounts);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setObjectName("verticalLayout_33");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_username_2 = new QLabel(tab_accounts);
        label_username_2->setObjectName("label_username_2");
        label_username_2->setMinimumSize(QSize(30, 30));
        label_username_2->setMaximumSize(QSize(40, 40));
        label_username_2->setPixmap(QPixmap(QString::fromUtf8("../Image/user.png")));
        label_username_2->setScaledContents(true);

        horizontalLayout_2->addWidget(label_username_2);

        label_userData_account_login = new QLabel(tab_accounts);
        label_userData_account_login->setObjectName("label_userData_account_login");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_userData_account_login->sizePolicy().hasHeightForWidth());
        label_userData_account_login->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_userData_account_login);


        verticalLayout_33->addLayout(horizontalLayout_2);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_8);

        label_33 = new QLabel(tab_accounts);
        label_33->setObjectName("label_33");
        QFont font;
        font.setPointSize(8);
        label_33->setFont(font);

        horizontalLayout_28->addWidget(label_33);

        label_userData_account_balance = new QLabel(tab_accounts);
        label_userData_account_balance->setObjectName("label_userData_account_balance");
        label_userData_account_balance->setFont(font);

        horizontalLayout_28->addWidget(label_userData_account_balance);


        verticalLayout_33->addLayout(horizontalLayout_28);


        verticalLayout_9->addLayout(verticalLayout_33);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_7 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        tabWidget_Accounts = new QTabWidget(tab_accounts);
        tabWidget_Accounts->setObjectName("tabWidget_Accounts");
        tabWidget_Accounts->setTabletTracking(false);
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_14 = new QVBoxLayout(tab_2);
        verticalLayout_14->setObjectName("verticalLayout_14");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_5);

        label_username_4 = new QLabel(tab_2);
        label_username_4->setObjectName("label_username_4");
        label_username_4->setMaximumSize(QSize(35, 35));
        label_username_4->setPixmap(QPixmap(QString::fromUtf8("../Image/user.png")));
        label_username_4->setScaledContents(true);

        horizontalLayout_14->addWidget(label_username_4);

        label_userLogin5 = new QLabel(tab_2);
        label_userLogin5->setObjectName("label_userLogin5");
        sizePolicy1.setHeightForWidth(label_userLogin5->sizePolicy().hasHeightForWidth());
        label_userLogin5->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(label_userLogin5);


        verticalLayout_14->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label = new QLabel(tab_2);
        label->setObjectName("label");

        horizontalLayout_13->addWidget(label);

        lineEdit_Account_name = new QLineEdit(tab_2);
        lineEdit_Account_name->setObjectName("lineEdit_Account_name");

        horizontalLayout_13->addWidget(lineEdit_Account_name);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_15);


        verticalLayout_14->addLayout(horizontalLayout_13);

        pushButton_Accounts_create = new QPushButton(tab_2);
        pushButton_Accounts_create->setObjectName("pushButton_Accounts_create");

        verticalLayout_14->addWidget(pushButton_Accounts_create);

        tabWidget_Accounts->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_26 = new QVBoxLayout(tab);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName("verticalLayout_25");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_12 = new QLabel(tab);
        label_12->setObjectName("label_12");

        horizontalLayout_15->addWidget(label_12);

        comboBox_Account = new QComboBox(tab);
        comboBox_Account->setObjectName("comboBox_Account");

        horizontalLayout_15->addWidget(comboBox_Account);

        pushButton_Account_Chose = new QPushButton(tab);
        pushButton_Account_Chose->setObjectName("pushButton_Account_Chose");

        horizontalLayout_15->addWidget(pushButton_Account_Chose);


        verticalLayout_25->addLayout(horizontalLayout_15);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");

        horizontalLayout_17->addWidget(label_2);

        label_Account_Balance = new QLabel(tab);
        label_Account_Balance->setObjectName("label_Account_Balance");

        horizontalLayout_17->addWidget(label_Account_Balance);


        horizontalLayout_19->addLayout(horizontalLayout_17);

        pushButton_Accounts_Recharge = new QPushButton(tab);
        pushButton_Accounts_Recharge->setObjectName("pushButton_Accounts_Recharge");

        horizontalLayout_19->addWidget(pushButton_Accounts_Recharge);


        verticalLayout_25->addLayout(horizontalLayout_19);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_18 = new QLabel(tab);
        label_18->setObjectName("label_18");

        horizontalLayout_18->addWidget(label_18);

        label_Account_Amount = new QLabel(tab);
        label_Account_Amount->setObjectName("label_Account_Amount");

        horizontalLayout_18->addWidget(label_Account_Amount);


        verticalLayout_25->addLayout(horizontalLayout_18);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        pushButton_Accounts_add = new QPushButton(tab);
        pushButton_Accounts_add->setObjectName("pushButton_Accounts_add");

        horizontalLayout_16->addWidget(pushButton_Accounts_add);

        pushButton_Accounts_changeUser = new QPushButton(tab);
        pushButton_Accounts_changeUser->setObjectName("pushButton_Accounts_changeUser");

        horizontalLayout_16->addWidget(pushButton_Accounts_changeUser);


        verticalLayout_25->addLayout(horizontalLayout_16);


        verticalLayout_26->addLayout(verticalLayout_25);

        tabWidget_Accounts->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_15 = new QVBoxLayout(tab_5);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_7);

        label_24 = new QLabel(tab_5);
        label_24->setObjectName("label_24");

        verticalLayout_15->addWidget(label_24);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_9);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_25 = new QLabel(tab_5);
        label_25->setObjectName("label_25");

        horizontalLayout_22->addWidget(label_25);

        lineEdit_Recharging = new QLineEdit(tab_5);
        lineEdit_Recharging->setObjectName("lineEdit_Recharging");

        horizontalLayout_22->addWidget(lineEdit_Recharging);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_14);


        verticalLayout_15->addLayout(horizontalLayout_22);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_8);

        pushButton_Recharging = new QPushButton(tab_5);
        pushButton_Recharging->setObjectName("pushButton_Recharging");

        verticalLayout_15->addWidget(pushButton_Recharging);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_6);

        tabWidget_Accounts->addTab(tab_5, QString());

        horizontalLayout_8->addWidget(tabWidget_Accounts);

        horizontalSpacer_9 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);


        verticalLayout_9->addLayout(horizontalLayout_8);

        tabWidget->addTab(tab_accounts, QString());
        tab_payments = new QWidget();
        tab_payments->setObjectName("tab_payments");
        verticalLayout_19 = new QVBoxLayout(tab_payments);
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setObjectName("verticalLayout_32");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_username_5 = new QLabel(tab_payments);
        label_username_5->setObjectName("label_username_5");
        label_username_5->setMinimumSize(QSize(30, 30));
        label_username_5->setMaximumSize(QSize(40, 40));
        label_username_5->setPixmap(QPixmap(QString::fromUtf8("../Image/user.png")));
        label_username_5->setScaledContents(true);

        horizontalLayout_4->addWidget(label_username_5);

        label_userData_payment_login = new QLabel(tab_payments);
        label_userData_payment_login->setObjectName("label_userData_payment_login");
        sizePolicy1.setHeightForWidth(label_userData_payment_login->sizePolicy().hasHeightForWidth());
        label_userData_payment_login->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_userData_payment_login);


        verticalLayout_32->addLayout(horizontalLayout_4);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_6);

        label_31 = new QLabel(tab_payments);
        label_31->setObjectName("label_31");
        label_31->setFont(font);

        horizontalLayout_27->addWidget(label_31);

        label_userData_paiment_balance = new QLabel(tab_payments);
        label_userData_paiment_balance->setObjectName("label_userData_paiment_balance");
        label_userData_paiment_balance->setFont(font);

        horizontalLayout_27->addWidget(label_userData_paiment_balance);


        verticalLayout_32->addLayout(horizontalLayout_27);


        verticalLayout_19->addLayout(verticalLayout_32);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_11 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        tabWidget_Paymants = new QTabWidget(tab_payments);
        tabWidget_Paymants->setObjectName("tabWidget_Paymants");
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_28 = new QVBoxLayout(tab_3);
        verticalLayout_28->setObjectName("verticalLayout_28");
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_13 = new QLabel(tab_3);
        label_13->setObjectName("label_13");

        horizontalLayout_20->addWidget(label_13);

        comboBox_Payments = new QComboBox(tab_3);
        comboBox_Payments->setObjectName("comboBox_Payments");

        horizontalLayout_20->addWidget(comboBox_Payments);

        pushButton_Payments_ChosePaymant = new QPushButton(tab_3);
        pushButton_Payments_ChosePaymant->setObjectName("pushButton_Payments_ChosePaymant");

        horizontalLayout_20->addWidget(pushButton_Payments_ChosePaymant);


        verticalLayout_28->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_3 = new QLabel(tab_3);
        label_3->setObjectName("label_3");

        horizontalLayout_21->addWidget(label_3);

        label_Paymants_amount = new QLabel(tab_3);
        label_Paymants_amount->setObjectName("label_Paymants_amount");

        horizontalLayout_21->addWidget(label_Paymants_amount);


        verticalLayout_28->addLayout(horizontalLayout_21);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        label_19 = new QLabel(tab_3);
        label_19->setObjectName("label_19");

        horizontalLayout_23->addWidget(label_19);

        label_Paymants_date = new QLabel(tab_3);
        label_Paymants_date->setObjectName("label_Paymants_date");

        horizontalLayout_23->addWidget(label_Paymants_date);


        verticalLayout_28->addLayout(horizontalLayout_23);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName("verticalLayout_27");
        label_26 = new QLabel(tab_3);
        label_26->setObjectName("label_26");

        verticalLayout_27->addWidget(label_26);

        textBrowser = new QTextBrowser(tab_3);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_27->addWidget(textBrowser);


        verticalLayout_28->addLayout(verticalLayout_27);

        pushButton_Payments_add = new QPushButton(tab_3);
        pushButton_Payments_add->setObjectName("pushButton_Payments_add");

        verticalLayout_28->addWidget(pushButton_Payments_add);

        tabWidget_Paymants->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_30 = new QVBoxLayout(tab_4);
        verticalLayout_30->setObjectName("verticalLayout_30");
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        label_27 = new QLabel(tab_4);
        label_27->setObjectName("label_27");

        horizontalLayout_24->addWidget(label_27);

        lineEdit_Payments_name = new QLineEdit(tab_4);
        lineEdit_Payments_name->setObjectName("lineEdit_Payments_name");

        horizontalLayout_24->addWidget(lineEdit_Payments_name);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_12);


        verticalLayout_30->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        label_29 = new QLabel(tab_4);
        label_29->setObjectName("label_29");

        horizontalLayout_25->addWidget(label_29);

        lineEdit_Payments_amount = new QLineEdit(tab_4);
        lineEdit_Payments_amount->setObjectName("lineEdit_Payments_amount");

        horizontalLayout_25->addWidget(lineEdit_Payments_amount);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_13);


        verticalLayout_30->addLayout(horizontalLayout_25);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setObjectName("verticalLayout_29");
        label_28 = new QLabel(tab_4);
        label_28->setObjectName("label_28");

        verticalLayout_29->addWidget(label_28);

        textEdit_Payments_description = new QTextEdit(tab_4);
        textEdit_Payments_description->setObjectName("textEdit_Payments_description");

        verticalLayout_29->addWidget(textEdit_Payments_description);


        verticalLayout_30->addLayout(verticalLayout_29);

        pushButton_Payments_pay = new QPushButton(tab_4);
        pushButton_Payments_pay->setObjectName("pushButton_Payments_pay");

        verticalLayout_30->addWidget(pushButton_Payments_pay);

        tabWidget_Paymants->addTab(tab_4, QString());

        horizontalLayout_9->addWidget(tabWidget_Paymants);

        horizontalSpacer_10 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);


        verticalLayout_19->addLayout(horizontalLayout_9);

        tabWidget->addTab(tab_payments, QString());

        verticalLayout_34->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_Accounts->setCurrentIndex(1);
        tabWidget_Paymants->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Coursework", nullptr));
        label_username_2->setText(QString());
        label_userData_account_login->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Balance:", nullptr));
        label_userData_account_balance->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_username_4->setText(QString());
        label_userLogin5->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Account name:", nullptr));
        pushButton_Accounts_create->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        tabWidget_Accounts->setTabText(tabWidget_Accounts->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Account:", nullptr));
        pushButton_Account_Chose->setText(QCoreApplication::translate("MainWindow", "Choose", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Balance:", nullptr));
        label_Account_Balance->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Accounts_Recharge->setText(QCoreApplication::translate("MainWindow", "Recharge account", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        label_Account_Amount->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Accounts_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_Accounts_changeUser->setText(QCoreApplication::translate("MainWindow", "Change user", nullptr));
        tabWidget_Accounts->setTabText(tabWidget_Accounts->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Recharging account", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Amount:", nullptr));
        pushButton_Recharging->setText(QCoreApplication::translate("MainWindow", "Recharging", nullptr));
        tabWidget_Accounts->setTabText(tabWidget_Accounts->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_accounts), QCoreApplication::translate("MainWindow", "Accounts", nullptr));
        label_username_5->setText(QString());
        label_userData_payment_login->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Balance:", nullptr));
        label_userData_paiment_balance->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Info about Payment:", nullptr));
        pushButton_Payments_ChosePaymant->setText(QCoreApplication::translate("MainWindow", "Choose", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Amount:", nullptr));
        label_Paymants_amount->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        label_Paymants_date->setText(QCoreApplication::translate("MainWindow", "00.00.0000", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        pushButton_Payments_add->setText(QCoreApplication::translate("MainWindow", "Add payment ", nullptr));
        tabWidget_Paymants->setTabText(tabWidget_Paymants->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Amount:", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Description:", nullptr));
        pushButton_Payments_pay->setText(QCoreApplication::translate("MainWindow", "Pay", nullptr));
        tabWidget_Paymants->setTabText(tabWidget_Paymants->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_payments), QCoreApplication::translate("MainWindow", "Payments", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
