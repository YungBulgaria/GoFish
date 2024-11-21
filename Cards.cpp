#include "Cards.h"

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