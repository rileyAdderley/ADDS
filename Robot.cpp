/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#include "Robot.h"

using namespace std;

Robot::Robot() {  // Default constructor
  moveName = "Robot";
  Result["Ninja"] = 1;
  Result["Zombie"] = 1;
}

int Robot::getResult(std::string opponentsMove) {  // Returns result of game
  return Result[opponentsMove];
}

string Robot::getName() {  // Returns move name
  return moveName;
}
