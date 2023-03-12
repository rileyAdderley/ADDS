/*
    Worked on by:
    Maxwell Bruce (A1766106)
    Riley Adderley (A1810816)
    Zachary Shinnick (A1851035)
*/
#ifndef MOVE_H
#define MOVE_H
#include <string>
#include <unordered_map>

class Move {
 protected:
  std::unordered_map<std::string, bool>
      Result;            // Contains outcome for each move
  std::string moveName;  // Contains moveName
 public:
  virtual int getResult(
      std::string opponentsMove) = 0;  // Returns result of move
  virtual std::string getName() = 0;   // Returns moveName
};

#endif