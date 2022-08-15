#include <iostream>
#include "Computer.h"
#include "PaperDoll.h"

PaperDoll::PaperDoll(){
move='R';
phase=0;
};

char PaperDoll::makeMove(){
    switch(phase){

        case 0:
        move='R';
        phase=1;
        break;

        case 1:
        move='P';
        phase=2;
        break;

        case 2:
        move='P';
        phase=0;
        break;
    }
    
    return move;
};

void PaperDoll::reset(){
    phase=0;
}