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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab_main;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_username;
    QLabel *label;
    QWidget *tab_accounts;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_username_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_8;
    QTabWidget *tabWidget_Accounts;
    QWidget *tab;
    QLabel *label_12;
    QComboBox *comboBox;
    QPushButton *pushButton_Accounts_add;
    QPushButton *pushButton_Accounts_delete;
    QWidget *tab_2;
    QPushButton *pushButton_Accounts_create;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QTableView *tableView_accounts;
    QWidget *tab_payments;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_username_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_9;
    QTabWidget *tabWidget_Accounts_2;
    QWidget *tab_3;
    QLabel *label_13;
    QComboBox *comboBox_Payments;
    QPushButton *pushButton_Payments_add;
    QWidget *tab_4;
    QPushButton *pushButton_Payments_create;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_15;
    QTableView *tableView_payments;
    QWidget *tab_user;
    QVBoxLayout *verticalLayout_20;
    QVBoxLayout *verticalLayout_21;
    QTabWidget *tabWidget_user;
    QWidget *user_tab_singIn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_SingIn_name;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLineEdit *lineEdit_SingIn_password;
    QPushButton *pushButton_SingIn_SIngIn;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_9;
    QPushButton *pushButton_SingIn_SIngUp;
    QSpacerItem *horizontalSpacer_4;
    QWidget *user_tab_singUP;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_SingUp_fullname;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_16;
    QLineEdit *lineEdit_SingUp_address;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_17;
    QLineEdit *lineEdit_SingUp_age;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_14;
    QLineEdit *lineEdit_SingUp_name;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEdit_SingUp_password;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_SingUp_SIngIn_Up;
    QWidget *user_tab_displayedUser;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_22;
    QLabel *label_23;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_userName;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_20;
    QLabel *label_userAddress;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_21;
    QLabel *label_userAge;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_24;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;

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
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
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
        label_username->setMinimumSize(QSize(30, 30));
        label_username->setMaximumSize(QSize(40, 40));
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
        verticalLayout_9 = new QVBoxLayout(tab_accounts);
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_username_2 = new QLabel(tab_accounts);
        label_username_2->setObjectName("label_username_2");
        label_username_2->setMaximumSize(QSize(35, 35));
        label_username_2->setPixmap(QPixmap(QString::fromUtf8("../Image/user.png")));
        label_username_2->setScaledContents(true);

        horizontalLayout_2->addWidget(label_username_2);

        label_2 = new QLabel(tab_accounts);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout_9->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        tabWidget_Accounts = new QTabWidget(tab_accounts);
        tabWidget_Accounts->setObjectName("tabWidget_Accounts");
        tab = new QWidget();
        tab->setObjectName("tab");
        label_12 = new QLabel(tab);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 10, 71, 21));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(80, 0, 161, 31));
        pushButton_Accounts_add = new QPushButton(tab);
        pushButton_Accounts_add->setObjectName("pushButton_Accounts_add");
        pushButton_Accounts_add->setGeometry(QRect(40, 210, 80, 24));
        pushButton_Accounts_delete = new QPushButton(tab);
        pushButton_Accounts_delete->setObjectName("pushButton_Accounts_delete");
        pushButton_Accounts_delete->setGeometry(QRect(210, 210, 80, 24));
        tabWidget_Accounts->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        pushButton_Accounts_create = new QPushButton(tab_2);
        pushButton_Accounts_create->setObjectName("pushButton_Accounts_create");
        pushButton_Accounts_create->setGeometry(QRect(40, 210, 80, 24));
        tabWidget_Accounts->addTab(tab_2, QString());

        horizontalLayout_8->addWidget(tabWidget_Accounts);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_11 = new QLabel(tab_accounts);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_11);

        tableView_accounts = new QTableView(tab_accounts);
        tableView_accounts->setObjectName("tableView_accounts");

        verticalLayout_7->addWidget(tableView_accounts);


        horizontalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_8);

        tabWidget->addTab(tab_accounts, QString());
        tab_payments = new QWidget();
        tab_payments->setObjectName("tab_payments");
        verticalLayout_19 = new QVBoxLayout(tab_payments);
        verticalLayout_19->setObjectName("verticalLayout_19");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_username_3 = new QLabel(tab_payments);
        label_username_3->setObjectName("label_username_3");
        label_username_3->setMaximumSize(QSize(35, 35));
        label_username_3->setPixmap(QPixmap(QString::fromUtf8("../Image/user.png")));
        label_username_3->setScaledContents(true);

        horizontalLayout_3->addWidget(label_username_3);

        label_3 = new QLabel(tab_payments);
        label_3->setObjectName("label_3");
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_3);


        verticalLayout_19->addLayout(horizontalLayout_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        tabWidget_Accounts_2 = new QTabWidget(tab_payments);
        tabWidget_Accounts_2->setObjectName("tabWidget_Accounts_2");
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        label_13 = new QLabel(tab_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 10, 71, 21));
        comboBox_Payments = new QComboBox(tab_3);
        comboBox_Payments->setObjectName("comboBox_Payments");
        comboBox_Payments->setGeometry(QRect(80, 0, 161, 31));
        pushButton_Payments_add = new QPushButton(tab_3);
        pushButton_Payments_add->setObjectName("pushButton_Payments_add");
        pushButton_Payments_add->setGeometry(QRect(40, 210, 80, 24));
        tabWidget_Accounts_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        pushButton_Payments_create = new QPushButton(tab_4);
        pushButton_Payments_create->setObjectName("pushButton_Payments_create");
        pushButton_Payments_create->setGeometry(QRect(40, 210, 80, 24));
        tabWidget_Accounts_2->addTab(tab_4, QString());

        horizontalLayout_9->addWidget(tabWidget_Accounts_2);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_15 = new QLabel(tab_payments);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_15);

        tableView_payments = new QTableView(tab_payments);
        tableView_payments->setObjectName("tableView_payments");

        verticalLayout_10->addWidget(tableView_payments);


        horizontalLayout_9->addLayout(verticalLayout_10);


        verticalLayout_19->addLayout(horizontalLayout_9);

        tabWidget->addTab(tab_payments, QString());
        tab_user = new QWidget();
        tab_user->setObjectName("tab_user");
        verticalLayout_20 = new QVBoxLayout(tab_user);
        verticalLayout_20->setObjectName("verticalLayout_20");
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName("verticalLayout_21");
        tabWidget_user = new QTabWidget(tab_user);
        tabWidget_user->setObjectName("tabWidget_user");
        tabWidget_user->setTabBarAutoHide(false);
        user_tab_singIn = new QWidget();
        user_tab_singIn->setObjectName("user_tab_singIn");
        layoutWidget = new QWidget(user_tab_singIn);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 40, 401, 271));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        QFont font;
        font.setPointSize(18);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        lineEdit_SingIn_name = new QLineEdit(layoutWidget);
        lineEdit_SingIn_name->setObjectName("lineEdit_SingIn_name");

        verticalLayout->addWidget(lineEdit_SingIn_name);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        lineEdit_SingIn_password = new QLineEdit(layoutWidget);
        lineEdit_SingIn_password->setObjectName("lineEdit_SingIn_password");

        verticalLayout_3->addWidget(lineEdit_SingIn_password);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        pushButton_SingIn_SIngIn = new QPushButton(layoutWidget);
        pushButton_SingIn_SIngIn->setObjectName("pushButton_SingIn_SIngIn");

        verticalLayout_5->addWidget(pushButton_SingIn_SIngIn);


        verticalLayout_6->addLayout(verticalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_7->addWidget(label_9);

        pushButton_SingIn_SIngUp = new QPushButton(layoutWidget);
        pushButton_SingIn_SIngUp->setObjectName("pushButton_SingIn_SIngUp");

        horizontalLayout_7->addWidget(pushButton_SingIn_SIngUp);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_6->addLayout(horizontalLayout_7);

        tabWidget_user->addTab(user_tab_singIn, QString());
        user_tab_singUP = new QWidget();
        user_tab_singUP->setObjectName("user_tab_singUP");
        verticalLayout_18 = new QVBoxLayout(user_tab_singUP);
        verticalLayout_18->setObjectName("verticalLayout_18");
        label_10 = new QLabel(user_tab_singUP);
        label_10->setObjectName("label_10");
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_18->addWidget(label_10);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_5 = new QLabel(user_tab_singUP);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        lineEdit_SingUp_fullname = new QLineEdit(user_tab_singUP);
        lineEdit_SingUp_fullname->setObjectName("lineEdit_SingUp_fullname");

        verticalLayout_2->addWidget(lineEdit_SingUp_fullname);


        verticalLayout_16->addLayout(verticalLayout_2);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_16 = new QLabel(user_tab_singUP);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_16);

        lineEdit_SingUp_address = new QLineEdit(user_tab_singUP);
        lineEdit_SingUp_address->setObjectName("lineEdit_SingUp_address");

        verticalLayout_12->addWidget(lineEdit_SingUp_address);


        verticalLayout_16->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_17 = new QLabel(user_tab_singUP);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_17);

        lineEdit_SingUp_age = new QLineEdit(user_tab_singUP);
        lineEdit_SingUp_age->setObjectName("lineEdit_SingUp_age");

        verticalLayout_13->addWidget(lineEdit_SingUp_age);


        verticalLayout_16->addLayout(verticalLayout_13);


        horizontalLayout_10->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_14 = new QLabel(user_tab_singUP);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_14);

        lineEdit_SingUp_name = new QLineEdit(user_tab_singUP);
        lineEdit_SingUp_name->setObjectName("lineEdit_SingUp_name");

        verticalLayout_11->addWidget(lineEdit_SingUp_name);


        verticalLayout_17->addLayout(verticalLayout_11);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_7 = new QLabel(user_tab_singUP);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_7);

        lineEdit_SingUp_password = new QLineEdit(user_tab_singUP);
        lineEdit_SingUp_password->setObjectName("lineEdit_SingUp_password");

        verticalLayout_8->addWidget(lineEdit_SingUp_password);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);


        verticalLayout_17->addLayout(verticalLayout_8);


        horizontalLayout_10->addLayout(verticalLayout_17);


        verticalLayout_18->addLayout(horizontalLayout_10);

        pushButton_SingUp_SIngIn_Up = new QPushButton(user_tab_singUP);
        pushButton_SingUp_SIngIn_Up->setObjectName("pushButton_SingUp_SIngIn_Up");

        verticalLayout_18->addWidget(pushButton_SingUp_SIngIn_Up);

        tabWidget_user->addTab(user_tab_singUP, QString());
        user_tab_displayedUser = new QWidget();
        user_tab_displayedUser->setObjectName("user_tab_displayedUser");
        horizontalLayout_6 = new QHBoxLayout(user_tab_displayedUser);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName("verticalLayout_23");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_22 = new QLabel(user_tab_displayedUser);
        label_22->setObjectName("label_22");

        horizontalLayout_5->addWidget(label_22);

        label_23 = new QLabel(user_tab_displayedUser);
        label_23->setObjectName("label_23");

        horizontalLayout_5->addWidget(label_23);


        verticalLayout_23->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_23->addItem(verticalSpacer_2);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName("verticalLayout_22");
        label_userName = new QLabel(user_tab_displayedUser);
        label_userName->setObjectName("label_userName");

        verticalLayout_22->addWidget(label_userName);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_20 = new QLabel(user_tab_displayedUser);
        label_20->setObjectName("label_20");

        horizontalLayout_12->addWidget(label_20);

        label_userAddress = new QLabel(user_tab_displayedUser);
        label_userAddress->setObjectName("label_userAddress");

        horizontalLayout_12->addWidget(label_userAddress);


        verticalLayout_22->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_21 = new QLabel(user_tab_displayedUser);
        label_21->setObjectName("label_21");

        horizontalLayout_11->addWidget(label_21);

        label_userAge = new QLabel(user_tab_displayedUser);
        label_userAge->setObjectName("label_userAge");

        horizontalLayout_11->addWidget(label_userAge);


        verticalLayout_22->addLayout(horizontalLayout_11);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_5);


        verticalLayout_23->addLayout(verticalLayout_22);


        horizontalLayout_6->addLayout(verticalLayout_23);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_24->addItem(verticalSpacer_4);

        pushButton = new QPushButton(user_tab_displayedUser);
        pushButton->setObjectName("pushButton");

        verticalLayout_24->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_24->addItem(verticalSpacer_3);


        horizontalLayout_6->addLayout(verticalLayout_24);

        tabWidget_user->addTab(user_tab_displayedUser, QString());

        verticalLayout_21->addWidget(tabWidget_user);


        verticalLayout_20->addLayout(verticalLayout_21);

        tabWidget->addTab(tab_user, QString());

        horizontalLayout_4->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);
        tabWidget_Accounts->setCurrentIndex(0);
        tabWidget_Accounts_2->setCurrentIndex(1);
        tabWidget_user->setCurrentIndex(1);


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
        label_12->setText(QCoreApplication::translate("MainWindow", "Account:", nullptr));
        pushButton_Accounts_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_Accounts_delete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        tabWidget_Accounts->setTabText(tabWidget_Accounts->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        pushButton_Accounts_create->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        tabWidget_Accounts->setTabText(tabWidget_Accounts->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Accounts", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_accounts), QCoreApplication::translate("MainWindow", "Accounts", nullptr));
        label_username_3->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Account:", nullptr));
        pushButton_Payments_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        tabWidget_Accounts_2->setTabText(tabWidget_Accounts_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        pushButton_Payments_create->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        tabWidget_Accounts_2->setTabText(tabWidget_Accounts_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Payments", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_payments), QCoreApplication::translate("MainWindow", "Payments", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "SING IN", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Input Login", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Input Passwor ", nullptr));
        pushButton_SingIn_SIngIn->setText(QCoreApplication::translate("MainWindow", "Sing in", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "No account?", nullptr));
        pushButton_SingIn_SIngUp->setText(QCoreApplication::translate("MainWindow", "Sing up", nullptr));
        tabWidget_user->setTabText(tabWidget_user->indexOf(user_tab_singIn), QCoreApplication::translate("MainWindow", "Sing in", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "SING UP", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Input Full Name", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Input Address", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Input Age", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Create Login", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Create  Passwor", nullptr));
        pushButton_SingUp_SIngIn_Up->setText(QCoreApplication::translate("MainWindow", "Sing up", nullptr));
        tabWidget_user->setTabText(tabWidget_user->indexOf(user_tab_singUP), QCoreApplication::translate("MainWindow", "SIng up", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Account:", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\321\226\320\275", nullptr));
        label_userName->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265 \321\226\320\274\321\217 \320\277\320\276-\320\261\320\260\321\202\321\214\320\272\320\276\320\262\321\226", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Address:", nullptr));
        label_userAddress->setText(QCoreApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201\320\260 ", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Age:", nullptr));
        label_userAge->setText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\272", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Change user", nullptr));
        tabWidget_user->setTabText(tabWidget_user->indexOf(user_tab_displayedUser), QCoreApplication::translate("MainWindow", "display info", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_user), QCoreApplication::translate("MainWindow", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
