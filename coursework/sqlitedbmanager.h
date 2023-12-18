#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#include <QSqlDatabase>
#include "dbmanager.h"

#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDate>
#include <QDebug>


#define DATABASE_HOST_NAME   "ExampleDataBase"
#define DATABASE_FILE_NAME   "DataBase.sqlite"

#define TABLE_USER       "Users"
#define TABLE_USER_ID   "id"
#define TABLE_USER_NAME  "name"
#define TABLE_USER_ADDRESS  "address"
#define TABLE_USER_USERNAME  "username"
#define TABLE_USER_PASSWORD  "password"
#define TABLE_USER_AGE   "age"

// Константи для класу Account
#define TABLE_ACCOUNT         "Accounts"
#define TABLE_ACCOUNT_USER_ID  "user_id"
#define TABLE_ACCOUNT_NAME    "name"
#define TABLE_ACCOUNT_AMOUNT  "amount"
#define TABLE_ACCOUNT_BALANCE "balance"

// Константи для класу Payment
#define TABLE_PAYMENT           "Payments"
#define TABLE_PAYMENT_ACCOUNT_ID "account_id"
#define TABLE_PAYMENT_NAME      "name"
#define TABLE_PAYMENT_AMOUNT    "amount"
#define TABLE_PAYMENT_DATE      "date"
#define TABLE_PAYMENT_DESCRIPTION "description"

class SqliteDBManager : public DBManager {

public:

    static SqliteDBManager* getInstance();


    void connectToDataBase() override;


    QSqlDatabase getDB() override;


    bool inserIntoTable(const User& user) override;
    bool inserIntoTable(const Account& user) override;
    bool inserIntoTable(const Payment& user) override;

private:

    QSqlDatabase db;

    static SqliteDBManager* instance;

    SqliteDBManager();


    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTables();
};

#endif // SQLITEDBMANAGER_H
