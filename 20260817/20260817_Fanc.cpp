/*1～7までの数字が書かれたカードを使った「数字あてゲーム」を作成してください。

カードは、数字ごとに枚数が異なります。

1が1枚
2が2枚
3が3枚
4が4枚
5が5枚
6が6枚
7が7枚

全部で28枚になります。
この28枚のカードをランダムに分けて、ゲームを行います。

カードの分け方：
28枚のカードから、

7枚 → 伏せておくカード
7枚 → 場に公開するカード
7枚 → プレイヤーのカード
7枚 → CPUのカード
として分けます。

プレイヤーのカードは数字を見ることができません。一方、CPUのカードはすべて確認することができます。

場に公開されているカードとCPUのカードを参考にして、プレイヤーの隠れているカードの数字を予想してください。


自分のカードに隠されている数字を推理し、すべてのカードを当てるゲームを完成させてください。*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260817_C_H_iida.h"

using namespace std;

void createCRAD(int cards[])
{
	int index = 0;
	int number = 0;
	int count = 0;


	for (number = 0; number < MAX_NUMBER - 1; number++)
	{
		for (count = 0; count < number + 1; count++)
		{
			cards[index] = number + 1;
			index++;
		}
	}
}

void ShuffleCARD(int cards[])
{

	srand((unsigned int)time(NULL));

	for (int i = 0; i < TOTAL_CARD; i++)
	{
		int randomeIndex = rand() % TOTAL_CARD;
		int temp = cards[i];
		cards[i] = randomeIndex;
		cards[randomeIndex] = temp;
	}

}

void ShowCRAD(int cards)
{
	for (int i = 0; i < GROUP_CARD; i++)
	{
		cout << "[" << cards[i] << "]";
	}

	cout << endl;
}

void ShowHiddenCARD(int cards[])
{
	for (int i = 0; i < GROUP_CARD; i++)
	{
		cout << "[?]";
	}
}