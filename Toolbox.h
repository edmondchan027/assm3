#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Computer.h"

class Toolbox : public Computer{

public:

    Toolbox();
    char makeMove() override;
    void reset() override;
};

#endif //TOOLBOX_H