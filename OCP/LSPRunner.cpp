//
// Created by Polylanger on 2017/4/3.
//

#include "LSPRunner.h"

void DrawAssShapes(vector<Shape *> &list) {
    vector<Shape *> orderedList = list;
    sort(orderedList.begin(), orderedList.end(), LessP<Shape *>());
    vector<Shape *>::iterator iter;
    for (iter = orderedList.begin(); iter != orderedList.end(); iter++) {
        (*iter)->Draw();
    }
}

void Run() {
    vector<Shape *> list = vector<Shape *>();
    list.push_back(new Square());
    list.push_back(new Circle());
    list.push_back(new Square());
    list.push_back(new Circle());
    list.push_back(new Square());
    list.push_back(new Circle());
    list.push_back(new Square());
    list.push_back(new Circle());
    DrawAssShapes(list);
}