#include "Cards.h"
#include "Player.h"

#include <iostream>

Card::Card() {
    suit_ = NULL;
    value_ = NULL;
}

Card::Card(int s, int v) {
    suit_ = s;
    value_ = v;
}

int Card::getValue() {
    return value_;
}

int Card::getSuit() {
    return suit_;
}

std::ostream& operator<<(std::ostream& os, const Card& card) {
    std::string valueStr = std::to_string(card.value_);

    os << valueStr;
    return os;
}