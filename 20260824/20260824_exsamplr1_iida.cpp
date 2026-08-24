#include <iostream>
using namespace std;

int main(void) //ここまでテンプレ 
{
    //aのアドレスを＊ｐに取得
    int a = 0;
    int* p = &a;
    //aの値を表示
    cout << "aの初期値: " << a << endl;
    //aのアドレスを使用し、aの値に直接代入
    *p = 10;
    //↑の代入後のaの値を表示
    cout << "aの変更後の値: " << a << endl;

    return 0;
}