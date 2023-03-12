/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#include "Referee.h"

#include <iostream>
#include <unordered_map>

#include "Move.h"

using namespace std;

Player* Referee::refGame(Player* player1,
                         Player* player2) {  // Returns player who wins
  Move* player1_move = player1->makeMove();
  Move* player2_move = player2->makeMove();
  if (!player1_move || !player2_move) {  // Checks for null
    return nullptr;
  }
  if (player1_move->getName() == player2_move->getName()) {  // Checks for tie
    return nullptr;
  }
  int temp_Result = player1_move->getResult(player2_move->getName());
  if (temp_Result == 1) {  // Returns outcome if not tie
    return player1;
  } else {
    return player2;
  }
  return nullptr;
}