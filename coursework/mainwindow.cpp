#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTabBar>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget_user->tabBar()->hide();
    ui->tabWidget_user->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


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
        QMessageBox::information(nullptr, "Пусте полк", "Введіть всі поля");
    }
    else{
        User* user = new User(0,ui->lineEdit_SingUp_fullname->text(),
                              ui->lineEdit_SingUp_address->text(),
                              ui->lineEdit_SingUp_name->text(),
                              ui->lineEdit_SingUp_password->text(),
                              ui->lineEdit_SingUp_age->text().toInt());
        ui->tabWidget_user->setCurrentIndex(0);
        delete user;
    }

}

