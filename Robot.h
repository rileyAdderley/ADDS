//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"
#include <string>
#include <unordered_map>

class Robot : public Move {
public:
Robot();
std::string getResult(std:: string opponent );
std::string getName( );

};

#endif