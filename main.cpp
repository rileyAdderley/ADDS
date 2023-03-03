#include "Player.h"
#include "Computer.h"
//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include "Human.h"
#include "Referee.h"
#include <iostream>

int main() {
    Referee R;
    Computer * C = new Computer;
    Human * H = new Human;
    C->getName() = "Computer";
    H->getName() = "Riley";
    Player * Winner = R.refGame(H, C);
    if (Winner) {
        std::cout << Winner->getName() << std::endl;
    } else {
        std::cout << "Tie" << std::endl;
    }

return 0;

}