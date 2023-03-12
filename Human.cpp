/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#include "Human.h"

#include <iostream>

#include "Monkey.h"
#include "Move.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"
#include "moveFactory.h"
#include "string"

using namespace std;

Human::Human() {
  Name = "Human";  // Sets name as Human if no name provided
}

Human::Human(string givenName) {
  Name = givenName;  // Sets name as given if provided
}

string Human::getName() {
  return Name;  // Returns name of Human
}

Move* Human::makeMove() {  // Returns move as provided by user
  std::string tempMove;
  cin >> tempMove;
  MoveFactory factory;

  return factory.generateMove(tempMove);  // Generates move
}