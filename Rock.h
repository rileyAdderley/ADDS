//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef ROCK_H
#define ROCK_H
#include "Move.h"
#include <string>
#include <unordered_map>

class Rock : public Move {
public:
Rock();
int getResult(std:: string opponent);
std::string getName();

};

#endif