#pragma once
class PLAYER
{public:
	const int HEAL = 20;

	int playerHp = 0;
	int Attack(int enemy);
	void Difence();
	void Heal();

};