

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
                              "id INTEGER PRIMARY KEY AUTOINCREMENT, "
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
bool SqliteDBManager::updateAccountBalance(int accountId, double newBalance) {
    QSqlQuery query;

    // SQL query to update the balance for the specified account
    query.prepare("UPDATE " TABLE_ACCOUNT " SET "
                  TABLE_ACCOUNT_BALANCE " = :NewBalance "
                                        "WHERE id = :AccountId");

    query.bindValue(":NewBalance", newBalance);
    query.bindValue(":AccountId", accountId);

    // Execute the query
    if (!query.exec()) {
        qDebug() << "Error updating account balance";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
        return false;
    } else {
        qDebug() << "Account balance updated successfully";
        return true;
    }
}

bool SqliteDBManager::updateAccountAmount(int accountId, double newAmount) {
    QSqlQuery query;

    // SQL query to update the amount for the specified account
    query.prepare("UPDATE " TABLE_ACCOUNT " SET "
                  TABLE_ACCOUNT_AMOUNT " = :NewAmount "
                                       "WHERE id = :AccountId");

    query.bindValue(":NewAmount", newAmount);
    query.bindValue(":AccountId", accountId);

    // Execute the query
    if (!query.exec()) {
        qDebug() << "Error updating account amount";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
        return false;
    } else {
        qDebug() << "Account amount updated successfully";
        return true;
    }
}
User SqliteDBManager::getUserById(int userId) {
    QSqlQuery query;
    User user;

    // SQL query to retrieve user data based on the user ID
    query.prepare("SELECT * FROM " TABLE_USER " WHERE id = :UserId");
    query.bindValue(":UserId", userId);

    // Execute the query
    if (query.exec() && query.next()) {
        // Retrieve data from the query result and populate the User object
        user.setId(query.value("id").toInt());
        user.setName(query.value(TABLE_USER_NAME).toString());
        user.setAddress(query.value(TABLE_USER_ADDRESS).toString());
        user.setUsername(query.value(TABLE_USER_USERNAME).toString());
        user.setPassword(query.value(TABLE_USER_PASSWORD).toString());
        user.setAge(query.value(TABLE_USER_AGE).toInt());

        qDebug() << "User data retrieved successfully";
    } else {
        qDebug() << "Error retrieving user data";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }

    return user;
}
Account SqliteDBManager::getAccountById(int accountId) {
    QSqlQuery query;
    Account account;

    query.prepare("SELECT * FROM " TABLE_ACCOUNT " WHERE id = :AccountId");
    query.bindValue(":AccountId", accountId);

    if (query.exec() && query.next()) {
        account.setId(query.value("id").toInt());
        account.setName(query.value(TABLE_ACCOUNT_NAME).toString());
        account.setAmount(query.value(TABLE_ACCOUNT_AMOUNT).toDouble());
        account.setBalance(query.value(TABLE_ACCOUNT_BALANCE).toDouble());
        account.setUserId(query.value(TABLE_ACCOUNT_USER_ID).toInt());

        qDebug() << "Account data retrieved successfully";
    } else {
        qDebug() << "Error retrieving account data";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }

    return account;
}

Payment SqliteDBManager::getPaymentById(int paymentId) {
    QSqlQuery query;
    Payment payment;

    query.prepare("SELECT * FROM " TABLE_PAYMENT " WHERE id = :PaymentId");
    query.bindValue(":PaymentId", paymentId);

    if (query.exec() && query.next()) {
        payment.setId(query.value("id").toInt());
        payment.setName(query.value(TABLE_PAYMENT_NAME).toString());
        payment.setAmount(query.value(TABLE_PAYMENT_AMOUNT).toDouble());
        payment.setDate(query.value(TABLE_PAYMENT_DATE).toDate());
        payment.setDescription(query.value(TABLE_PAYMENT_DESCRIPTION).toString());
        payment.setAccountId(query.value(TABLE_PAYMENT_ACCOUNT_ID).toInt());

        qDebug() << "Payment data retrieved successfully";
    } else {
        qDebug() << "Error retrieving payment data";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }

    return payment;
}
int SqliteDBManager::findUserIdByUsername(const QString &usernameToFind) {
    QSqlQuery query;
    int userId = -1;  // Assuming -1 is used to indicate that the user was not found

    // SQL query to retrieve the ID of the user with the given username
    query.prepare("SELECT id FROM " TABLE_USER " WHERE " TABLE_USER_USERNAME " = :Username");
    query.bindValue(":Username", usernameToFind);

    // Execute the query
    if (query.exec() && query.next()) {
        // Retrieve the user ID from the query result
        userId = query.value("id").toInt();
        qDebug() << "User ID found for username" << usernameToFind << ": " << userId;
    } else {
        qDebug() << "Error finding user ID for username" << usernameToFind;
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }

    return userId;
}
QVector<QString> SqliteDBManager::getAllAccountNamesForCurrentUser(int currentUserId) {
    QSqlQuery query;
    QVector<QString> accountNames;

    // SQL query to retrieve all account names for the current user
    query.prepare("SELECT " TABLE_ACCOUNT_NAME ", " TABLE_ACCOUNT_USER_ID " FROM " TABLE_ACCOUNT);

    // Execute the query
    if (query.exec()) {
        // Fetch account names for the current user and add each one to the QVector
        while (query.next()) {
            QString accountName = query.value(TABLE_ACCOUNT_NAME).toString();
            int userId = query.value(TABLE_ACCOUNT_USER_ID).toInt();

            // Check if the user_id matches the currentUser->id
            if (userId == currentUserId) {
                accountNames.append(accountName);
            }
        }

        qDebug() << "All account names for the current user retrieved successfully";
    } else {
        qDebug() << "Error retrieving account names for the current user";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }

    return accountNames;
}
Account SqliteDBManager::getAccountByName(const QString &accountName) {
    QSqlQuery query;
    Account foundAccount;

    // SQL query to retrieve the account by name
    query.prepare("SELECT * FROM " TABLE_ACCOUNT " WHERE " TABLE_ACCOUNT_NAME " = :AccountName");
    query.bindValue(":AccountName", accountName);

    // Execute the query
    if (query.exec() && query.next()) {
        foundAccount.setId(query.value("id").toInt());
        foundAccount.setName(query.value(TABLE_ACCOUNT_NAME).toString());
        foundAccount.setAmount(query.value(TABLE_ACCOUNT_AMOUNT).toDouble());
        foundAccount.setBalance(query.value(TABLE_ACCOUNT_BALANCE).toDouble());
        foundAccount.setUserId(query.value(TABLE_ACCOUNT_USER_ID).toInt());

        qDebug() << "Account data retrieved successfully";
    } else {
        qDebug() << "Error retrieving account data";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }

    return foundAccount;
}
QVector<QString> SqliteDBManager::getAllPaymentNamesForCurrentUser(int currentUserId) {
    QSqlQuery query;
    QVector<QString> paymentNames;

    // SQL query to retrieve all payment names for the current user
    query.prepare("SELECT " TABLE_PAYMENT_NAME ", " TABLE_PAYMENT_ACCOUNT_ID " FROM " TABLE_PAYMENT);

    // Execute the query
    if (query.exec()) {
        // Fetch payment names for the current user and add each one to the QVector
        while (query.next()) {
            QString paymentName = query.value(TABLE_PAYMENT_NAME).toString();
            int accountId = query.value(TABLE_PAYMENT_ACCOUNT_ID).toInt();

            // Check if the account_id matches the currentUserId
            if (accountId == currentUserId) {
                paymentNames.append(paymentName);
            }
        }

        qDebug() << "All payment names for the current user retrieved successfully";
    } else {
        qDebug() << "Error retrieving payment names for the current user";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }

    return paymentNames;
}

