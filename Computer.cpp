/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/

#include "Computer.h"

#include <string>

#include "Move.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"

using namespace std;

Computer::Computer(){};

std::string Computer::getName() {  // Returns name as computer
  return "Computer";
}

Move* Computer::makeMove() {  // Computer makes default move rock
  playerMove = new Rock();
  return playerMove;
}