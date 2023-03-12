//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include <iostream>
#include "Scissors.h"

using namespace std;
Scissors::Scissors() {
    moveName = "Scissors";
    result["Paper"] = 1;
    
}

int Scissors::getResult(std:: string opponent) {
    return result[opponent];
}

string Scissors::getName() {
    return moveName;
}