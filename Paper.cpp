//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include <iostream>
#include "Paper.h"

using namespace std;
Paper::Paper() {
    moveName = "Paper";
    result["Rock"] = 1;
    
}

int Paper::getResult(std:: string opponent) {
    return result[opponent];
}

string Paper::getName() {
    return moveName;
}