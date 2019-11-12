// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>


#define IMax 10
using namespace std;
int main()
{
	int num = 0;
	int Sum = 0;

	printf("入力");
	for (int i = 0; i < IMax; i++)
	{

		cin >> num;

		Sum += num;
	}
	printf("平均%d", Sum / IMax);
}
