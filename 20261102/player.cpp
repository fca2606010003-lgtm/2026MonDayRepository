#include<iostream>
#include"player.h"
#include"enemy.h"
using namespace std;

int PLAYER::Attack(int enemy)
{
	enemy -= 30;
}

void PLAYER::Difence()
{

}

void PLAYER::Heal()
{
	playerHp += 20;
}
