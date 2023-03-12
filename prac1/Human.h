//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human : public Player {
public:
char makeMove( );
std::string getName( );
};

#endif