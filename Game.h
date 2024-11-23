#pragma once

#include <iostream>

#include "Cards.h"
#include "Deck.h"
#include "Player.h"

class Game {
    private:
        bool gameOver_;
        int turn_;
    public:
    Game();
    void restartGame();
};