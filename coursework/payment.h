#ifndef PAYMENT_H
#define PAYMENT_H
#include <QDate>
#include <QString>
class Payment {
public:
    // Конструктор
    Payment(int id,int accountId,QString name, double amount, const QDate &date, const QString &description);
    Payment(){}
    // Методи для отримання значень
    int getId() const;
    int getAccountId() const;
    double getAmount() const;
    QDate getDate() const;
    QString getDescription() const;
     QString getName() const;
     void setId(int newId);
        void setAccountId(int newAccountId);
        void setAmount(double newAmount);
        void setDate(const QDate &newDate);
        void setDescription(const QString &newDescription);
        void setName(const QString &newName);
private:
    int id;
    int accountId;      // ID рахунку
    QString name;
    double amount;      // Сума платежу
    QDate date;         // Дата платежу
    QString description; // Опис платежу
};

#endif // PAYMENT_H
