//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106

#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

#include <iostream>

class Truckloads {
private:
int crates;
int load;
 public:
 Truckloads();
 Truckloads(int numCrates, int loadsize);
 int numTrucks(int numCrates,int loadsize);
 int getLoadsize();
 int getNumCrates();
};

#endif