//
// Created by Polylanger on 2017/4/4.
//

#ifndef AGILEDEV_ATMUI_H
#define AGILEDEV_ATMUI_H

#include <iostream>

using namespace std;

class ATMUI {
public:
    virtual void RequestDepositAmount() = 0;

    virtual void RequestWithdrawAmount() = 0;

    virtual void RequestTransderAmount() = 0;

    virtual void InformInsuffientFunts() = 0;
};

class ScreenUI : public ATMUI {
public:
    void RequestDepositAmount() override;

    void RequestWithdrawAmount() override;

    void RequestTransderAmount() override;

    void InformInsuffientFunts() override;
};

class BrailleUI : public ATMUI {
public:
    void RequestDepositAmount() override;

    void RequestWithdrawAmount() override;

    void RequestTransderAmount() override;

    void InformInsuffientFunts() override;
};

class SpeechUI : public ATMUI {
public:
    void RequestDepositAmount() override;

    void RequestWithdrawAmount() override;

    void RequestTransderAmount() override;

    void InformInsuffientFunts() override;
};

#endif //AGILEDEV_ATMUI_H
