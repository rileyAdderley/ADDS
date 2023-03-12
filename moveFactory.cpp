//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Robot.h"
#include "Zombie.h"
#include "string"
#include "moveFactory.h"
#include "Human.h"
#include <iostream>

using namespace std;
Move* MoveFactory::createMove(std::string moveName) {

    if(moveName == "Rock") {
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
    } else if (moveName == "Pirate") {
        Move* m = new Pirate();
        return m;
    }  else if (moveName == "Ninja") {
        Move* m = new Ninja();
        return m;
    } else if (moveName == "Zombie") {
        Move* m = new Zombie();
        return m;
    } else if (moveName == "Monkey") {
        Move* m = new Monkey();
        return m;

    return nullptr;
}