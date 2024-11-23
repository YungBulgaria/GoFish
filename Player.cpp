#include "Player.h"

Player::Player() {
    turn_ = true;
}

Player::Player(bool turn) {
    turn_ = turn;
}

Player::Player(std::vector<Card> hand, bool turn) {
    for (int i = 0; i < 7; i++) {
        hand_[i] = hand[i];
    }
    turn_ = turn;
}

void Player::setCard(Card card) {
    hand_.push_back(card);
}

std::vector<Card> Player::getHand() {
    return hand_;
}