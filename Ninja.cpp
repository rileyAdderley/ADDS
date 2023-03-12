/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#include "Ninja.h"

using namespace std;

Ninja::Ninja() {  // Default constructor
  moveName = "Ninja";
  Result["Pirate"] = 1;
  Result["Zombie"] = 1;
}

int Ninja::getResult(std::string opponentsMove) {  // Returns result of game
  return Result[opponentsMove];
}

string Ninja::getName() {  // Returns move name
  return moveName;
}
