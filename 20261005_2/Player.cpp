#include"Config.h"
#include"Player.h"

#include<iostream>
using namespace std;
//コンストラクタ
Player::Player():Character(){}
//プレイヤーの行動
void Player::Action(Character&target)
{
	int choice;

	cout <<"\n【プレイヤーのターン】"<<"1：攻撃"
}