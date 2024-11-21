#pragma once

#include "Cards.h"

#include <stack>


class Deck {
    private:
        std::stack<Card> cards_;
    public:
        Deck();
        void shuffle();
};