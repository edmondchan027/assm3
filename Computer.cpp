#include <iostream>
#include "Computer.h"
#include "Player.h"

Computer::Computer(){
move='R';
};

char Computer::makeMove(){
    return move;
};

void Computer::reset(){
}
