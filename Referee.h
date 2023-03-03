#ifndef REFEREE_H
#define REFEREE_H
#include "Computer.h"
#include "Human.h"
#include "Player.h"

class referee
{

public:
Referee( );
Player * refGame(Player * player1, Player * player2);
};

#endif