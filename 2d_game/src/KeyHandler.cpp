#include "../headers/KeyHandler.h"
#include <iostream>


KeyHandler::KeyHandler() {

}


char KeyHandler::getInput() {
    char character;
    std::cout << ": ";
    std::cin >> this->inputBuffer;
    if (this->inputBuffer[2] == 0) 
        std::cout << "i ==> " << inputBuffer[0] << std::endl;
    else {
        character = inputBuffer[2];
        if (character == 'A')
            std::cout << " UP " << std::endl;
        else if (character == 'B')
            std::cout << " DOWN " << std::endl;
        else if (character == 'C')
            std::cout << " RIGHT " << std::endl;
        else if (character == 'D')
            std::cout << " LEFT " << std::endl;

    }

    return character;


}