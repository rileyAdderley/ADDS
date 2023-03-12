
//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H
#include "Move.h"
#include <iostream>

class MoveFactory {
    public:
    static Move* createMove(std:: string moveName);
    };

#endif