#pragma once
#include<iostream>
#include"Character.h"
class Player :public Character
{
public:
	Player();

	void Action(Character& yarget);

};