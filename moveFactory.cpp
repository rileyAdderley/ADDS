/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/

#include "moveFactory.h"

#include <iostream>

#include "Human.h"
#include "Monkey.h"
#include "Move.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"
#include "string"
using namespace std;
Move* MoveFactory::generateMove(
    std::string movename) {  // Generates move based on string provided

  if (movename == "Rock") {
    Move* m = new Rock();
    return m;
  } else if (movename == "Paper") {
    Move* m = new Paper();
    return m;
  } else if (movename == "Scissors") {
    Move* m = new Scissors();
    return m;
  } else if (movename == "Robot") {
    Move* m = new Robot();
    return m;
  } else if (movename == "Monkey") {
    Move* m = new Monkey();
    return m;
  } else if (movename == "Pirate") {
    Move* m = new Pirate();
    return m;
  } else if (movename == "Ninja") {
    Move* m = new Ninja();
    return m;
  } else if (movename == "Zombie") {
    Move* m = new Zombie();
    return m;
  }

  return nullptr;
}