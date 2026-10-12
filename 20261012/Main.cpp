#include"Character.h"
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
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
	Character character("A");
	cout << character.GetName() << endl;

	character.Attack();

	string playerName;
	string enemyName;
	string bossName;
	cout << "名前を入力してください" << endl;
	cout << "勇者" << endl;
	cin >> playerName;
	cout << "敵：" << endl;
	cin >> enemyName;
	cout << "ボス" << endl;
	cin >> bossName;

	Player player("PLayer");
	cout << player.GetName() << endl;

	player.Attack();

	Enemy enemy("Enemy");
	cout << enemy.GetName() << endl;

	enemy.Attack();

	Boss boss("ゾーマ");
	cout << boss.GetName() << endl;

	boss.Attack();

	return 0;
}