#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDateTime>
#include <QSqlTableModel>
#include <QSqlQuery>
#include "user.h"
#include "dbmanager.h"

class QSqlTableModel;

class DBManager;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
   explicit  MainWindow(DBManager* dbManrage, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_SingIn_SIngUp_clicked();

    void on_pushButton_SingUp_SIngIn_Up_clicked();

    void on_pushButton_SingIn_SIngIn_clicked();

    void on_pushButton_clicked();

    void on_pushButton_Accounts_create_clicked();

    void on_pushButton_Accounts_add_clicked();


    void on_pushButton_Recharging_clicked();

    void on_pushButton_Accounts_Recharge_clicked();

    void on_pushButton_Account_Chose_clicked();

    void on_pushButton_Payments_add_clicked();

    void on_pushButton_Payments_pay_clicked();

private:
    Ui::MainWindow *ui;
    DBManager* dbManager;
    QSqlTableModel* model;

    User* currentUser = new User(1,"1","1","1","1",1);
    Account* currentAccount;
    Payment* currentPayment;
    QVector<User*> users;
};
#endif // MAINWINDOW_H
