#include <iostream>
#include "Computer.h"
#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(){
move='P';
phase=0;
};

char FistfullODollars::makeMove(){
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

void FistfullODollars::reset(){
    phase=0;
}
