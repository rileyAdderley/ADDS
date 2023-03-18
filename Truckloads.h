#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

#include <iostream>

class Truckloads {
private:
int numCrates;
int loadsize;

 public:
 Truckloads();
 int numTrucks(int numCrates,int loadsize);
 int getLoadsize();
 int getNumCrates();
};

#endif