/*次の配列が用意されています。
int numbers[5] = { 10, 20, 30, 40, 50 };

この配列に入っている5つの値を、ポインタを使って表示するプログラムを作成してください。

【条件】
・配列の要素を表示するときに numbers[i] を使用してはいけません。
・配列の先頭アドレスをポインタに保存してください。
・ポインタを使って配列の各要素を順番に取得してください。
・for文を使用してください。

【実行結果】
10
20
30
40
50
【ポイント】
ポインタを使うことで、配列の先頭アドレスから各要素の値を取得できることを確認してください。*/
#include<iostream>
//#include"20260824_FREE_iida.h"

using namespace std;

const int NUM = 5;

int main(void)
{
	//配列
	int numbers[5] = { 10, 20, 30, 40, 50 };
	int* pNumber;

	pNumber = numbers;
	
	for (int i = 0; i < NUM; i++)
	{
		cout << *(pNumber + i) << endl;
	}
	return 0;
}