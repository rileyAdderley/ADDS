//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106
#include "Referee.h"
#include "Move.h"
#include <iostream>
#include <unordered_map>

using namespace std;

Player * Referee::refGame(Player * player1, Player * player2) {
    Move* player1_move = player1->makeMove();
    Move* player2_move = player2->makeMove();
    
    if (!player1_move || !player2_move) {  
    return nullptr;
  }

    if (player1_move->getName() == player2_move->getName()) {
        return nullptr;
    }

int temp = player1_move->getResult(player2_move->getName());
  if (temp == 1) {  
    return player1;
  } else {
    return player2;
  }
  return nullptr;
}
