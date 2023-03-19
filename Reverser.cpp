#include "Reverser.h"
#include <string>

using namespace std;

int Reverser::ReverseDigit(int value) {
    if (value < 0) return -1;
    if (value < 10) { 
        return value;
    }

    string numstring = to_string(value);
    int n = numstring[0] - '0';
    return ReverseDigit(stoi(numstring.substr(1,numstring.size()))) * 10 + n;
}

string Reverser::ReverseString(string characters) {
    if(characters.size()==1) return characters;
    char frontcharacter = character[0];
    return ReverseString(characters.substr(1,characters.size())) + frontcharacter;
}
