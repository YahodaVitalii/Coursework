#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDateTime>
#include <QSqlTableModel>
#include <QSqlQuery>
#include "user.h"
#include "dbmanager.h"
#include <QDebug>
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
    void changeUsername(QString name);
    void changeBalance(QString balance);

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

    void on_pushButton_Payments_ChosePaymant_clicked();

private:
    Ui::MainWindow *ui;
    DBManager* dbManager;
    QSqlTableModel* model;

    User* currentUser;
    Account* currentAccount;
    Payment* currentPayment;

};
#endif // MAINWINDOW_H
