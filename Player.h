#pragma once

#include "Cards.h"
#include "Deck.h"

#include <vector>
#include <iostream>

class Deck;
class Player {
    private:
        std::vector<Card> hand_;
        bool turn_;
    public:
        Player();
        Player(bool turn);
        Player(std::vector<Card> hand, bool turn);
        void setCard(Card card);
        std::vector<Card> getHand();

};