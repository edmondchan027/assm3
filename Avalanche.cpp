#include <iostream>
#include "Computer.h"
#include "Avalanche.h"

Avalanche::Avalanche(){
move='R';
};

char Avalanche::makeMove(){
    return move;
};

void Avalanche::reset(){
}