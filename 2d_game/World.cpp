#include "World.h"
#include "Player.h"
#include <iostream>



World::World() {}

World::World(int pos[2]) {
    this->spawnPoint[0] = pos[0];
    this->spawnPoint[1] = pos[1];
}

void World::movePlayer(Player *player, int x, int y) {
    // Remove old position
    int X = player->getPosX();
    int Y = player->getPosY();
    std::cout << "Old position: " << X << " " << Y << std::endl;
    this->grid[X][Y] = 0;
    this->grid[x][y] = 1;
    std::cout << "New position: " << x << " " << y << std::endl;
    player->setPos(x, y);
}

void World::displayWorld() {
    // Use the defined values later
    int bytes_Y = sizeof(this->grid[0]);
    int x_size = sizeof(this->grid) / bytes_Y;
    int y_size = bytes_Y / sizeof(int);
    //std::cout << "\nSize of x: " << x_size << std::endl;
    //std::cout << "Size of y: " << y_size << std::endl << std::endl;
    for (int i=0 ; i < y_size ; i++) {
        for (int k=0 ; k < x_size ; k++) {
            std::cout << this->grid[k][i] << " "; 
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
}