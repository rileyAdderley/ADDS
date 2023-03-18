#include "Truckloads.h"

Truckloads::Truckloads(){
   int numCrates = 2;
    int loadsize = 1;
}
int Truckloads::getNumCrates() {
    return numCrates;
}

int Truckloads::getLoadsize() {
    return loadsize;
}

int Truckloads::numTrucks(int numCrates,int loadsize) {
    if (loadsize >= numCrates) {
        return 1;
    } else {
        return numTrucks(numCrates/2 +numCrates%2,loadsize) + numTrucks(numCrates/2,loadsize);
    }

}