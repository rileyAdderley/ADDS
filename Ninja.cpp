//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106
#include <iostream>
#include "Ninja.h"

using namespace std;
Ninja::Ninja() {
    name = "Ninja";
    result = ["Pirate"] = 1;
    result = ["Zombie"] = 1;
    
}

std::string getResult(std:: string opponent ) {
    return result[opponent];
}

std::string getName( ) {
    return name;
}