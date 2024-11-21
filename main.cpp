#include "Cards.h"
#include "Deck.h"
#include <iostream>

int main() {
    Card card(1, 4);
    std::cout << "Hello, world!" << std::endl;
    std::cout << card.getValue() << std::endl;

    Deck d;
    d.printDeck();
    return 0;
}
