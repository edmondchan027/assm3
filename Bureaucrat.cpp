#include <iostream>
#include "Computer.h"
#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(){
move='P';
};

char Bureaucrat::makeMove(){
    return move;
};
void Bureaucrat::reset(){
}