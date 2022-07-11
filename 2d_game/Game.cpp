#include "Player.h"
#include <iostream>
using namespace std;



int main() {
  Player p = Player(5,2);
  int x = p.getPosX();
  int y = p.getPosY();
  cout << "\nreturned x: " << x << endl;
  cout << "\nreturned y: " << y << endl;
  p.showPosition();

  return 0;
}
