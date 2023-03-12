/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#include "Monkey.h"

using namespace std;

Monkey::Monkey() {  // Default constructor
  moveName = "Monkey";
  Result["Ninja"] = 1;
  Result["Robot"] = 1;
}

int Monkey::getResult(std::string opponentsMove) {  // Returns result of game
  return Result[opponentsMove];
}

string Monkey::getName() {  // Returns move name
  return moveName;
}
