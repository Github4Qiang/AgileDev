//
// Created by Polylanger on 2017/4/3.
//

#ifndef AGILEDEV_ISPRUNNER_H
#define AGILEDEV_ISPRUNNER_H

#include "TimedDoor.h"
#include "ATM/ATMTransaction.h"

#define DOOR_TIME_OUT 2

class ISPRunner {
public:
    void Run();
};

class ATMClient {
private:
    DepositTransaction deposit;
    TransferTransaction transfer;
    WithdrawalTransaction withdrawal;
public:
    ATMClient();

    void Deposit();

    void Transfer();

    void Withdrawal();
};

#endif //AGILEDEV_ISPRUNNER_H
