#include <iostream>
#include "Player.h"
#include "Referee.h"

    Referee::Referee(){
        
    };
    char Referee::refGame(Player* player1, Player* player2){
        char P1_move = player1->makeMove();
        char P2_move = player2->makeMove();



        if(P1_move==P2_move){
            return 'T';
        }
        else if((P1_move=='P'&&P2_move=='R')||(P1_move=='S'&&P2_move=='P')||(P1_move=='R'&&P2_move=='S')){
            return 'W';
        }
        else{
            return 'L';
        }
    }

