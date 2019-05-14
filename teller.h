#ifndef TELLER_H
#define TELLER_H
#include "bankelement.h"
class Teller : public BankElement{
    public:
    Teller(int tid = -1);
    virtual void getInfo(Account &client);
    virtual void changePIN(Account &client);
    virtual void withdrawMoney(Account &client);
    virtual void depositMoney(Account &cient);
    void takeLoan(Account &client);
    void evalLoan(long long &branchBalance);
    virtual void simulate(long long &branchBalance);
};
#endif
