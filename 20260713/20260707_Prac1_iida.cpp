#include<iostream>
#include"20260707_H1_iida.h"
using namespace std;

/*10 個の数値を入力する。
入力された数値を偶数（even）と奇数（odd）に分類して表示する。
数字を入れる配列は関数にして配列を渡しましょう。*/

int main(void)
{
	//配列
	int arry[INDEX] = {};
	//
	cout << "10個の整数を入力する。\n";
	//
	AddArray(arry, INDEX);
	//
	cout << "偶数" << endl;

	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2 == 0)
		{
			cout << arry[i] << "\n";
		}
	}
	cout << "奇数:" << endl;
	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2 != 0)
		{
			cout << arry[i] << "\n";
		}
	}

	return 0;
}