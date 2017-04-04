//
// Created by Polylanger on 2017/4/3.
//

#include "ISPRunner.h"

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
    ATMUI ui = ATMUI();
    DepositTransaction deposit(ui);
    TransferTransaction transfer(ui);
    WithdrawalTransaction withdrawal(ui);

    deposit.Execute();
    transfer.Execute();
    withdrawal.Execute();
}

