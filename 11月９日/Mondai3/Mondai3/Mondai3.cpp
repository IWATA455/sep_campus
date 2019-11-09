// Mondai3.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
int Sum[10];
#include <iostream>

int main()
{
	Sum[0] = 0;
	Sum[1] = 1;
	for (int i = 2; i < 10; i++)
	{
		Sum[i] = Sum[i - 2] + Sum[i - 1];
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d,", Sum[i]);
	}
}