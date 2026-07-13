/*CPUとじゃんけんを行います。
じゃんけんに勝利すると経験値を獲得します。

経験値が一定値に達するとレベルアップします。

レベル5になるとゲームクリアです。

CPUとじゃんけんを行いましょう。

出す手の選択は、「ぐー：0」「ちょき：1」「ぱー：2」とします。

勝つと経験値が獲得でき、閾値を越えるとレベルが上がっていきます。

経験値は1〜15までランダムで取得できます。

閾値は20以上です。*/
#include<iostream>
#include"20260706_H_iida.h"
#include"20260706_F_iida.h"

int main(void)
{
	int LVcount = 0;
	int LV = 0;
	srand((unsigned int)time(NULL));

	//なぜかLVが上がりません。
	Game(LVcount,LV);
	
	return 0;
}