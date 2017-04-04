//
// Created by Polylanger on 2017/4/4.
//

#ifndef AGILEDEV_ATMUI_H
#define AGILEDEV_ATMUI_H

#include <iostream>

using namespace std;

class DepositUI {
public:
    virtual void RequestDepositAmount() = 0;
};

class TransferUI {
public:
    virtual void RequestTransferAmount() = 0;
};

class WithdrawalUI {
public:
    virtual void RequestWithdrawAmount() = 0;

    virtual void InformInsuffientFunts() = 0;
};

class ATMUI : public TransferUI, public WithdrawalUI, public DepositUI {
public:
    void RequestDepositAmount() override;

    void RequestTransferAmount() override;

    void RequestWithdrawAmount() override;

    void InformInsuffientFunts() override;
};

#endif //AGILEDEV_ATMUI_H
