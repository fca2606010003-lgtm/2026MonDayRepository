#include"Character.h"
#include<iostream>
#include<string>

/*メンバー変数として、キャラクターの名前を管理する name を用意する。

name は private に設定し、カプセル化する。

コンストラクタで名前を設定できるようにする。

名前を取得するための GetName() メソッドを作成する。

攻撃処理を行う Attack() メソッドを作成する。

Attack() は子クラスでオーバーライドできるようにする。

クラス構造：
・Characterクラス（親）
・Main（処理）*/

using namespace std;

Character::Character(string Name)
{
	this->name=Name;
}

string Character::GetName()
{
	return name;
}

void Character::Attack()
{
	cout << "攻撃した" << endl;
}

int main(void)
{
	Character character("playerA");
	cout << character.GetName() << endl;

	character.Attack();

	return 0;
}