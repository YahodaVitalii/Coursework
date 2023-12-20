#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTabBar>
#include <QMessageBox>



MainWindow::MainWindow(DBManager* dbManager,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), dbManager(dbManager)
{
    ui->setupUi(this);

    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget_user->tabBar()->hide();
    ui->tabWidget_user->setCurrentIndex(0);
    ui->tabWidget_Accounts->tabBar()->hide();
    ui->tabWidget_Accounts->setCurrentIndex(1);
    ui->tabWidget_Paymants->tabBar()->hide();
    ui->tabWidget_Paymants->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete currentUser;
    delete currentAccount;
    delete currentPayment;
    if (model)
            delete model;
}
//User

void MainWindow::on_pushButton_SingIn_SIngUp_clicked()
{
    ui->tabWidget_user->setCurrentIndex(1);
}


void MainWindow::on_pushButton_SingUp_SIngIn_Up_clicked()
{
    if (    ui->lineEdit_SingUp_fullname->text().isEmpty() &&
            ui->lineEdit_SingUp_address->text().isEmpty() &&
            ui->lineEdit_SingUp_age->text().isEmpty() &&
            ui->lineEdit_SingUp_password->text().isEmpty() &&
            ui->lineEdit_SingUp_name->text().isEmpty())
    {
        QMessageBox::information(nullptr, "Empty field", "Enter all fields");
    }
    else{
        User* user = new User(3,ui->lineEdit_SingUp_fullname->text(),
                              ui->lineEdit_SingUp_address->text(),
                              ui->lineEdit_SingUp_name->text(),
                              ui->lineEdit_SingUp_password->text(),
                              ui->lineEdit_SingUp_age->text().toInt());
        ui->tabWidget_user->setCurrentIndex(0);

        if (!dbManager->inserIntoTable(*user)) {
            qDebug() << "Error inserting data into the database.";}

    }

}


void MainWindow::on_pushButton_SingIn_SIngIn_clicked()
{
    User* user;

    if (
            ui->lineEdit_SingIn_password->text().isEmpty() &&
            ui->lineEdit_SingIn_name->text().isEmpty())
    {
        QMessageBox::information(nullptr, "Empty field", "Enter all fields");
    }
    else{
        bool userFound = false;
        user = new User(dbManager->getUserById(dbManager->findUserIdByUsername(ui->lineEdit_SingIn_name->text())));

        if(user->getPassword() == ui->lineEdit_SingIn_password->text()) {

            ui->label_userLogin->setText(user->getUsername());
            // ui->label_userData_main_login->setText(user->getUsername());
            ui->label_userName->setText(user->getName());
            ui->label_userAddress->setText(user->getAddress());
            ui->label_userAge->setText(QString::number(user->getAge()));
            ui->tabWidget_user->setCurrentIndex(2);
            MainWindow::changeUsername(user->getUsername());
            currentUser = new User(*user);


            ui->comboBox_Account->clear();

            QVector<QString> accountNames = dbManager->getAllAccountNamesForCurrentUser(currentUser->getId());
            for (const QString& name : accountNames) {
                ui->comboBox_Account->addItem(name);
            }

            userFound = true;
        }


        if (!userFound) {
            // Виведення повідомлення про невірний логін чи пароль
            QMessageBox::warning(this, "Error", "Invalid login or password", QMessageBox::Ok);
        }

    }
    delete user;
}

void MainWindow::on_pushButton_clicked()
{
    ui->tabWidget_user->setCurrentIndex(0);
}
//Acounts

void MainWindow::on_pushButton_Accounts_create_clicked()
{
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


void MainWindow::on_pushButton_Accounts_add_clicked()
{
    ui->tabWidget_Accounts->setCurrentIndex(0);
}

void MainWindow::on_pushButton_Recharging_clicked()
{
    ui->tabWidget_Accounts->setCurrentIndex(1);
    currentAccount->setBalance(currentAccount->getBalance() + ui->lineEdit_Recharging->text().toDouble());
    ui->label_Account_Balance->setText(QString::number( currentAccount->getBalance() ));

    if( !dbManager->updateAccountBalance(currentAccount->getId(),  currentAccount->getBalance())){
        qDebug() << "Error updating data into the database.";}
    MainWindow::changeBalance(QString::number( currentAccount->getBalance() ));
}


void MainWindow::on_pushButton_Accounts_Recharge_clicked()
{
    ui->tabWidget_Accounts->setCurrentIndex(2);

}


void MainWindow::on_pushButton_Account_Chose_clicked()
{
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
}
void  MainWindow::changeBalance(QString balance){

    ui->label_userData_account_balance->setText(balance);
    ui->label_userData_paiment_balance->setText(balance);
}




