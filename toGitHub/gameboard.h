#include <iostream>
using namespace std;

#ifndef GAMEBOARD_H
#define GAMEBOARD_H

const int numSuits = 4;
const int numTypes = 13;
const int numPlayers = 4; 
extern int numCards;

class Card {
	private:
		int val;
		string valType;
		string suitType;
	public:
		void createCard(int value, string type, string suit);
		string getSuit() { return suitType; }
		string getType() { return valType; }
};

class Player {
	private:
		int numCards;
		Card hand[13];
	public: 
		void addCard(Card currCard);

};

void addCardToDeck(Card* deck, string suit, string type[]);
void shuffleDeck(Card* deck);
void swapIndex(Card* deck, int swapped, int swapTo);
void dealCards(Card* deck, Player* players);


#endif
		

