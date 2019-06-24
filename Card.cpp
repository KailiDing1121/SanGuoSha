//
// Created by karry on 6/21/19.
//

#include "Card.h"

CardType Card::getType() const {
    return type;
}

const std::string &Card::getName() const {
    return name;
}

void Card::setName(const std::string &name_) {
    Card::name = name_;
}

const Player &Card::getOwner() const {
    return owner;
}

void Card::setOwner(const Player &owner_) {
    Card::owner = owner_;
}
