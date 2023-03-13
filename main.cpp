#include "moveFactory.h"
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
#include "Player.h"
#include "Referee.h"
#include "Computer.h"

#include <iostream>
using namespace std;

int main () {
    Human * human = new Human("Human");
    Computer * computer = new Computer;
    Referee ref;

    Player * winner = ref.refGame(human,computer);
    if(winner) {
        cout << winner->getName() <<endl;
    } else {
        cout << "Tie" <<endl;
    }
    
}