#include<iostream>
#include"Archer.h"
#include"Rider.h"
#include"Saber.h"
#include"Servant.h"
using namespace std;
int main(void)
{
	Archer archer;
	Rider rider;
	Saber saber;

	archer.ShowProfile();
	archer.Attack();

	rider.ShowProfile();
	rider.Attack();

	saber.ShowProfile();
	saber.Attack();

	return 0;
}