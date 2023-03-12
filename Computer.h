#ifndef COMPUTER_H
#define COMPUTER_H
/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/

#include <string>

#include "Move.h"
#include "Player.h"
#include "Rock.h"

class Computer : public Player {
 public:
  Computer();             // Constructor
  std::string getName();  // Returns string "computer"
  Move* makeMove();       // Makes move (rock for computer)
};

#endif