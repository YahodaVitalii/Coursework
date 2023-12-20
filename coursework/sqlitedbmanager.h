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
#include <QVector>


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
#define TABLE_PAYMENT_ID         "id"
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
    bool updateAccountBalance(int accountId, double newBalance) override;
    bool updateAccountAmount(int accountId, double newAmount) override;
    Payment getPaymentById(int paymentId) override;
    Account getAccountById(int accountId) override;
    User getUserById(int userId) override;
    int findUserIdByUsername(const QString &usernameToFind) override;
    QVector<QString> getAllAccountNamesForCurrentUser(int currentUserId) override;
    QVector<QString> getAllPaymentNamesForCurrentUser(int currentUserId) override;
    Account getAccountByName(const QString &accountName) override;
    Payment getPaymentByName(const QString &paymentName) override;
    Payment* getLastPaymentForAccount(int currentAccountId) override;
    Account* getLastAccountForUser(int currentUserId) override;
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
