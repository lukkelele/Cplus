#include "Player.h"


Player::Player() {
    this->hp = 100;
    setPos(0, 0);
}

Player::Player(int hp) {
    this->hp = hp;
    setPos(0, 0);
}


int Player::getHP() {
    return this->hp;
}

void Player::setPos(int x, int y) {
    this->posX = x;
    this->posY = y;
}

int Player::getPosX() {
    return this->posX;
}

int Player::getPosY() {
    return this->posY;
}
