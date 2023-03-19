//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include "Reverser.h"
#include <string>

using namespace std;

int Reverser::reverseDigit(int value) {
    if (value < 0) return -1;
    if (value < 10) { 
        return value;
    }

    string numstring = to_string(value);
    int n = numstring[0] - '0';
    return reverseDigit(stoi(numstring.substr(1,numstring.size()))) * 10 + n;
}

string Reverser::reverseString(string characters) {
    if(characters.size()==1) return characters;
    char frontcharacter = characters[0];
    return reverseString(characters.substr(1,characters.size())) + frontcharacter;
}
