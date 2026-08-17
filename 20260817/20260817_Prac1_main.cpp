#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数
const int PITING_MIN = 0;
const int PITING_MAX = 3;
const int PROBABILITY = 4;
const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;
//ゲーム開始
int main(void)
{
    int ply, emy;
    int prod;
    int Strike = 0;
    int Ball = 0;
    int Out = 0;
    int Hit = 0;
    //乱数の初期化
    srand((unsigned int)time(NULL));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;
    //OUTが３以下、HITが４以下の状態の場合にループする
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        //プレイヤーの球種選択
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;

        while (true)
        {
            cin >> ply;
            //入力チェック
            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
                break;
            }
        }

        //ボールの球種を決める関数
        PitingType(ply);

        //ENEMYの乱数生成（０以上３以下）
        emy = rand() % PROBABILITY;

        //ピッチャーの運
        prod = rand() % PROBABILITY;
        //プレイヤーとENEMYの選択球種が違う場合
        if (ply != emy)
        {
            //２５％でボールになってしまう
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }
        //プレイヤーとENEMYの入力球種があっている場合
        else
        {
            //ストライク＆ボウルのカウントをリセット
            Strike = 0;
            Ball = 0;
            //運がいいとOUTになる（２５％）
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }
        //ストライクが３以上、あるいはボールが４以上（フォアボール）の場合
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            //ストライク３＝OUTカウントに＋１
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            //ボール４＝HITカウントに＋１
            else
            {
                Hit++;
            }
            //ストライク＆ボールカウントをリセット
            Strike = 0;
            Ball = 0;
        }
        //それぞれの現在のカウントを表示
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    } 

    //結果表示
    Result(Out);

    return 0;
}