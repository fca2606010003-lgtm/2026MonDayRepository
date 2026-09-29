#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Game.h"
#include "Config.h"

using namespace std;

Game::Game()
{
	cardManager.CreateCards();
	cardManager.ShuffleCards();
}

void Game::start()
{
	DealInitialCards();
	bool playerTurnResult = turn.PlayPlayerTurn(&player, &cardManager);

	if (playerTurnResult)
	{
		turn.PlayCpuTurn(&player, &cpu, &cardManager);
	}
	else
	{
		cout << "\nplayer‚Ì•‰‚¯‚Å‚·B\n";

		return;
	}

	ShowResult();
}

void Game::DealInitialCards()
{
	for (int i = 0; i < INTTAL_CARD_COUNT;i++)
	{
		int playerCard = cardManager.DrawCard();
		player.AddCard(playerCard);
		int cpuCard = cardManager.DrawCard();
		cpu.AddCard(cpuCard);
	}
}

void Game::ShowResult()
{
	cout << "\n===================\n";
	cout << "ƒQ[ƒ€Œ‹‰Ê\n";
	cout << "\n===================\n";
	player.ShowStatus();
	cpu.ShowStatus();

	int playerTotal = player.GetTotal();
	int cpuTotal = cpu.GetTotal();

	if (cpuTotal >= BURST_SCPRE || playerTotal == TARGET_SCORE)
	{
		cout << "\nPlayer`s Winner!!";
		return;
	}

	if (cpuTotal == TARGET_SCORE)
	{
		cout << "\nCPU`s Winner!!";
		return;
	}

	int playerDistance = TARGET_SCORE - playerTotal;

	int cpuDistance = TARGET_SCORE - cpuTotal;

	if (playerDistance > cpuDistance)
	{
		cout << "\nplayer‚ÌŸ‚¿‚Å‚·";
	}
	else if(playerDistance<cpuDistance)
	{
		cout << "\ncpu‚ÌŸ‚¿‚Å‚·";
	}

}