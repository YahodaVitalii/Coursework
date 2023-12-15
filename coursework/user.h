#ifndef USER_H
#define USER_H
#include <QString>
#include <QVector>
#include "account.h"
class User
{
    int id;
    QString name;
    QString address;
    QString username;
    QString password;
    int age;

public:
    QVector<Account*> accounts;
    User(int id, QString name, QString address, QString username, QString password, int age);
    User(const User &other);
     int getId() const;
    QString getName() const;
    QString getAddress() const;
    QString getUsername() const;
    QString getPassword() const;
    int getAge() const;
};

#endif
