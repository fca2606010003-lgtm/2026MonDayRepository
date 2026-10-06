#pragma once
#include<iostream>
namespace Config
{
	//Hp
	const int MAX_HP = 100;
	//能力値
	const int MIN_STATUS = 1;
	const int MAX_STUTAS = 20;
	//攻撃・会費のランダム値
	const int MIN_RANDOM_VALUE = 1;
	const int MAX_RANDOM_VALUE = 12;
	//プレイヤーの行動
	const int ACTION_ATTACK = 1;
	const int ACTION_RECOVERY = 2;
	//敵の行動
	const int ENEMY_ACTION_COUNT = 2;
	//ゲーム終了
	const int DEAD_HP = 0;
}

//class Config
//{
//public:
//
//};