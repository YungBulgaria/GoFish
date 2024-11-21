#include "Cards.h"
#include "Deck.h"
#include <iostream>
 #include <crtdbg.h>

int main() {
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    Card card(1, 4);
    std::cout << "Hello, world!" << std::endl;
    std::cout << card.getValue() << std::endl;

    Deck d;
    d.printDeck();
    d.shuffle();
    d.printDeck();
    d.peekDeck();
    d.shuffle();
    d.peekDeck();
    d.shuffle();
    d.peekDeck();
    d.shuffle();
    d.peekDeck();
    Deck g;
    g.shuffle();
    g.peekDeck();
    _CrtDumpMemoryLeaks();
    return 0;
}
