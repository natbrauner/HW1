// CardShuffler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <assert.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <random>

#define DECK_COUNT 52
#define DECK_NUM 1

using namespace std;
int i;

//make class cards
class card{
public:
		int cardNum; //0-51
};

//creat all the card 52


void printcards(card& sCard) {
	//card type
	if ((sCard.cardNum % 13) == 0) {
		cout << "Ace";
	}
	else if((sCard.cardNum % 13) < 10) {
		cout << (sCard.cardNum % 13) + 1;
	}
	else if((sCard.cardNum % 13) == 10) {
		cout << "Jack";
	}
	else if((sCard.cardNum % 13) == 11) {
		cout << "Queen";
	}
	else if((sCard.cardNum % 13) == 12) {
		cout << "King";
	}

	//suite
	if ((sCard.cardNum % 13) < 13) {
		cout << " of Hearts" << endl;
	}
	else if((sCard.cardNum % 13) < 26) {
		cout << " of Diamonds" << endl;
	}
	else if((sCard.cardNum % 13) < 39) {
		cout << " of Clubs" << endl;
	}
	else if((sCard.cardNum % 13) < 52) {
		cout << " of Spades" << endl;
	}
}



void shuffle(card* first, card* last) {
	//shuffles the cards
	int place;

	for (i = 0; i < DECK_COUNT;i++) {
	place = rand() % (DECK_COUNT*DECK_NUM);
	//takes the decks and orders them
	last[place] = first[i];
	}
}

int main()
{
	card deck[DECK_COUNT*DECK_NUM];
	card finaldeck[DECK_COUNT*DECK_NUM];

	for (i = 0; i < DECK_COUNT; i++) {
		deck[i].cardNum = i % 52;
	}
	shuffle(deck, finaldeck);
    return 0;
}

