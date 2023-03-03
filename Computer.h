#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class computer : public player {
private:
std::string name;
char move;
public:
char makeMove( );
std::string getName( );

};

#endif