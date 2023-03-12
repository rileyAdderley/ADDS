/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/

#ifndef MOVEFACTOR_H
#define MOVEFACTORY_H
#include "Move.h"
class MoveFactory {
 public:
  Move* generateMove(
      std::string movename);  // Generates move based on string provided
};
#endif