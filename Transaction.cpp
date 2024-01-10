// Transaction.cpp

#include "Transaction.h"

void Transaction::performTransaction(Account& account, double amount) {
    std::cout << "Performing transaction on account " << account.getAccountNumber() << ":" << std::endl;
    account.deposit(amount);
    account.withdraw(amount / 2);
    account.display();
}
