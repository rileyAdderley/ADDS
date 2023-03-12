//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

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
#include "Human.h"
#include <iostream>

using namespace std;
Move * MoveFactory::createMove(std::string move) {

    if(move == "Rock") {
        Move* m = new Rock();
        return m;
    } else if (move == "Paper") {
        Move* m = new Paper();
        return m;
    } else if (move == "Scissors") {
        Move* m = new Scissors();
        return m;
    } else if (move == "Robot") {
        Move* m = new Robot();
        return m;
    } else if (move == "Monkey") {
        Move* m = new Monkey();
        return m;
    } else if (move == "Pirate") {
        Move* m = new Pirate();
        return m;
    } else if (move == "Ninja") {
        Move* m = new Ninja();
        return m;
    } else if (move == "Zombie") {
        Move* m = new Zombie();
        return m;
    }

    return nullptr;
}