// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;

void Pos(int n1)
{
	for (int i = 1; i <= 9; i++)
		printf("%d,", n1 * i);

	printf("\n");
}
void main()
{
	int Num = 3;
	Pos(Num);
}

