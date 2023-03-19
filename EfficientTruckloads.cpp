#include "EfficientTruckloads.h"

EfficientTruckloads::EfficientTruckloads(){
   crates = 2;
   load = 1;
}

EfficientTruckloads::EfficientTruckloads(int numCrates, int Loadsize){
   crates = numCrates;
   load = Loadsize;
}

int EfficientTruckloads::getNumCrates() {
    return crates;
}

int EfficientTruckloads::getLoadsize() {
    return load;
}

int EfficientTruckloads::numTrucks(int numCrates,int loadsize) {
    if (loadsize >= numCrates) {
        return 1;
    } else {
        return numTrucks(numCrates/2 +numCrates%2,loadsize) + numTrucks(numCrates/2,loadsize);
    }

}