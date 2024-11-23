#include <unordered_map>
#include <algorithm>
#include <random>


#include "Deck.h"

using namespace std;

Deck::Deck() {
    // Initlialize the deck of 52 cards with 13 spades 13 hearts 13 clubs 13 diamonds
    int index = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j < 14; j++) {
            Card card(i, j);
            deck_[index] = card;
            index++;
        }
    }
}

void Deck::printDeck() {
    unordered_map<int, string> suitMap;
    suitMap[0] = "Spades";
    suitMap[1] = "Hearts";
    suitMap[2] = "Clubs";
    suitMap[3] = "Diamonds";

    for (Card card : deck_) {
        cout << card.getValue() << " of " << suitMap[card.getSuit()] << endl;
    }
}


void Deck::shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    // Shuffle deck
    Card* tempDeck = new Card[52];
    for (int i = 0; i < 53; i++) {
        tempDeck[i] = deck_[i];
    }
    std::shuffle(tempDeck, tempDeck + 52, g);

    // Initialize the playing deck (stack) with the shuffled deck
    for (int i = 0; i < 52; i++) {
        Card card = tempDeck[i];
        playingDeck_.push(card);
    }
    delete[] tempDeck;
}

void Deck::peakDeck() {
    cout << playingDeck_.top() << endl;
}

std::vector<Card> Deck::deal(Player& p) {
    std::vector<Card> hand;

    for (int i = 0; i < 7; i++) { // Implement get hand size
        Card card(playingDeck_.top().getSuit(), playingDeck_.top().getValue());
        p.setCard(card);
        playingDeck_.pop();
    }
    return hand;
}
