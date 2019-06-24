//
// Created by karry on 6/21/19.
//

#ifndef SANGUOSHA_PLAYER_H
#define SANGUOSHA_PLAYER_H

#include <list>
#include <queue>
#include "Card.h"

class Player {
private:
    int pid;
    int life;
    std::list<Card> hand;
    std::queue<Card> delayed_spells;

public:
    Player(int pid, int life): pid(pid), life(life) {};
};


#endif //SANGUOSHA_PLAYER_H
