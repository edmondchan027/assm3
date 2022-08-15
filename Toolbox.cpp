#include <iostream>
#include "Computer.h"
#include "Toolbox.h"

Toolbox::Toolbox(){
move = 'S';
};

char Toolbox::makeMove(){
    return move;
};

void Toolbox::reset(){
}