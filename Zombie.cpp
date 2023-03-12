/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#include "Zombie.h"

using namespace std;

Zombie::Zombie() {  // Default constructor
  moveName = "Zombie";
  Result["Pirate"] = 1;
  Result["Monkey"] = 1;
}

int Zombie::getResult(std::string opponentsMove) {  // Returns result of game
  return Result[opponentsMove];
}

string Zombie::getName() {  // Returns move name
  return moveName;
}
