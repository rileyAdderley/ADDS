//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"
#include <string>
#include <unordered_map>

class Scissors : public Move {
public:
Scissors();
std::string getResult(std:: string opponent );
std::string getName( );

};

#endif