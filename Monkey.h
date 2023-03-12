//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"
#include <string>
#include <unordered_map>

class Monkey : public Move {
 public:
  Monkey();                                  
  int getResult(std::string opponent);  
  std::string getName();  

};                   

#endif