#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Computer.h"

class RandomComputer : public Computer{
public:

    RandomComputer();
    char makeMove() override;
    void reset() override;

};

#endif //RANDOMCOMPUTER_H
