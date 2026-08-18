#pragma once

//定数

//カードの総枚数
const int TOTAL_CARD = 28;
//1グループのカード枚数
const int GROUP_CARD = 7;
//カードの総枚数
const int MAX_NUMBER = 7;

//関数
/// <summary>
/// ２８枚のカードを作成
/// </summary>
/// <param name="cards">カード</param>
void CreateCARD(int cards[]);

/// <summary>
/// カードをシャッフル
/// </summary>
/// <param name="cards">カード</param>
void ShuffleCARD(int cards[]);

/// <summary>
/// カードを表示
/// </summary>
/// <param name="cards">カード</param>
void ShowCARD(int cards[]);

/// <summary>
/// カードを伏せて表示
/// </summary>
/// <param name="cards">カード</param>
void ShowHiddenCARD(int cards[]);