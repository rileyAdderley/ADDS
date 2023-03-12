//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"
#include <string>
#include <unordered_map>

class Zombie : public Move {
public:
Zombie();
int getResult(std:: string opponent);
std::string getName();

};

#endif