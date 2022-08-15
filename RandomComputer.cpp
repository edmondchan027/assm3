#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Computer.h"
#include "RandomComputer.h"

RandomComputer::RandomComputer(){
    phase=0;
};

char RandomComputer::makeMove(){
    srand(time(0)+phase);
    switch((rand() % 3)){
        case 0:
        move = 'S';
        break;

        case 1:
        move = 'R';
        break;

        case 2:
        move = 'P';
        break;

    }
    phase++;
    return move;

};

void RandomComputer::reset(){
    phase=0;
};
