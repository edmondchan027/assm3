#include <iostream>
#include "Player.h"
#include "Referee.h"
#include "Tournament.h"

    Tournament::Tournament(){
        
    };
    
    Player * Tournament::round(Player* p1,Player * p2){
        p1->reset();
        p2->reset();
        Referee r;
        short p1_score=0;
        short p2_score=0;

        for(int i=0;i<5;i++){
            switch((int) r.refGame(p1,p2)){
            case 'W':
            p1_score++;
            break;

            case 'L':
            p2_score++;
            break;

            case 'T':
            break;

            }
        }

        if(p1_score>=p2_score){
        return p1;
        }
        else{
        return p2;
        }

    };

    Player * Tournament::run(std::array<Player *, 8>  competitors){

        //first 4 rounds
        Player* Top4_p1 = round(competitors[0],competitors[1]);
        Player* Top4_p2 = round(competitors[2],competitors[3]);
        Player* Top4_p3 = round(competitors[4],competitors[5]);
        Player* Top4_p4 = round(competitors[6],competitors[7]);

        //Semifinals
        Player* Top2_p1 = round(Top4_p1,Top4_p2);
        Player* Top2_p2 = round(Top4_p3,Top4_p4);

        //Final
        return round(Top2_p1,Top2_p2);

    };
