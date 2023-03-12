//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>
#include <unordered_map>

class Human : public Player {
private: 
std::unordered_map<std::string,bool> avaliable_moves;
public:
Human();
Human(std::string Username)
Move * makeMove();
std::string getName( );

};

#endif