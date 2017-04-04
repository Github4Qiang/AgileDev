//
// Created by Polylanger on 2017/4/4.
//

#include "ATMTransaction.h"

void DepositTransaction::Execute() {
    cout << "DepositTransaction Execute: " << endl;
    for (vector<ATMUI *>::iterator iter = aTMUI.begin(); iter != aTMUI.end(); iter++) {
        cout << "\t";
        (*iter)->RequestDepositAmount();
    }
}

void WithdrawalTransaction::Execute() {
    cout << "WithdrawalTransaction Execute" << endl;
    for (vector<ATMUI *>::iterator iter = aTMUI.begin(); iter != aTMUI.end(); iter++) {
        cout << "\t";
        (*iter)->RequestWithdrawAmount();
        cout << "\t";
        (*iter)->InformInsuffientFunts();
    }
}

void TransferTransaction::Execute() {
    cout << "TransferTransaction Execute" << endl;
    for (vector<ATMUI *>::iterator iter = aTMUI.begin(); iter != aTMUI.end(); iter++) {
        cout << "\t";
        (*iter)->RequestTransderAmount();
    }
}
