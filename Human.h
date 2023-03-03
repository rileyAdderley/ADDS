#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class human : public player
{
private:
std::string name;
char move;
public:
char makeMove( );
std::string getName( );
};

#endif