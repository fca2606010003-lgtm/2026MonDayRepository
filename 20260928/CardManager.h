#pragma once
#include"config.h"
class CardManager
{
private:
	int cards[CARD_TOTAL];
	int cardCount;
public:
	CardManager();

	void CreateCards();

	void ShuffleCards();

	int DrawCard();

	int GetCardCount();
};