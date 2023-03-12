//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include "moveFactory.h"

#include <iostream>

#include "Human.h"
#include "monkey.h"
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
Move* MoveFactory::createMove(
    std::string moveName) {  

  if (moveName == "Rock") {
    Move* m = new Rock();
    return m;
  } else if (moveName == "Paper") {
    Move* m = new Paper();
    return m;
  } else if (moveName == "Scissors") {
    Move* m = new Scissors();
    return m;
  } else if (moveName == "Robot") {
    Move* m = new Robot();
    return m;
  }  else if (moveName == "Pirate") {
    Move* m = new Pirate();
    return m;
  } else if (moveName == "Ninja") {
    Move* m = new Ninja();
    return m;
  } else if (moveName == "Zombie") {
    Move* m = new Zombie();
    return m;
  } else if (moveName == "Monkey") {
    Move* m = new Monkey();
    return m;
  }

  return nullptr;
}