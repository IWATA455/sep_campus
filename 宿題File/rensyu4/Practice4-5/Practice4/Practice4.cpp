// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	uint16_t X = 0;
	uint16_t Amari = 0;

	printf("整数値X\n");
	cin >> X;

	Amari = X % 2;

	if (Amari == 0)
	{
		printf("偶数\n");
	}
	else if (Amari >= 1)
	{
		printf("奇数\n");
	}
}
