#include "Player.h"

#define X_SIZE 4
#define Y_SIZE 5
#define DEFAULT_SPAWN_X 0
#define DEFAULT_SPAWN_Y 0

class World {

    public:
        World();
        World(int spawn[2]);

        void movePlayer(Player *player, int x, int y);
        void displayWorld();


    private:
        int grid[X_SIZE][Y_SIZE] = {0};  // initializes zeroes over grid
        int spawnPoint[2];


};