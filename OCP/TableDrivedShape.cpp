//
// Created by Polylanger on 2017/4/3.
//

#include <cstring>
#include "TableDrivedShape.h"

const char *Shape::typeOrderTable[] = {
        typeid(Circle).name(),
        typeid(Square).name(),
        0
};

bool Shape::operator<(const Shape &shape) {
    return Precedes(shape);
}

bool Shape::Precedes(const Shape &shape) const {
    const char *thisType = typeid(*this).name();
    const char *argmType = typeid(shape).name();
    bool done = false;
    int thisId = -1;
    int argmId = -1;

    for (int i = 0; !done; i++) {
        const char *tableEntry = typeOrderTable[i];
        if (tableEntry != 0) {
            if (strcmp(tableEntry, thisType) == 0) {
                thisId = i;
            }
            if (strcmp(tableEntry, argmType) == 0) {
                argmId = i;
            }
            if (thisId != -1 && argmId != -1) {
                done = true;
            }
        } else {
            done = true;
        }
    }
    return thisId < argmId;
}

void Square::Draw() const {
    cout << "[Square] be drawed" << endl;
}

void Circle::Draw() const {
    cout << "[Circle] be drawed" << endl;
}
