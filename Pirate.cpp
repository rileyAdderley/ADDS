//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106
#include <iostream>
#include "Pirate.h"

using namespace std;
Pirate::Pirate() {
    moveName = "Pirate";
    result["Robot"] = 1;
    result["Monkey"] = 1;
    
}

int Pirate::getResult(std:: string opponent) {
    return result[opponent];
}

string Pirate::getName() {
    return moveName;
}