#pragma once
#include<iostream>
#include<string>
using namespace std;
class Character
{
private:

	string name;
public:
	Character(string Name);

	string GetName();

	virtual void Attack();
};