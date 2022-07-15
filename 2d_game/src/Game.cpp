#include "../headers/Player.h"
#include "../headers/World.h"
#include "../headers/KeyHandler.h"



int main() {
    
    World w = World();
    Player player = Player();
    KeyHandler keyHandler = KeyHandler();
    w.movePlayer(&player, 3, 1);
    w.displayWorld();

    while (1)
        keyHandler.getInput();


    return 0;
}