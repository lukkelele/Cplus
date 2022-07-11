#ifndef _PLAYER_H
#define _PLAYER_H

class Player 
{
  public:
          Player(int X, int Y);
          int getPosX();
          int getPosY();
          void showPosition();
  public:
          int posX;
          int posY;

};


#endif
