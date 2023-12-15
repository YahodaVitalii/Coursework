#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <QString>

class Account
{
       int id;
       int userId;
       QString name;
       double amount;
       double balance;
public:
    Account(); Account(int id, int userId, QString name, double amount, double balance);

    // Методи для отримання значень властивостей
    int getId() const;
    int getUserId() const;
    double getAmount() const;
    double getBalance() const;
    QString getName() const;

    // Методи для зміни значень властивостей
    void setAmount(double newAmount);
    void setBalance(double newBalance);
};

#endif // ACCOUNT_H
