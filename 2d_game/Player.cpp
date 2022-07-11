#include "Player.h"
#include <iostream>


Player::Player(int X, int Y) //: posX(0), posY(0)
{
  this->posX = X;
  this->posY = Y;
}

int Player::getPosX() {
  std::cout << "Position: " << this->posX << " | " << this->posY << std::endl; 
  return this->posX;
}

int Player::getPosY() {
  return this->posX;

}

void Player::showPosition() {
  std::cout << "Position: " << this->posX << " | " << this->posY << std::endl; 
}
