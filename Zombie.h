/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>
#include <unordered_map>

#include "Move.h"

class Zombie : public Move {
 public:
  Zombie();                                  // Default constructor
  int getResult(std::string opponentsMove);  // Returns result of game
  std::string getName();                     // Returns move name
};

#endif
