//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include <iostream>
#include "Computer.h"
#include "Scissors.h"
#include "Paper.h"
#include <string>

using namespace std;

Computer::Computer();
 std::string Computer::getName( ) {
    return "Computer";
 }

 Move * Computer::makeMove(){
   playerMove = new Rock();
   return playerMove;
 }


