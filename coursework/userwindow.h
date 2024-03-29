#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QDialog>
#include <QWidget>
#include <QDateTime>
#include <QSqlTableModel>
#include <QSqlQuery>
#include "user.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"
#include "userwindow.h"
#include <QDebug>
#include <QMessageBox>
namespace Ui {
class UserWindow;
}

class UserWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserWindow(DBManager* dbManager,QWidget *parent = nullptr);
    ~UserWindow();

private slots:
    void on_pushButton_SingIn_SIngIn_clicked();

    void on_pushButton_SingIn_SIngUp_clicked();

    void on_pushButton_SingUp_SIngIn_Up_clicked();

    void on_pushButton_clicked();

    void on_pushButton_SingUp_cancel_clicked();

    void on_pushButton_Cancel_clicked();

private:
    Ui::UserWindow *ui;
    DBManager* dbManager;

signals:

    void setCurrentUser(User*);
};

#endif // USERWINDOW_H
