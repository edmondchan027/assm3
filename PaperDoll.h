#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Computer.h"

class PaperDoll : public Computer{
private:

short phase;

public:

    PaperDoll();
    char makeMove() override;
    void reset() override;
};

#endif //PAPERDOLL_H