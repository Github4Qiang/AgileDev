//
// Created by Polylanger on 2017/4/3.
//

#ifndef AGILEDEV_LSPRUNNER_H
#define AGILEDEV_LSPRUNNER_H

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

void DrawAssShapes(vector<Shape *> &list);

void Run();

#endif //AGILEDEV_LSPRUNNER_H
