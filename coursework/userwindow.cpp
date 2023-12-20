#include "userwindow.h"
#include "ui_userwindow.h"
#include <QTabBar>
UserWindow::UserWindow(DBManager* dbManager,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserWindow), dbManager(dbManager)
{
    ui->setupUi(this);

    ui->tabWidget_user->tabBar()->hide();
    ui->tabWidget_user->setCurrentIndex(0);
}

UserWindow::~UserWindow()
{
    delete ui;
}

void UserWindow::on_pushButton_SingIn_SIngIn_clicked()
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


            userFound = true;
        }


        if (!userFound) {
            // Виведення повідомлення про невірний логін чи пароль
            QMessageBox::warning(this, "Error", "Invalid login or password", QMessageBox::Ok);
        }
        emit setCurrentUser(user);
    }
    delete user;
}


void UserWindow::on_pushButton_SingIn_SIngUp_clicked()
{
    ui->tabWidget_user->setCurrentIndex(1);
}


void UserWindow::on_pushButton_SingUp_SIngIn_Up_clicked()
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



void UserWindow::on_pushButton_clicked()
{
    ui->tabWidget_user->setCurrentIndex(0);
}

