#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "user.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
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

private:
    Ui::MainWindow *ui;
    User* currentUser = new User(1,"1","1","1","1",1);
    Account* currentAccount;
    QVector<User*> users;
};
#endif // MAINWINDOW_H
