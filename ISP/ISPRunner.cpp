//
// Created by Polylanger on 2017/4/3.
//

#include "ISPRunner.h"
#include <thread>

//void ISPRunner::Run() {
//    // 定义初始状态是“关”的门
//    TimedDoor door = TimedDoor();
//    cout << door.IsLock() << endl;
//    // 定义一个计时器
//    Timer timer = Timer();
//    // 开门时，注册一个计时器
//    door.Unlock();
////    timer.Register(DOOR_TIME_OUT, door);
//    cout << door.IsLock() << endl;
//}

void ISPRunner::Run() {
    ATMClient client = ATMClient();
    client.Deposit();
    client.Transfer();
    client.Withdrawal();
}

ATMClient::ATMClient() {
    deposit = DepositTransaction();
    transfer = TransferTransaction();
    withdrawal = WithdrawalTransaction();
}

void ATMClient::Deposit() {
    deposit.Execute();
}

void ATMClient::Transfer() {
    transfer.Execute();
}

void ATMClient::Withdrawal() {
    withdrawal.Execute();
}
