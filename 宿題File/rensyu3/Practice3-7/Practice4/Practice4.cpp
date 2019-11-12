// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	uint16_t X = 7;
	uint16_t Syo = 0;
	int amari = 0;

	Syo = X / 2;
	amari = X % 2;

	printf("X%d\n", Syo);
	printf("X%d", amari);
}
