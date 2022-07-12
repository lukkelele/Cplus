#ifndef _WORLD_H
#define _WORLD_H
#define STANDARD_X_SIZE 10
#define STANDARD_Y_SIZE 10

class World {
  
  public:
    World();
    World(int X, int Y);
    static int grid[10][10];

  public:
    void displayWorld();
    int Xsize;
    int Ysize;

};

#endif
