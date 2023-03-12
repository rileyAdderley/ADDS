/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#include "Rock.h"

using namespace std;

Rock::Rock() {  // Default constructor
  moveName = "Rock";
  Result["Scissors"] = 1;
}

int Rock::getResult(std::string opponentsMove) {  // Returns result of game
  return Result[opponentsMove];
}

string Rock::getName() {  // Returns move name
  return moveName;
}