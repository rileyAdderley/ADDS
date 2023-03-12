/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#ifndef REFEREE_H
#define REFEREE_H
#include "Move.h"
#include "Player.h"
class Referee {
 public:
  Player* refGame(Player* player1, Player* player2);  // Returns player who wins
};
#endif