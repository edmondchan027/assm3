#include <iostream>
#include "Computer.h"
#include "Crescendo.h"

Crescendo::Crescendo(){
move='P';
phase=0;
};

char Crescendo::makeMove(){
    switch(phase){

        case 0:
        move='P';
        phase=1;
        break;

        case 1:
        move='S';
        phase=2;
        break;

        case 2:
        move='R';
        phase=0;
        break;
    }
    
    return move;
};

void Crescendo::reset(){
    phase=0;
}