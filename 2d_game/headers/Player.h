#ifndef _PLAYER_H
#define _PLAYER_H

class Player {

    public:
        Player();
        Player(int hp);
        int getHP();
        void setPos(int x, int y);
        int getPosX();
        int getPosY();


    private: 
        int hp;
        int posX;
        int posY;

};

#endif // _PLAYER_H