//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#include "Truckloads.h"

Truckloads::Truckloads(){
   crates = 2;
   load = 1;
}

Truckloads::Truckloads(int numCrates, int Loadsize){
   crates = numCrates;
   load = Loadsize;
}

int Truckloads::getNumCrates() {
    return crates;
}

int Truckloads::getLoadsize() {
    return load;
}

int Truckloads::numTrucks(int numCrates,int loadsize) {
    if (numCrates <= loadsize) {
        return 1;
    } else {
        return numTrucks(numCrates%2 + numCrates/2,loadsize) + numTrucks(numCrates/2,loadsize);
    }

}