#pragma once

#include "Cards.h"

#include <iostream>

class Player {
    private:
        Card hand_[7];
        bool turn_;
    public:
        Player();
        Player(Card hand, bool turn);

};