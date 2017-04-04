//
// Created by Polylanger on 2017/4/4.
//

#ifndef AGILEDEV_ATMTRANSACTION_H
#define AGILEDEV_ATMTRANSACTION_H

#include <iostream>
#include <vector>
#include "ATMUI.h"

using namespace std;

class ATMTransaction {
public:
    virtual void Execute() = 0;
};

class DepositTransaction : public ATMTransaction {
private:
    DepositUI &depositUI;
public:
    DepositTransaction(DepositUI &depositUI);

    void Execute() override;
};

class WithdrawalTransaction : public ATMTransaction {
private:
    WithdrawalUI &withdrawalUI;
public:
    WithdrawalTransaction(WithdrawalUI &withdrawalUI);

    void Execute() override;
};

class TransferTransaction : public ATMTransaction {
private:
    TransferUI &transferUI;
public:
    TransferTransaction(TransferUI &transferUI);

public:
    void Execute() override;
};

#endif //AGILEDEV_ATMTRANSACTION_H
