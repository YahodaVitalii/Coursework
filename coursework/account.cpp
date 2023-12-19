#include "account.h"

Account::Account(int id, int userId,QString name, double amount, double balance)
    : id(id), userId(userId), name(name), amount(amount), balance(balance) {}
int Account::getId() const {
    return id;
}

int Account::getUserId() const {
    return userId;
}
QString Account::getName() const{
    return name;
}
double Account::getAmount() const {
    return amount;
}

double Account::getBalance() const {
    return balance;
}

void Account::setAmount(double newAmount) {
    amount = newAmount;
}

void Account::setBalance(double newBalance) {
    balance = newBalance;
}
void Account::setId(int newId) {
    id = newId;
}
void Account::setUserId(int newUserId) {
    userId = newUserId;
}
void Account::setName(const QString &newName) {
    name = newName;
}
