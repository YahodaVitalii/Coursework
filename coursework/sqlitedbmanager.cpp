

#include "sqlitedbmanager.h"

#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDate>
#include <QDebug>

SqliteDBManager* SqliteDBManager::instance = nullptr;

SqliteDBManager::SqliteDBManager() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_HOST_NAME);
    db.setDatabaseName(DATABASE_FILE_NAME);
}

// Метод для отримання екземпляру даного класу (патерн Singleton)
SqliteDBManager* SqliteDBManager::getInstance() {
    if (instance == nullptr) {
        instance = new SqliteDBManager();
    }
    return instance;
}

// Метод для підключення до бази даних
void SqliteDBManager::connectToDataBase() {
    /* Перед підключенням до бази даних виконуємо перевірку на її існування.
     * В залежності від результату виконуємо відкриття бази даних або її відновлення
     * */
    if (QFile(DATABASE_FILE_NAME).exists()) {
        this->openDataBase();

    } else {
        this->restoreDataBase();

    }

}

// Метод для отримання обробника підключення до БД
QSqlDatabase SqliteDBManager::getDB() {
    return db;
}

// Метод відновлення бази даних
bool SqliteDBManager::restoreDataBase() {
    if (!this->openDataBase()) {
        qDebug() << "Не вдалось відкрити базу даних";
        return false;
    }

    qDebug() << "Базу даних відкрито успішно";

    if (!this->createTables()) {
        qDebug() << "Не вдалось створити таблиці";
        return false;
    } else {
        qDebug() << "Таблиці створено успішно";
        return true;
    }
}
// Метод для відкриття бази даних
bool SqliteDBManager::openDataBase() {

    /* База даних відкривається по вказаному шляху
     * та імені бази даних, якщо вона існує
     * */
    if (db.open()) {

        return true;
    } else
        return false;

}

// Метод закриття бази даних
void SqliteDBManager::closeDataBase() {
    db.close();
}

// Метод для створення таблиці в базі даних
bool SqliteDBManager::createTables() {

    QSqlQuery query;
    if (!query.exec("CREATE TABLE " TABLE_USER " ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    TABLE_USER_NAME           " VARCHAR(255)    NOT NULL,"
                    TABLE_USER_ADDRESS        " VARCHAR(255)    NOT NULL,"
                    TABLE_USER_USERNAME       " VARCHAR(255)    NOT NULL,"
                    TABLE_USER_PASSWORD       " VARCHAR(255)    NOT NULL,"
                    TABLE_USER_AGE            " INTEGER         NOT NULL"
                    " )"
                    )) {
        qDebug() << "DataBase: error of create " << TABLE_USER;
        qDebug() << query.lastError().text();
        return false;
    }
    else if (!query.exec("CREATE TABLE " TABLE_ACCOUNT " ("
                         "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                         TABLE_ACCOUNT_NAME        " VARCHAR(255)    NOT NULL,"
                         TABLE_ACCOUNT_AMOUNT      " DECIMAL(10, 2)  NOT NULL,"
                         TABLE_ACCOUNT_BALANCE     " DECIMAL(10, 2)  NOT NULL,"
                         TABLE_ACCOUNT_USER_ID     " INTEGER         NOT NULL,"
                        "FOREIGN KEY ( " TABLE_ACCOUNT_USER_ID ") REFERENCES " TABLE_USER " ( id ) )"))  {
        qDebug() << "DataBase: error of create " << TABLE_ACCOUNT;
        qDebug() << query.lastError().text();
        return false;
    }    else if (!query.exec("CREATE TABLE " TABLE_PAYMENT " ("
                              TABLE_PAYMENT_NAME        " VARCHAR(255)    NOT NULL,"
                              TABLE_PAYMENT_AMOUNT      " DECIMAL(10, 2)  NOT NULL,"
                              TABLE_PAYMENT_DATE        " DATE            NOT NULL,"
                              TABLE_PAYMENT_DESCRIPTION " VARCHAR(255)    NOT NULL,"
                              TABLE_PAYMENT_ACCOUNT_ID  " INTEGER         NOT NULL,"
                             "FOREIGN KEY ( " TABLE_PAYMENT_ACCOUNT_ID ") REFERENCES " TABLE_ACCOUNT " ( id ) )"))  {
             qDebug() << "DataBase: error of create " << TABLE_ACCOUNT;
             qDebug() << query.lastError().text();
             return false;
         }else
        return true;
}

