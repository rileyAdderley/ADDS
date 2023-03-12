//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include <iostream>
#include "Scissors.h"

Scissors::Scissors() {
    name = "Scissors";
    result = ["Paper"] = 1;
    
}

std::string getResult(std:: string opponent ) {
    return result[opponent];
}

std::string getName( ) {
    return name;
}