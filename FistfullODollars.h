#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H
#include "Computer.h"

class FistfullODollars : public Computer{
private:

short phase;

public:

    FistfullODollars();
    char makeMove() override;
    void reset() override;
};

#endif //FISTFULLODOLLARS_H