// Метод для вставки записів у таблицю messages
bool SqliteDBManager::inserIntoTable(const User& user) {
    // SQL-запит формується із об'єкта класу Messageu
 //  qDebug() << user.toString();
    QSqlQuery query;
    /*
     * Спочатку SQL-запит формується з ключами, які потім зв'язуються методом bindValue
     * для підставки даних із об'єкта класу Message
     * */
    query.prepare("INSERT INTO " TABLE_USER " ( "
           TABLE_USER_NAME ", "
           TABLE_USER_ADDRESS ", "
           TABLE_USER_USERNAME ", "
           TABLE_USER_PASSWORD ", "
           TABLE_USER_AGE " ) "
           "VALUES (:Name, :Address, :Username, :Password, :Age )");
   query.bindValue(":Name", user.getName());
   query.bindValue(":Address", user.getAddress());
   query.bindValue(":Username", user.getUsername());
   query.bindValue(":Password", user.getPassword());
   query.bindValue(":Age", user.getAge());

    // Після чого виконується запит методом exec()
    if (!query.exec()) {
        qDebug() << "error insert into " << TABLE_USER;
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();

        return false;
    } else
        return true;
}
bool SqliteDBManager::inserIntoTable(const Account& account) {
    // SQL-запит формується із об'єкта класу Messageu
 //  qDebug() << user.toString();
    QSqlQuery query;
    /*
     * Спочатку SQL-запит формується з ключами, які потім зв'язуються методом bindValue
     * для підставки даних із об'єкта класу Message
     * */
    query.prepare("INSERT INTO " TABLE_ACCOUNT " ( "
           TABLE_ACCOUNT_NAME ", "
           TABLE_ACCOUNT_AMOUNT ", "
           TABLE_ACCOUNT_BALANCE ", "
           TABLE_ACCOUNT_USER_ID " ) "
           "VALUES (:Name, :Amount, :Balance, :UserId )");
   query.bindValue(":Name", account.getName());
   query.bindValue(":Amount", account.getAmount());
   query.bindValue(":Balance", account.getBalance());
   query.bindValue(":UserId", account.getUserId());
    // Після чого виконується запит методом exec()
    if (!query.exec()) {
        qDebug() << "error insert into " << TABLE_ACCOUNT;
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();

        return false;
    } else
        return true;
}
bool SqliteDBManager::inserIntoTable(const Payment& payment) {
    // SQL-запит формується із об'єкта класу Messageu
 //  qDebug() << user.toString();
    QSqlQuery query;
    /*
     * Спочатку SQL-запит формується з ключами, які потім зв'язуються методом bindValue
     * для підставки даних із об'єкта класу Message
     * */
    query.prepare("INSERT INTO " TABLE_PAYMENT " ( "
           TABLE_PAYMENT_NAME ", "
           TABLE_PAYMENT_AMOUNT ", "
           TABLE_PAYMENT_DATE ", "
           TABLE_PAYMENT_DESCRIPTION ", "
            TABLE_PAYMENT_ACCOUNT_ID  " ) "
           "VALUES (:Name, :Amount, :Date, :Description, :AccountId)");
   query.bindValue(":Name", payment.getName());
   query.bindValue(":Amount", payment.getAmount());
   query.bindValue(":Date", payment.getDate());
   query.bindValue(":Description", payment.getDescription());
   query.bindValue(":AccountId", payment.getAccountId());
    // Після чого виконується запит методом exec()
    if (!query.exec()) {
        qDebug() << "error insert into " << TABLE_PAYMENT;
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();

        return false;
    } else
        return true;
}
