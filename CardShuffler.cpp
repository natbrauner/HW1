// CardShuffler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <assert.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <random>
#include <fstream>

#define DECK_COUNT 52 //number of cards in the deck
#define DECK_NUM 2 //number of decks

using namespace std;
int i;

//make class cards with property of a single number
class card{
public:
		int cardNum; //0-51
};

//create all the card 52
void printcards(card* sCard) {
	//card type
	for (int i = 0; i < DECK_COUNT*DECK_NUM; i++) {
		if ((sCard[i].cardNum % 13) == 0) {
			cout << "Ace";
		}
		else if ((sCard[i].cardNum % 13) < 10) {
			cout << (sCard[i].cardNum % 13) + 1;
		}
		else if ((sCard[i].cardNum % 13) == 10) {
			cout << "Jack";
		}
		else if ((sCard[i].cardNum % 13) == 11) {
			cout << "Queen";
		}
		else if ((sCard[i].cardNum % 13) == 12) {
			cout << "King";
		}

		//suite
		if (sCard[i].cardNum < 13) {
			cout << " of Hearts" << endl;
		}
		else if ((sCard[i].cardNum) < 26) {
			cout << " of Diamonds" << endl;
		}
		else if ((sCard[i].cardNum) < 39) {
			cout << " of Clubs" << endl;
		}
		else if ((sCard[i].cardNum) < 52) {
			cout << " of Spades" << endl;
		}
	}
}

//this test handles any number of decks and handels test A and B for both cases
int deckcheck_AB(card* testAandB) {
	int j = 0;
	for (i = 0; i < DECK_COUNT*DECK_NUM; i++) {
		if (testAandB[0].cardNum == testAandB[i].cardNum) {
			j++;
			//cout << j << endl;
		}
	}
	return j;
	}
//how do I run this in the main()?

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
	card deck[DECK_COUNT*DECK_NUM]; //initialized size deck
	card finaldeck[DECK_COUNT*DECK_NUM]; //initialized final size deck

	//build the deck of numbers
	for (i = 0; i < DECK_COUNT*DECK_NUM; i++) {
		cout << i % 52 << endl;
		deck[i].cardNum = i % 52;
	}
	for (i = 0; i < DECK_COUNT*DECK_NUM; i++) {
		printcards(&(deck[i]));
	}
	
	//shuffle(deck,finaldeck);
	//printcards(finaldeck);
	

	//deckcheck_AB(finaldeck);

	ofstream card;
	card.open("finaldeck.txt");
	
}

	//have to figure out how to output the text hopefully Bryant can help...