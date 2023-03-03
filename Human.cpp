#include <iostream>
#include "Human.h"

 char Human::makeMove( ) {
    char move;
    std::cin >> move;
    return move;

 }

 std::string Human::getName( ) {
    std::string name = "Human";
    return name;
 }
