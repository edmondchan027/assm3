#ifndef PLAYER_H
#define PLAYER_H

class Player{
public:
    Player();
    virtual char makeMove()=0;
    virtual void reset()=0;
};

#endif //PLAYER_H