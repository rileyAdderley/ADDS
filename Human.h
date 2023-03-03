#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human : public Player
{
private:
std::string name;
char move;
public:
char makeMove( );
std::string getName( );
};

#endif