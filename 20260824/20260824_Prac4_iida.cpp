#include<iostream>

using namespace std;

int FREE(int arry[], int NUM)
{
	
	for (int i = 0; i < 5; i++)
	{
		arry[i] *= NUM;
		cout << arry[i] << endl;
	}
	return arry, NUM;
}
int main(void)
{
	int numbers[5]{ 10,20,30,40,50 };
	int* pNumber = numbers;

	int NUM = 0;

	cout << "”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;
	cin >> NUM;

	FREE(pNumber,NUM);
	
	return 0;

}