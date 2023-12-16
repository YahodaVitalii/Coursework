#ifndef PAYMENT_H
#define PAYMENT_H
#include <QDate>
#include <QString>
class Payment {
public:
    // Конструктор
    Payment(int accountId,QString name, double amount, const QDate &date, const QString &description);

    // Методи для отримання значень
    int getAccountId() const;
    double getAmount() const;
    QDate getDate() const;
    QString getDescription() const;
     QString getName() const;

private:
    int accountId;      // ID рахунку
    QString name;
    double amount;      // Сума платежу
    QDate date;         // Дата платежу
    QString description; // Опис платежу
};

#endif // PAYMENT_H
