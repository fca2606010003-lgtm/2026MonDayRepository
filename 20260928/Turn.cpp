#include"Turn.h"
#include<iostream>
#include"config.h"

using namespace std;

bool Turn::PlayPlayerTurn(Player* player, CardManager* cardManager)
{
	while (true)
	{
		cout << "\n=======================--";
		cout << "Player Turn";
		cout << "\n";

		player->ShowStatus();
		if (player->GetTotal() == TARGET_SCORE)
		{
			cout << "\nPlayer TOTAL : 21\n";

			return true;
		}

		cout << "\nカードを弾きますか？\n";
		cout << INPUT_YES << ":Yes\n";
		cout << INPUT_NO << ":No\n";

		int input;

		cin >> input;
		//カード弾かない
		if (input == INPUT_NO)
		{
			cout << "\nカードを弾きません\n";
			return true;
		}

		if (input == INPUT_YES)
		{
			int card = cardManager->DrawCard();

			cout << "\nプレーヤーがカードを弾きました\n";
			cout << "弾いたカード:" << card << endl;

			player->AddCard(card);

			player->ShowStatus();
		}

		if (player->GetTotal() >= BURST_SCPRE)
		{
			cout << "\nPLAYER はバーストしました\n";
			return false;
		}
	}
}


void Turn::PlayCpuTurn(Player* player, CPU* cpu, CardManager* cardManager)
{
	cout << "\n=====================";
	cout << "\nCPU TRUN";
	cout << "\n=====================";
	player->ShowStatus();
	cpu->ShowStatus();

	while (true)
	{
		if (cpu->GetTotal() == TARGET_SCORE)
		{
			cout << "CPU`S TOTAL: 21\n";
			break;
		}

		if (cpu->GetTotal() >= BURST_SCPRE)
		{
			cout << "\nCPUはバーストしました";
			break;
		}

		if (cpu->GetTotal() <= CPU_DRAW_LIMIT)
		{
			cout << "\nCPUは１５以下なのでドローします\n";
		}
		else if (cpu->GetTotal() < player->GetTotal())
		{
			cout << "CPUはplayerより小さいのでカードを弾きます\n";
		}
		else
		{
			cout << "CPUはplayer以上になりました" << endl;
			cout << "CPUはカードを弾きません" << endl;

			break;
		}

		int card = cardManager->DrawCard();
		cout << "\ncpuがカードを弾きました";
		cout << "弾いたカード:" << card << endl;

		cpu->AddCard(card);
		cpu->ShowStatus();
	}

}