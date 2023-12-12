#ifndef USER_H
#define USER_H
#include <QString>

class User
{
    int id;
    QString name;
    QString address;
    QString username;
    QString password;
    int age;
public:
    User(int id, QString name, QString address, QString username, QString password, int age);
     int getId() const;
    QString getName() const;
    QString getAddress() const;
    QString getUsername() const;
    QString getPassword() const;
    int getAge() const;
};

#endif
