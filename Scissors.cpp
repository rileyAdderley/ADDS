/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#include "Scissors.h"

using namespace std;

Scissors::Scissors() {  // Default constructor
  moveName = "Scissors";
  Result["Paper"] = 1;
}

int Scissors::getResult(std::string opponentsMove) {  // Returns result of game
  return Result[opponentsMove];
}

string Scissors::getName() {  // Returns move name
  return moveName;
}