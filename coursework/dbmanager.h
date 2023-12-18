#ifndef DBMANAGER_H
#define DBMANAGER_H
#include "payment.h"
#include "user.h"
#include "account.h"
#include <QSqlDatabase>

// Абстрактний клас (інтерфейс) для роботи з базою даних
class DBManager {
public:
    // Суто віртуальний метод для підключення до бази даних
    virtual void connectToDataBase() = 0;

    // Суто віртуальний метод для отримання обробника (хендлера) підключення до БД
    virtual QSqlDatabase getDB() = 0;

    // Суто віртуальний метод для вставки записів у таблицю
    virtual bool inserIntoTable(const User& user) = 0;
    virtual bool inserIntoTable(const Account& user) = 0;
    virtual bool inserIntoTable(const Payment& user) = 0;

};

#endif // DBMANAGER_H
