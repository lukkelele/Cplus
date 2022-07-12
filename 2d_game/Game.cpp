#include "Player.h"
#include "World.h"
#include <iostream>
using namespace std;



int main() {
  Player p = Player(5,2);
  //World world = World();
  World world = World(24, 12);

  int x = p.getPosX();
  int y = p.getPosY();
  cout << "\nreturned x: " << x << endl;
  cout << "\nreturned y: " << y << endl;
  p.showPosition();

  world.displayWorld();


  return 0;
}
