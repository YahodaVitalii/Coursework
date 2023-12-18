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
        users.push_back(user);
            // dbManager->connectToDataBase();
        if (!dbManager->inserIntoTable(*user)) {
                qDebug() << "Error inserting data into the database.";}

    }

}


void MainWindow::on_pushButton_SingIn_SIngIn_clicked()
{
    User* user= new User(1,"1","1","1","1",1);
    users.push_back(user);
    if (
            ui->lineEdit_SingIn_password->text().isEmpty() &&
            ui->lineEdit_SingIn_name->text().isEmpty())
    {
        QMessageBox::information(nullptr, "Empty field", "Enter all fields");
    }
    else{
        bool userFound = false;
        for(int i = 0; i < users.size(); ++i) {

            if(users[i]->getUsername() == ui->lineEdit_SingIn_name->text() && users[i]->getPassword() == ui->lineEdit_SingIn_password->text()) {

                ui->label_userLogin->setText(users[i]->getUsername());
                ui->label_userLogin2->setText(users[i]->getUsername());
                ui->label_userLogin3->setText(users[i]->getUsername());
                ui->label_userLogin4->setText(users[i]->getUsername());
                ui->label_userLogin5->setText(users[i]->getUsername());
                ui->label_userName->setText(users[i]->getName());
                ui->label_userAddress->setText(users[i]->getAddress());
                ui->label_userAge->setText(QString::number(users[i]->getAge()));
                ui->tabWidget_user->setCurrentIndex(2);

                currentUser = new User(*users[i]);
                userFound = true;
                break;
            }
        }

        if (!userFound) {
            // Виведення повідомлення про невірний логін чи пароль
            QMessageBox::warning(this, "Error", "Invalid login or password", QMessageBox::Ok);
        }

    }

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
        Account* account = new Account(0,currentUser->getId(),ui->lineEdit_Account_name->text(),0,0);
        ui->label_Account_Balance->setText(QString::number(account->getBalance()));
        ui->label_Account_Amount->setText(QString::number(account->getAmount()));

        ui->comboBox_Account->addItem(account->getName());

        currentAccount =  new Account(*account);
        currentUser->accounts.push_back(account);

        ui->tabWidget_Accounts->setCurrentIndex(1);
        if (!dbManager->inserIntoTable(*account)) {
                qDebug() << "Error inserting data into the database.";}
    }

}


void MainWindow::on_pushButton_Accounts_add_clicked()
{
    ui->tabWidget_Accounts->setCurrentIndex(0);
}

void MainWindow::on_pushButton_Recharging_clicked()
{
    ui->tabWidget_Accounts->setCurrentIndex(1);
    currentAccount->setBalance(ui->lineEdit_Recharging->text().toDouble() + ui->label_Account_Balance->text().toDouble());
    ui->label_Account_Balance->setText(QString::number( currentAccount->getBalance() ));
  //QDebug<<

}
//Тут через те що ми використовуємо конструктор копіювання данні які ми змінюємо не записуються в оригінальний обєкт


void MainWindow::on_pushButton_Accounts_Recharge_clicked()
{
    ui->tabWidget_Accounts->setCurrentIndex(2);

}


void MainWindow::on_pushButton_Account_Chose_clicked()
{
    for(int i =0; i < currentUser->accounts.size();i++){
        if( ui->comboBox_Account->currentText() == currentUser->accounts[i]->getName() ){
            currentAccount =  new Account(*currentUser->accounts[i]);
            ui->label_Account_Balance->setText(QString::number(currentUser->accounts[i]->getBalance()));
            ui->label_Account_Amount->setText(QString::number(currentUser->accounts[i]->getAmount()));

        }
    }
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
        Payment* payment = new  Payment(currentAccount->getId(),ui->lineEdit_Payments_name->text()
        ,ui->lineEdit_Payments_amount->text().toDouble() ,QDate::currentDate(),ui->textEdit_Payments_description->toPlainText());


        ui->label_Paymants_amount->setText(QString::number(payment->getAmount()));
        ui->label_Paymants_date->setText(payment->getDate().toString("yyyy-MM-dd"));
        ui->textBrowser->setText(payment->getDescription());

        ui->comboBox_Payments->addItem(payment->getName());

        currentPayment =  new Payment(*payment);
        currentAccount->payments.push_back(payment);

        currentAccount->setBalance( currentAccount->getBalance() - currentPayment->getAmount());
        ui->label_Account_Balance->setText(QString::number( currentAccount->getBalance() ));

        ui->tabWidget_Paymants->setCurrentIndex(0);

        if (!dbManager->inserIntoTable(*payment)) {
                qDebug() << "Error inserting data into the database.";}
    }
}

