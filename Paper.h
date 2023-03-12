//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef PAPER_H
#define PAPER_H
#include "Move.h"
#include <string>
#include <unordered_map>

class Paper : public Move {
public:
Paper();
int getResult(std:: string opponent);
std::string getName();

};

#endif