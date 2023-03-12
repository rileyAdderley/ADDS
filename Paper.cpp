/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/

#include "Paper.h"

using namespace std;

Paper::Paper() {  // Default constructor
  moveName = "Paper";
  Result["Rock"] = 1;
}

int Paper::getResult(std::string opponentsMove) {  // Returns result of game
  return Result[opponentsMove];
}

string Paper::getName() {  // Returns move name
  return moveName;
}