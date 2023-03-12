//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106
#include <iostream>
#include "Pirate.h"

Pirate::Pirate() {
    name = "Pirate";
    result = ["Robot"] = 1;
    result = ["Monkey"] = 1;
    
}

std::string getResult(std:: string opponent ) {
    return result[opponent];
}

std::string getName( ) {
    return name;
}