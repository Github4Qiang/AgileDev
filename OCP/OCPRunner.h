//
// Created by Polylanger on 2017/4/3.
//

#ifndef AGILEDEV_OCPRUNNER_H
#define AGILEDEV_OCPRUNNER_H

#include "TableDrivedShape.h"
#include <vector>
#include <algorithm>

template<typename P>
class LessP {
public:
    bool operator()(const P p1, const P p2) {
        return (*p1) < (*p2);
    }
};

void DrawAllShapes(vector<Shape *> &list);


class OCPRunner {
public:
    void Run();
};

#endif //AGILEDEV_OCPRUNNER_H
