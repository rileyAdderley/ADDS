#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include <unordered_map>

#include "Player.h"
/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/

class Human : public Player {
 public:
  Human();  // Constructor, Sets name as Human if no name provided
  Human(std::string givenName);  // Constructor, Sets name as given if provided
  std::string getName();         // Returns name of Human
  Move* makeMove();              // Returns move as provided by user
};

#endif