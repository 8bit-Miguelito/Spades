#include <iostream>
#include <stdlib.h>

using namespace std;

#include "gameboard.h"


int main () {

    cout << "Welcome to Spades!" << endl;
    string suits[numSuits] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string types[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    Card* deck = new Card[52];
    Player* players = new Player[numPlayers];

    for (int i = 0; i < numSuits; i++) {
        addCardToDeck(deck, suits[i], types);
    }

    shuffleDeck(deck);
    dealCards(deck, players);
    
};