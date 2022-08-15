#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human : public Player{

public:

    Human();
    char makeMove() override;
    void reset() override;
};

#endif //HUMAN_H