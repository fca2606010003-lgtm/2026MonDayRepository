#pragma once
using namespace std;

const int ROCK = 0;
const int PAPER = 1;
const int Scissor = 2;
const int LVUP = 20;
const int MAX = 5;

int PCheck(int player);
int ECheck(int enemy);
int Lvup(int LVcount, int LV);
int Game();