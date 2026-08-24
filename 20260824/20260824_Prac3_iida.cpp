#include<iostream>

using namespace std;
//’è”
const int NUM = 5;
const int MAX = 96;

int main(void)
{
	//•Ï”
	int numbers[5] = { 35, 82, 17, 96, 54 };
	int* pNumber = numbers;

	int num_max=0;
	int num_keep = 0;

	for (int i = 0; i < NUM; i++)
	{
		num_max = *(pNumber + i);
		cout << "Œ»İ’l:" << num_max << endl;
		if (num_max == MAX)
		{
			num_keep = num_max;
		}

		/*if (num_max < MAX)
		{
			cout << "Œ»İ’l:" << num_max << endl;
		}
		else
		{
			break;
		}*/
	}

	cout << "Å‘å’l : " << num_keep << endl;
}