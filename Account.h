// Account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int accountNumber;
    double balance;

public:
    Account(int accountNumber, double initialBalance);

    void deposit(double amount);
    void withdraw(double amount);
    void display() const;

    int getAccountNumber() const { return accountNumber; }
};

#endif // ACCOUNT_H
