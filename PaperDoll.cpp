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
        move='P';
        phase=1;
        break;

        case 1:
        move='S';
        phase=2;
        break;

        case 2:
        move='S';
        phase=0;
        break;
    }
    
    return move;
};

void PaperDoll::reset(){
    phase=0;
}
