/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#ifndef NINJA_H
#define NINJA_H
#include <string>
#include <unordered_map>

#include "Move.h"

class Ninja : public Move {
 public:
  Ninja();                                   // Default constructor
  int getResult(std::string opponentsMove);  // Returns result of game
  std::string getName();                     // Returns move name
};

#endif