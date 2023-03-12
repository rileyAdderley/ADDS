//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include <iostream>
#include "Rock.h"

Rock::Rock() {
    name = "Rock";
    result = ["Scissors"] = 1;
    
}

std::string getResult(std:: string opponent ) {
    return result[opponent];
}

std::string getName( ) {
    return name;
}