#include PLAYER_H
#include COMPUTER_H
#include HUMAN_H
#include REFEREE_H
#include <iostream>

int main {
    Referee R;
    Computer * C = new computer;
    Human * H = new human;
    C->name = "computer";
    H->name = "Riley";
    Player * Winner = R.refGame(H, C);
    if (Winner) {
        cout << Winner->getName() << endl;
    } else {
        cout << "Draw" << endl;
    }

return 0;

}