#ifndef _KEY_HANDLER_H
#define _KEY_HANDLER_H

#define KEYBUF_SIZE 20


const char UP    = 'A';
const char DOWN  = 'B';
const char LEFT  = 'C';
const char RIGHT = 'D';

class KeyHandler {


    public:
        KeyHandler();
        char getInput();    

    private:
        char inputBuffer[KEYBUF_SIZE] = {0};       

};


#endif // _KEY_HANDLER_H