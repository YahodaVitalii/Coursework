#include "payment.h"

Payment::Payment(int accountId,QString name, double amount, const QDate &date, const QString &description)
    : accountId(accountId),name(name), amount(amount), date(date), description(description) {}

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
