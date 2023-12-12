#include "user.h"

User::User(int id, QString name, QString address, QString username, QString password, int age)
    : id(id), name(name), address(address), username(username), password(password), age(age) {}


int User::getId() const {
    return id;
}

QString User::getName() const {
    return name;
}

QString User::getAddress() const {
    return address;
}

QString User::getUsername() const {
    return username;
}

QString User::getPassword() const {
    return password;
}
int User::getAge() const {
    return age;
}
