/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#include "Pirate.h"

using namespace std;

Pirate::Pirate() {  // Default constructor
  moveName = "Pirate";
  Result["Robot"] = 1;
  Result["Monkey"] = 1;
}

int Pirate::getResult(std::string opponentsMove) {  // Returns result of game
  return Result[opponentsMove];
}

string Pirate::getName() {  // Returns move name
  return moveName;
}
