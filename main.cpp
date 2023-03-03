#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include <iostream>

int main() {
    referee R;
    computer * C = new computer;
    human * H = new human;
    C->getName() = "computer";
    H->getName() = "Riley";
    player * Winner = R.refGame(C, H);
    if (Winner) {
        std::cout << Winner->getName() << std::endl;
    } else {
        std::cout << "Draw" << std::endl;
    }

return 0;

}