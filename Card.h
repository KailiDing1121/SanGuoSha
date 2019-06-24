//
// Created by karry on 6/21/19.
//

#ifndef SANGUOSHA_CARD_H
#define SANGUOSHA_CARD_H

#include <string>
#include "Player.h"

enum CardType {
    BASIC,
    SPELL,
    DELAYEDSPELL
};

class Card {
private:
    CardType type;
    std::string name;
    Player owner;
    // whether this card can be used to some target
    virtual bool condition() = 0;
    virtual void take_effect() = 0;

public:
    CardType getType() const;

    const std::string &getName() const;

    void setName(const std::string &name);

    const Player &getOwner() const;

    void setOwner(const Player &owner);
};


#endif //SANGUOSHA_CARD_H
