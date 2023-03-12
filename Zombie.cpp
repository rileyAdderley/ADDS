//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106
#include <iostream>
#include "Zombie.h"

using namespace std;
Zombie::Zombie() {
    name = "Zombie";
    result = ["Pirate"] = 1;
    result = ["Monkey"] = 1;
    
}

std::string getResult(std:: string opponent ) {
    return result[opponent];
}

std::string getName( ) {
    return name;
}