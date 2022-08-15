#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Computer.h"

class RandomComputer : public Computer{
private:

short phase;

public:

    RandomComputer();
    char makeMove() override;
    void reset() override;

};

#endif //RANDOMCOMPUTER_H
