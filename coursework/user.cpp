#include "user.h"

User::User(int id, QString name, QString address, QString username, QString password, int age)
    : id(id), name(name), address(address), username(username), password(password), age(age) {}

User::User(const User &other)
    : id(other.id), name(other.name), address(other.address),
      username(other.username), password(other.password), age(other.age) {

}
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
void User::setId(int newId) {
    id = newId;
}

void User::setName(const QString &newName) {
    name = newName;
}

void User::setAddress(const QString &newAddress) {
    address = newAddress;
}

void User::setUsername(const QString &newUsername) {
    username = newUsername;
}

void User::setPassword(const QString &newPassword) {
    password = newPassword;
}

void User::setAge(int newAge) {
    age = newAge;
}
QString User::toString() const {
    QString userString;
    QTextStream stream(&userString);

    stream << "ID: " << getId() << "\n";
    stream << "Name: " << getName() << "\n";
    stream << "Address: " << getAddress() << "\n";
    stream << "Username: " << getUsername() << "\n";
    stream << "Password: " << getPassword() << "\n";
    stream << "Age: " << getAge();

    return userString;
}
