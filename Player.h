#ifndef PLAYER_H
#define PLAYER_H
#include <string>

#include "Move.h"
/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/

class Player {
 protected:
  Move* playerMove;  // Move made
  std::string Name;  // Name of player
 public:
  virtual std::string getName() = 0;  // Returns name of player
  virtual Move* makeMove() = 0;       // Allows player to make move
};

#endif