//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include <iostream>
#include "Rock.h"

using namespace std;
Rock::Rock() {
    name = "Rock";
    result["Scissors"] = 1;
    
}

int Rock::getResult(std:: string opponent) {
    return result[opponent];
}

string Rock::getName( ) {
    return name;
}