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
    if (loadsize >= numCrates) {
        return 1;
    } else {
        return numTrucks(numCrates/2 +numCrates%2,loadsize) + numTrucks(numCrates/2,loadsize);
    }

}