//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"
#include <string>
#include <unordered_map>

class Pirate : public Move {
public:
Pirate();
std::string getResult(std:: string opponent );
std::string getName( );

};

#endif