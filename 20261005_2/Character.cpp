#include"Character.h"
#include"config.h"

#include<iostream>
#include<cstdlib>
using namespace std;

Character::Character()
{
	hp = Config::MAX_HP;
	attack = rand() % (Config::MAX_STUTAS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	brock =rand()% (Config::MAX_STUTAS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	bring=rand()% (Config::MAX_STUTAS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
}

//ステータス表示
void Character::ShowStatus()
{
	cout << "HP" << hp << endl;
	cout << "攻撃力:" << attack << endl;
	cout << "防御力:" << brock << endl;
	cout << "会費:" << bring << endl;
}

//攻撃
void Character::Attack(Character& target)
{
	//ランダムな攻撃値
	int randomValue=rand()% (Config::MAX_STUTAS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	int attackValue = attack + randomValue;
	cout << "攻撃値は" << attackValue << endl;

	//会費判定
	if (attack <= target.bring)
	{
		cout << "攻撃を回避しました" << endl;
		cout << "ダメージは0です" << endl;
		return;
	}

	//ダメージ計算
	int damege = attackValue - target.brock;

	if (damege < 0)
	{
		damege = 0;
	}

	target.hp -= damege;

	cout << "攻撃成功" << "ダメージ:" << damege << "点です" << endl;

	//生存判定
	if (target.hp < Config::DEAD_HP)
	{
		target.hp = 0;
	}



}


void Character::Recovery()
{
	int randomValue=rand()% (Config::MAX_RANDOM_VALUE - Config::MIN_RANDOM_VALUE + 1) + Config::MIN_RANDOM_VALUE;
	hp += randomValue;

	if (hp > Config::MAX_HP)
	{
		hp = Config::MAX_HP;
	}
	cout << "HPを" << randomValue << "回復しました" << "現在のHP:" << hp << endl;
}
bool Character::IsAlive()
{
	return hp > Config::
}
