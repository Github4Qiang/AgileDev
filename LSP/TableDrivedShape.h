//
// Created by Polylanger on 2017/4/3.
//

#ifndef AGILEDEV_SHAPE_H
#define AGILEDEV_SHAPE_H

#include <iostream>
#include <typeinfo>

using namespace std;

class Shape {
private:
    static const char *typeOrderTable[];

public:
    virtual void Draw() const = 0;

    bool Precedes(const Shape &) const;

    bool operator<(const Shape &shape);
};

class Square : public Shape {
public:
    virtual void Draw() const;
};

class Circle : public Shape {
public:
    virtual void Draw() const;
};

#endif //AGILEDEV_SHAPE_H
