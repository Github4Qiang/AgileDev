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
    vector<ATMUI *> aTMUI = {new ScreenUI(), new BrailleUI(), new SpeechUI()};

    virtual void Execute() = 0;
};

class DepositTransaction : public ATMTransaction {
public:
    void Execute() override;
};

class WithdrawalTransaction : public ATMTransaction {
public:
    void Execute() override;
};

class TransferTransaction : public ATMTransaction {
public:
    void Execute() override;
};

#endif //AGILEDEV_ATMTRANSACTION_H
