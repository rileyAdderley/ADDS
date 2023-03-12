
//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef MOVE_H
#define MOVE_H
#include <unordered_map>
#include <string>

class Move {
protected:
std::unordered_map<std::string, bool> result;
std::string moveName;
public:
virtual int getResult(std:: string opponent) = 0;
virtual std::string getName() = 0;

};

#endif