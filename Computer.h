#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer : public Player{
protected:

char move;

public:

    Computer();
    virtual char makeMove();
    virtual void reset();
};

#endif //COMPUTER_H
