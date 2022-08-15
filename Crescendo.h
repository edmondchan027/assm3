#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Computer.h"

class Crescendo : public Computer{
private:

short phase;

public:

    Crescendo();
    char makeMove() override;
    void reset() override;

};

#endif //CRESCENDO_H