Payment SqliteDBManager::getPaymentByName(const QString &paymentName) {
    QSqlQuery query;
    Payment foundPayment;

    // SQL query to retrieve the payment by name
    query.prepare("SELECT * FROM " TABLE_PAYMENT " WHERE " TABLE_PAYMENT_NAME " = :PaymentName");
    query.bindValue(":PaymentName", paymentName);

    if (query.exec() && query.next()) {
        foundPayment.setId(query.value("id").toInt());
        foundPayment.setName(query.value(TABLE_PAYMENT_NAME).toString());
        foundPayment.setAmount(query.value(TABLE_PAYMENT_AMOUNT).toDouble());
        foundPayment.setDate(query.value(TABLE_PAYMENT_DATE).toDate());
        foundPayment.setDescription(query.value(TABLE_PAYMENT_DESCRIPTION).toString());
        foundPayment.setAccountId(query.value(TABLE_PAYMENT_ACCOUNT_ID).toInt());

        qDebug() << "Payment data retrieved successfully";
    } else {
        qDebug() << "Error retrieving payment data";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }
    // Execute the query


    return foundPayment;
}
Payment* SqliteDBManager::getLastPaymentForAccount(int currentAccountId) {
    QSqlQuery query;
    Payment *lastPayment = nullptr;

    // SQL query to retrieve the last payment for the specified account ID
    query.prepare("SELECT * FROM " TABLE_PAYMENT " WHERE " TABLE_PAYMENT_ACCOUNT_ID " = :AccountId ORDER BY id DESC LIMIT 1");
    query.bindValue(":AccountId", currentAccountId);

    // Execute the query
    if (query.exec() && query.next()) {
        // Retrieve payment information from the query result and create a Payment object
        int paymentId = query.value(TABLE_PAYMENT_ID).toInt();
        QString paymentName = query.value(TABLE_PAYMENT_NAME).toString();
        double paymentAmount = query.value(TABLE_PAYMENT_AMOUNT).toDouble();
        QDate paymentDate = query.value(TABLE_PAYMENT_DATE).toDate();
        QString paymentDescription = query.value(TABLE_PAYMENT_DESCRIPTION).toString();

        lastPayment = new Payment(paymentId, currentAccountId,paymentName, paymentAmount, paymentDate, paymentDescription);

        qDebug() << "Last payment retrieved successfully for account ID" << currentAccountId;
    } else {
        qDebug() << "Error retrieving last payment for account ID" << currentAccountId;
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }

    return lastPayment;
}
Account* SqliteDBManager::getLastAccountForUser(int currentUserId) {
    QSqlQuery query;
    Account *lastAccount = nullptr;

    // SQL query to retrieve the last account for the specified user ID
    query.prepare("SELECT * FROM " TABLE_ACCOUNT " WHERE " TABLE_ACCOUNT_USER_ID " = :UserId ORDER BY id DESC LIMIT 1");
    query.bindValue(":UserId", currentUserId);

    // Execute the query
    if (query.exec() && query.next()) {
        // Retrieve account information from the query result and create an Account object
        int accountId  = query.value("id").toInt();
        QString accountName = query.value(TABLE_ACCOUNT_NAME).toString();
        double amount = query.value(TABLE_ACCOUNT_AMOUNT).toDouble();
        double balance = query.value(TABLE_ACCOUNT_BALANCE).toDouble();

        lastAccount = new Account(accountId, currentUserId, accountName, amount, balance);

        qDebug() << "Last account retrieved successfully for user ID" << currentUserId;
    } else {
        qDebug() << "Error retrieving last account for user ID" << currentUserId;
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }

    return lastAccount;
}
