#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Computer.h"

class Avalanche : public Computer{

public:

    Avalanche();
    char makeMove() override;
    void reset() override;
};

#endif //AVALANCHE_H