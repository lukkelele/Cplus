#include "Player.h"
#include "World.h"




int main() {
    

    World w = World();
    Player player = Player();
    w.movePlayer(&player, 3, 1);
    w.displayWorld();

    w.movePlayer(&player, 0, 2);
    w.displayWorld();


    return 0;
}