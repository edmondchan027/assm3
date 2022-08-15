#include <iostream>
#include "Player.h"
#include "Human.h"

Human::Human(){

};

char Human::makeMove(){
    char move = ' ';
        std::cout<<"Enter move: ";
        move = getchar();
    return move;
};

void Human::reset(){
}