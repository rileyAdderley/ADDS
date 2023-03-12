//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106
#include "Ninja.h"

using namespace std;
Ninja::Ninja() {
    name = "Ninja";
    result["Pirate"] = 1;
    result["Zombie"] = 1;
    
}

int Ninja::getResult(std::string opponent) {
    return result[opponent];
}

string Ninja::getName() {
    return name;
}