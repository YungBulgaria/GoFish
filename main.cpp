#include "Cards.h"
#include "Deck.h"
#include "Player.h"

#include <iostream>
#include <crtdbg.h>
#include <unordered_map>

int main() {
    // Check both hands make sure that they are full of different cards
    Player p1(true);
    Player p2(false);
    Deck d;
    d.shuffle();
    d.deal(p1);
    d.deal(p2);
    std::vector<Card> p1Hand = p1.getHand();
    std::vector<Card> p2Hand = p2.getHand();

    std::unordered_map<int, std::string> suitMap;
    suitMap[0] = "Spade";
    suitMap[1] = "Heart";
    suitMap[2] = "Club";
    suitMap[3] = "Diamond";

    for (int i = 0; i < 7; i++) {
        std::cout << "Player 1: " << suitMap[p1Hand[i].getSuit()] << " " << p1Hand[i].getValue() << std::endl;
    }
    for (int i = 0; i < 7; i++) {
        std::cout << "Player 2: " << suitMap[p2Hand[i].getSuit()] << " " << p2Hand[i].getValue() << std::endl;
    }

    
    return 0;
}
