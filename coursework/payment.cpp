#include "payment.h"

Payment::Payment(int id,int accountId,QString name, double amount, const QDate &date, const QString &description)
    :id(id), accountId(accountId),name(name), amount(amount), date(date), description(description) {}

// Реалізація методів для отримання значень
int Payment::getAccountId() const {
    return accountId;
}

double Payment::getAmount() const {
    return amount;
}

QDate Payment::getDate() const {
    return date;
}

QString Payment::getDescription() const {
    return description;
}
QString Payment::getName() const{
    return name;
}
int Payment::getId() const {
    return id;
}
void Payment::setId(int newId) {
    id = newId;
}

void Payment::setAccountId(int newAccountId) {
    accountId = newAccountId;
}

void Payment::setAmount(double newAmount) {
    amount = newAmount;
}

void Payment::setDate(const QDate &newDate) {
    date = newDate;
}

void Payment::setDescription(const QString &newDescription) {
    description = newDescription;
}

void Payment::setName(const QString &newName) {
    name = newName;
}
