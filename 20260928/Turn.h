#pragma once
#include"Player.h"
#include"CPU.h"
#include"CardManager.h"

class Turn
{
public:
	//Player`s Turn
	bool PlayPlayerTurn(Player* player, CardManager* cardManager);
	//CPU`s Turn
	void PlayCpuTurn(Player* player, CPU* cpu, CardManager* cardManager);
};