#include "Cards.h"
#include "Deck.h"
#include "Player.h"
#include <iostream>
 #include <crtdbg.h>

int main() {
    // Check both hands make sure that they are full of different cards
    Player p1(true);
    Player p2(false);
    Deck d;
    d.shuffle();
    std::cout << "oops" << std::endl;
    d.deal(p1);
    d.deal(p2);
    std::cout << "oops" << std::endl;
    std::vector<Card> p1Hand = p1.getHand();
    std::vector<Card> p2Hand = p2.getHand();
    for (int i = 0; i < 7; i++) {
        std::cout << "Player 1: " << p1Hand[i].getSuit() << " " << p1Hand[i].getValue() << std::endl;
    }
    for (int i = 0; i < 7; i++) {
        std::cout << "Player 2: " << p2Hand[i].getSuit() << " " << p2Hand[i].getValue() << std::endl;
    }

    
    return 0;
}
