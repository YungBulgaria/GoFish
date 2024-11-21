#pragma once

#include "Cards.h"

#include <stack>


class Deck {
    private:
        Card deck_[52];
        std::stack<Card> playingDeck_;
    public:
        Deck();
        void printDeck();
        void shuffle();
        void peekDeck();
};