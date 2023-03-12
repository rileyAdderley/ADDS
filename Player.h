//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Move.h"
class Player 
{
protected:
Move * playerMove;
std::string name;
public:
virtual Move* makeMove( ) = 0;
virtual std::string getName( ) = 0;

};

#endif