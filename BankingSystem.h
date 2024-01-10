// BankingSystem.h

#ifndef BANKING_SYSTEM_H
#define BANKING_SYSTEM_H

#include <vector>
#include "Account.h"

class BankingSystem {
private:
    std::vector<Account> accounts;

public:
    void addAccount(const Account& account);
    void displayAccounts() const;
};

#endif // BANKING_SYSTEM_H
