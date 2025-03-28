#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#include "gameboard.h"

int numCards = 0;

void Card::createCard(int value, string type, string suit) {
    val = value;
    valType = type;
    suitType = suit;
}

void Player::addCard(Card currCard) {
    hand[numCards] = currCard;
    numCards++;
}

void addCardToDeck(Card* deck, string suit, string type[]) {
    for (int i = 2; i < numTypes + 2; i++) {
        Card* newCard = new Card;

        if (suit != "Spades") {
            newCard->createCard(i, type[i - 2], suit);
        } else {
            newCard->createCard(i + 10, type[i - 2], suit);
        }

    deck[numCards] = *newCard;
    numCards++;
    }

}

void shuffleDeck(Card* deck) {
    srand((int)time(0));
    int randInd;
    for (int i = numCards - 1; i > 0; i--) {
        randInd = rand() % (i + 1);
        swapIndex(deck, i, randInd);
    }
}

void swapIndex(Card* deck, int swapped, int swapTo) {
    Card temp = deck[swapTo];
    deck[swapTo] = deck[swapped];
    deck[swapped] = temp;
}

void dealCards(Card* deck, Player* players) {
    for (int i = 0; i < numCards; i += 4) {
        int j = 0;
        players[j].addCard(deck[i]);
        players[j+1].addCard(deck[i+1]);
        players[j+2].addCard(deck[i+2]);
        players[j+3].addCard(deck[i+3]);
    }
}




