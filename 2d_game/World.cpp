#include "World.h"
#include <iostream>


int World::grid[STANDARD_X_SIZE][STANDARD_Y_SIZE];

World::World() {
  int Xsize = 10;
  int Ysize = 10;
  int grid[Xsize][Ysize];
}

World::World(int Xsize, int Ysize) {
  this->Xsize = Xsize;
  this->Ysize = Ysize;
  int grid[Xsize][Ysize];
}



void World::displayWorld() {
  std::cout << "GRID: " << this->grid << std::endl;
  for (int i=0 ; i < this->Xsize ; i++) {
    for (int k=0 ; k < this->Ysize ; k++) {
      std::cout << " " << this->grid[i][k] << std::endl;
      std::cout << "i=" << i << "    k=" << k << std::endl;
    }
    
  }

}
