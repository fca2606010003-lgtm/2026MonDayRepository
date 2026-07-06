/*プレイヤーのHPを回復するプログラムを作成してください。
プレイヤーのHPは100とします。プレイヤーが回復するかどうかを選択させます。
「Yes：1」「No：2」とします。
Yesを選択した場合、回復関数（Heal関数）からHPを20回復させ、現状のHPを表示させます。
Noを選択した場合、そのまま現状のHpを表示させます。
*/
#include<iostream>
#include"20260706_Prac_iida.h"
#include"20260706_Fanc_iida.cpp"
//入力チェック
int PlayerCheck(int player)
{

	while (true)
	{
		if (player<YES || player>NO)
		{
			cout << "入力が間違っています\n";
		}
		else
		{
			break;
		}

	}
	return player;
}
void Heal(int& HP)
{
	//回復する動き
	HP += 20;
}
int main(void)
{
	//変数宣言
	int Options = 0;
	int Player = 100;

	while (true)
	{
		cout << "現在のHPは" << Player << "です。　回復しますか？" << endl;

		cout << "「Yes：1」「No：2」\n";
		//入力チェック
		cin >> Options;

		PlayerCheck(Options);

		if (Options == YES)
		{
			//回復する
			cout << "YES:";
			Heal(Player);
		}
		if(Options == NO)
		{
			//回復しない
			cout << "回復を拒否しました。" << endl;
		}
	}

	//終了
	return 0;
}