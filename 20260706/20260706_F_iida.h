#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_H_iida.h"



int PCheck(int player)//入力チェック
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

int ECheck(int enemy)//enemy出力
{
	enemy = rand ()%3;
	return enemy;
}

int LevelUpEXP(int& Lv ,int& LVcount)//経験値中身
{
	int LV= rand() % 15 + 1;
	Lv = LV;
	cout << "経験値獲得:" << Lv << endl;
	if (Lv >= LVUP)
	{
		LVcount++;

		Lv = 0;
	}

	return LVcount, Lv;
}
//
//int LVup(int LVcount,int LV)//LV上げ中身
//{
//	if (LVcount >= LVUP)
//	{
//		LV++;
//	}
//
//	return LVcount, LV;
//}

int Game(int &LV,int &LVcount)
{
	//変数
	int Player = 0;
	int Enemy = 0;
	int Judge = 0;


	cout << "「ぐー：0」「ちょき：1」「ぱー：2」" << endl;
	//ゲームの動作中身
	while (true)
	{
		cout << "LV:" << LV << endl;

		Player=PCheck(Player);
		Enemy = ECheck(Enemy);
		//判定
		Judge = Player - Enemy;

		if (Judge== -1 ||Judge ==2)
		{
			cout << "WIN" << endl;
			//LV上げ
			LevelUpEXP(LVcount,LV);
		    //LVup(LVcount,LV);
		}
		if (Player == Enemy)
		{
			cout << "あいこ" << endl;
		}
		else
		{
			cout << "LOSE" << endl;
		}

		if (LV == 5)
		{
			break;
		}
	}
	return Player, Enemy,Judge, LVcount, LV;
}