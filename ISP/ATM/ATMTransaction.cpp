//
// Created by Polylanger on 2017/4/4.
//

#include "ATMTransaction.h"

void DepositTransaction::Execute() {
    depositUI.RequestDepositAmount();
}

DepositTransaction::DepositTransaction(DepositUI &depositUI) : depositUI(depositUI) {}

void WithdrawalTransaction::Execute() {
    withdrawalUI.RequestWithdrawAmount();
    withdrawalUI.InformInsuffientFunts();
}

WithdrawalTransaction::WithdrawalTransaction(WithdrawalUI &withdrawalUI) : withdrawalUI(withdrawalUI) {}

void TransferTransaction::Execute() {
    transferUI.RequestTransferAmount();
}

TransferTransaction::TransferTransaction(TransferUI &transferUI) : transferUI(transferUI) {}
