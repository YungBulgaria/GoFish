#include <iostream>
#pragma once


class Card {
    private: 
        int suit_;
        int value_;
    
    public:
        Card();
        Card(int s, int v);
        int getSuit();
        int getValue();

        friend std::ostream& operator<<(std::ostream& os, const Card& card);
};