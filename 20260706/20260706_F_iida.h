#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_H_iida.h"

int PCheck(int player);
int ECheck(int enemy);
int EXP(int Lv);
int Lvup(int LVcount, int LV);
int Game();

int PCheck(int player)
{
	while (true)
	{
		cin >> player;
		if (player<ROCK || player>Scissor)
		{
			cout << "入力が間違っています" << endl;
		}
		else
		{
			break;
		}
	}
	return player;
}

int ECheck(int enemy)
{
	enemy = rand ()%3;
	return enemy;
}
int EXP(int Lv)
{
	Lv = rand() % 15+1;
	return Lv;
}
int Lvup(int LVcount,int LV)
{
	if (LVcount >= LVUP)
	{
		LV++;
	}

	return LVcount, LV;
}

int Game()
{
	int Player = 0;
	int Enemy = 0;
	int Judge = 0;
	int LVcount = 0;
	int LV = 0;

	cout << "「ぐー：0」「ちょき：1」「ぱー：2」" << endl;

	while (true)
	{
		
		Player=PCheck(Player);
		srand((unsigned int)time(NULL));
		Enemy = ECheck(Enemy);

		Judge = Player - Enemy;
		if (Judge== -1 ||Judge ==2)
		{
			cout << "WIN" << endl;
			EXP(LVcount);
			cout << LV << endl;
		}
		if (Player == Enemy)
		{
			cout << "あいこ" << endl;
		}
		else
		{
			cout << "LOSE" << endl;
		}
		Lvup(LVcount, LVUP);
	}
	return Player, Enemy, LVcount, LV;
}