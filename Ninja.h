//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef NINJA_H
#define NINJA_H
#include "Move.h"
#include <string>
#include <unordered_map>

class Ninja : public Move {
public:
Ninja();
std::string getResult(std:: string opponent );
std::string getName( );

};

#endif