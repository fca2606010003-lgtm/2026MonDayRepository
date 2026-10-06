#pragma once
#include<iostream>
#include<string>

using namespace std;
class Character
{
protected:
	int attack;
	int brock;
	int bring;
	int hp = 0;
public:
	Character();

	//ステータス表示
	void ShowStatus();
	//攻撃
	void Attack(Character& target);
	//回復
	void Recovery();
	//生存判定
	bool IsAlive();
	//HP取得
	int GetHp();
};
