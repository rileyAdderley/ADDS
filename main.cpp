#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include <iostream>

int main() {
    Referee R;
    Computer * C = new Computer;
    Human * H = new Human;
    C->getName() = "computer";
    H->getName() = "Riley";
    player * Winner = R.refGame(H, C);
    if (Winner) {
        std::cout << Winner->getName() << std::endl;
    } else {
        std::cout << "Draw" << std::endl;
    }

return 0;

}