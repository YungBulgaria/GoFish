#include "Deck.h"

using namespace std;

Deck::Deck() {
    // Initlialize the deck of 52 cards with 13 spades 13 hearts 13 clubs 13 diamonds
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 14; j++) {
            Card card(i, j);
            cards_.push(card);
        }
    }
}

void Deck::shuffle() {
    
}