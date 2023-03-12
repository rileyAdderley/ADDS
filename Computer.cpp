//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106
#include "Computer.h"
#include "Scissors.h"
#include "Paper.h"
#include "Rock.h"
#include "Move.h"
#include <string>

using namespace std;

Computer::Computer(){};
 std::string Computer::getName( ) {
    return "Computer";
 }

 Move * Computer::makeMove(){
   playerMove = new Rock();
   return playerMove;
 }


