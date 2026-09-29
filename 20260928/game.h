#pragma once
#include"Player.h"
#include"CPU.h"
#include"CardManager.h"
#include"Turn.h"

class Game
{
	private:
		CardManager cardManager;
		Player player;
		CPU cpu;
		Turn turn;

		void DealInitialCards();

		void ShowResult();

public:
	Game();

	void start();
};