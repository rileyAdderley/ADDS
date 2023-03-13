//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include "moveFactory.h"
#include "Move.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Monkey.h"


Move* MoveFactory::createMove(
    std::string moveName) {  

  if (moveName == "Rock") {
    return new Rock();
  } else if (moveName == "Paper") {
    return new Paper();
  } else if (moveName == "Scissors") {
    return new Scissors();
  } else if (moveName == "Robot") {
    return new Robot();
  }  else if (moveName == "Pirate") {
    return new Pirate();
  } else if (moveName == "Ninja") {
    return new Ninja();
  } else if (moveName == "Zombie") {
    return new Zombie();
  } else if (moveName == "Monkey") {
    return new Monkey();
  }
  return nullptr;
};