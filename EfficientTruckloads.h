#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <iostream>

class EfficientTruckloads {
    private:
int crates;
int load;
 public:
 EfficientTruckloads();
 EfficientTruckloads(int numCrates, int loadsize);
 int numTrucks(int numCrates,int loadsize);
 int getLoadsize();
 int getNumCrates();
};

#endif