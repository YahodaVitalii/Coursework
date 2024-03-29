#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTabBar>
#include <QMessageBox>



MainWindow::MainWindow(DBManager* dbManager,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), dbManager(dbManager)
{
    ui->setupUi(this);
    userWindow = new UserWindow(this->dbManager,this);
    userWindow ->setModal(false);
    connect(userWindow, &UserWindow::setCurrentUser, this, &MainWindow::getCurrentUser);

    ui->tabWidget->setCurrentIndex(0);

    ui->tabWidget_Accounts->tabBar()->hide();
    ui->tabWidget_Accounts->setCurrentIndex(1);
    ui->tabWidget_Paymants->tabBar()->hide();
    ui->tabWidget_Paymants->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete userWindow;
    if (currentUser)
        delete currentUser;
    if (currentAccount)
        delete currentAccount;
    if (currentPayment)
        delete currentPayment;
    if (model)
        delete model;
}
//User
void MainWindow::getCurrentUser(User *user){
    MainWindow::changeUsername(user->getUsername());
    currentUser = new User(*user);


    ui->comboBox_Account->clear();

    QVector<QString> accountNames = dbManager->getAllAccountNamesForCurrentUser(currentUser->getId());
    for (const QString& name : accountNames) {
        ui->comboBox_Account->addItem(name);
    }
}

//Acounts

void MainWindow::on_pushButton_Accounts_create_clicked()
{
    if(currentUser == nullptr){
     QMessageBox::information(nullptr, "Current user exist", "Change user");
    }
    else{
    if ( ui->lineEdit_Account_name->text().isEmpty())
    {
        QMessageBox::information(nullptr, "Empty field", "Enter all fields");
    }
    else{
        Account* account = new Account(1,currentUser->getId(),ui->lineEdit_Account_name->text(),0,0);

        ui->comboBox_Account->addItem(account->getName());

        if (!dbManager->inserIntoTable(*account)) {
            qDebug() << "Error inserting data into the database.";}



        ui->tabWidget_Accounts->setCurrentIndex(1);

        currentAccount = new Account(*dbManager->getLastAccountForUser(currentUser->getId()));

    }
   }
}


void MainWindow::on_pushButton_Accounts_add_clicked()
{
    ui->tabWidget_Accounts->setCurrentIndex(0);
}

void MainWindow::on_pushButton_Recharging_clicked()
{     if(currentUser == nullptr){
        QMessageBox::information(nullptr, "Current user exist", "Change user");
       }
       else{
    ui->tabWidget_Accounts->setCurrentIndex(1);
    currentAccount->setBalance(currentAccount->getBalance() + ui->lineEdit_Recharging->text().toDouble());
    ui->label_Account_Balance->setText(QString::number( currentAccount->getBalance() ));

    if( !dbManager->updateAccountBalance(currentAccount->getId(),  currentAccount->getBalance())){
        qDebug() << "Error updating data into the database.";}
    MainWindow::changeBalance(QString::number( currentAccount->getBalance() ));
    }
}


void MainWindow::on_pushButton_Accounts_Recharge_clicked()
{
    ui->tabWidget_Accounts->setCurrentIndex(2);

}


void MainWindow::on_pushButton_Account_Chose_clicked()
{
    if(currentUser == nullptr){
     QMessageBox::information(nullptr, "Current user exist", "Change user");
    }
    else{
    currentAccount =  new Account(dbManager->getAccountByName(ui->comboBox_Account->currentText()));

    ui->label_Account_Balance->setText(QString::number(currentAccount->getBalance()));
    ui->label_Account_Amount->setText(QString::number(currentAccount->getAmount()));

    ui->comboBox_Payments->clear();

    QVector<QString> paymentsNames = dbManager->getAllPaymentNamesForCurrentUser(currentAccount->getId());
    for (const QString& name : paymentsNames) {
        ui->comboBox_Payments->addItem(name);
    }
    MainWindow::changeBalance(QString::number( currentAccount->getBalance() ));

}
}
void MainWindow::on_pushButton_Accounts_changeUser_clicked()
{
    userWindow->show();
}


void MainWindow::on_pushButton_Recharging_2_clicked()
{
   ui->tabWidget_Accounts->setCurrentIndex(1);
}
void MainWindow::on_pushButton_Accounts_cancel_clicked()
{
  ui->tabWidget_Accounts->setCurrentIndex(1);
}


//Paymants

void MainWindow::on_pushButton_Payments_add_clicked()
{
    ui->tabWidget_Paymants->setCurrentIndex(1);
}


void MainWindow::on_pushButton_Payments_pay_clicked()
{
    if (ui->lineEdit_Payments_name->text().isEmpty() ||
            ui->lineEdit_Payments_amount->text().isEmpty()||
            ui->textEdit_Payments_description->toPlainText().isEmpty())
    {
        QMessageBox::information(nullptr, "Empty field", "Enter all fields");
    }
    if (currentAccount->getBalance() < ui->lineEdit_Payments_amount->text().toDouble())
    {
        QMessageBox::information(nullptr, "Not enough funds", "Top up your account");
    }
    else{
        Payment* payment = new  Payment(0,currentAccount->getId(),ui->lineEdit_Payments_name->text()
                                        ,ui->lineEdit_Payments_amount->text().toDouble() ,QDate::currentDate(),ui->textEdit_Payments_description->toPlainText());

        if (!dbManager->inserIntoTable(*payment)) {
            qDebug() << "Error inserting data into the database.";}

        currentPayment =  new Payment( *dbManager->getLastPaymentForAccount(currentAccount->getId()));

        ui->comboBox_Payments->addItem(payment->getName());


        qDebug()<< currentAccount->getBalance();

        currentAccount->setBalance( currentAccount->getBalance() - currentPayment->getAmount());
        qDebug()<< currentAccount->getBalance();

        currentAccount->setAmount( currentAccount->getAmount() + currentPayment->getAmount());

        if(!dbManager->updateAccountBalance(currentAccount->getId(),  currentAccount->getBalance())){
            qDebug() << "Error updating data into the database.";}

        if(!dbManager->updateAccountAmount(currentAccount->getId(),  currentAccount->getAmount())){
            qDebug() << "Error updating data into the database.";}

        ui->label_Account_Balance->setText(QString::number( currentAccount->getBalance() ));
        ui->label_Account_Amount->setText(QString::number( currentAccount->getAmount() ));

        ui->tabWidget_Paymants->setCurrentIndex(0);
        MainWindow::changeBalance(QString::number( currentAccount->getBalance() ));

    }
}


void MainWindow::on_pushButton_Payments_ChosePaymant_clicked()
{
    currentPayment =  new Payment(dbManager->getPaymentByName(ui->comboBox_Payments->currentText()));

    ui->label_Paymants_amount->setText(QString::number(currentPayment->getAmount()));
    ui->label_Paymants_date->setText(currentPayment->getDate().toString("yyyy-MM-dd"));
    ui->textBrowser->setText(currentPayment->getDescription());

}
void  MainWindow::changeUsername(QString name){

    ui->label_userData_account_login->setText(name);
    ui->label_userData_payment_login->setText(name);
    ui->label_userLogin5->setText(name);
}
void  MainWindow::changeBalance(QString balance){

    ui->label_userData_account_balance->setText(balance);
    ui->label_userData_paiment_balance->setText(balance);
}


void MainWindow::on_pushButton_Payments_cancel_clicked()
{
     ui->tabWidget_Paymants->setCurrentIndex(0);
}



