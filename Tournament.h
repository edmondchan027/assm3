#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "Player.h"
#include "Referee.h"
#include <array>

class Tournament{

private:

Player * round(Player* p1,Player * p2);

public:

    Tournament();
    Player * run(std::array<Player *, 8>  competitors);

};

#endif //TOURNAMENT_H