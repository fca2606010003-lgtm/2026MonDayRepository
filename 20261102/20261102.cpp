#include<iostream>
#include"player.h"
#include"enemy.h"
using namespace std;

namespace player
{
	void ShowStatus()
	{
		cout << "プレイヤー名:力のハリー" << endl;
	}
}

namespace enemy
{
	void ShowStutas()
	{
		cout << "敵の名前:技のポッター" << endl;
	}
}



int main(void)
{
	player::ShowStatus();
	enemy::ShowStutas();

	while(true)
	{
		cout << "1,敵に攻撃します。　２，防御します。　３，回復します。" << endl;

	}
	return 0;
}