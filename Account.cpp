// Account.cpp

#include "Account.h"
#include <iostream>

Account::Account(int accountNumber, double initialBalance)
    : accountNumber(accountNumber), balance(initialBalance) {}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds!" << std::endl;
    }
}

void Account::display() const {
    std::cout << "Account Number: " << accountNumber << ", Balance: $" << balance << std::endl;
}
