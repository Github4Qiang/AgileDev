//
// Created by Polylanger on 2017/4/3.
//

#ifndef AGILEDEV_TIMEDDOOR_H
#define AGILEDEV_TIMEDDOOR_H


class Door {
public:
    virtual void Lock() = 0;

    virtual void Unlock() = 0;

    virtual bool IsLock() = 0;
};

class Timer {
public:
    void Register(int timeout, TimeClient *client);
};

class TimeClient {
public:
    virtual void TimeOut() = 0;
};


#endif //AGILEDEV_TIMEDDOOR_H
