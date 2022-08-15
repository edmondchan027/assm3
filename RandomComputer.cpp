#include <iostream>
#include <cstdlib>
#include "Computer.h"
#include "RandomComputer.h"

RandomComputer::RandomComputer(){
};

char RandomComputer::makeMove(){
    srand(time(0));
    switch(rand()%3){
        case 0:
        return 'S';
        break;

        case 1:
        return 'R';
        break;

        case 2:
        return 'P';
        break;
    };
};

void RandomComputer::reset(){
};
