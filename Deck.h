#pragma once

#include "Cards.h"
#include "Player.h"

#include <vector>
#include <stack>

class Player;

class Deck {
    private:
        Card deck_[52];
        std::stack<Card> playingDeck_;
    public:
        Deck();
        void printDeck();
        void shuffle();
        void peakDeck();
        std::vector<Card> deal(Player& p);
};