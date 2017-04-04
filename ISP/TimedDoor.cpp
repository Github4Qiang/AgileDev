////
//// Created by Polylanger on 2017/4/3.
////
//
//#include "TimedDoor.h"
//
//
//Timer::Timer() {
//    beginTime = clock();
//}
//
//void Timer::Register(int timeout, TimerClient &client) {
//    int slot = 0;
//    do {
//        slot = (clock() - beginTime) / CLOCKS_PER_SEC;
//    } while (slot < timeout);
//    client.TimeOut();
//}
//
//
//void TimedDoor::Lock() {
//    this->lock = true;
//}
//
//void TimedDoor::Unlock() {
//    this->lock = false;
//}
//
//bool TimedDoor::IsLock() {
//    return this->lock;
//}
//
//void TimedDoor::TimeOut() {
//    cout << "TimeOut" << endl;
//}
