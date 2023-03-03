//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer : public Player {
public:
char makeMove( );
std::string getName( );

};

#endif