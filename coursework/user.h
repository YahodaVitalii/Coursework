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
    User(){

    }
    User(int id, QString name, QString address, QString username, QString password, int age);
    User(const User &other);
     int getId() const;
    QString getName() const;
    QString getAddress() const;
    QString getUsername() const;
    QString getPassword() const;
    int getAge() const;

    void setId(int newId);
        void setName(const QString &newName);
        void setAddress(const QString &newAddress);
        void setUsername(const QString &newUsername);
        void setPassword(const QString &newPassword);
        void setAge(int newAge);

    QString toString() const;
};

#endif
