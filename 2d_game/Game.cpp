#include <iostream>
#include "Player.h"
#include "World.h"
using namespace std;


class Game {

  public: World world;
  private: Player player;

  public: Game() {
            cout << "Game constructor called!\n";
            this->world = this->createWorld();
          }

  public: World createWorld() {
             World world = World();
             return world;
           }


};



int main() {
  cout << "\nStarting game!\n";
  Game game = Game();
  int coordinates[2] = {2,2};
  game.world.setPlayer(coordinates);
  game.world.showGrid();
  return 0;
}






