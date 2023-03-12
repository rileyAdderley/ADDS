//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include <iostream>
#include "Human.h"
#include "Move.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Robot.h"
#include "Zombie.h"
#include "string"
#include "MoveFactory.h"

using namespace std;

 Human::Human() {
name = "Human";
 }

Human::Human(std::string Username) {
   name = Username;
}

string Human::getName() {
   return name;
}

Move * Human::makeMove() {
   std::string temp;
   cin >> temp;
   MoveFactory humanMove;
   humanMove.createMove(temp);

}