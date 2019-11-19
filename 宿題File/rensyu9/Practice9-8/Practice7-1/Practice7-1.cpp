// Practice7-1.cpp : このファイルには 'maiNum' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;

int Pos(char n1)
{
	int i;

	if (n1 <= 3)
	{
		return 1;
	}
	for (i = 2; i <= (n1 / 2); i++)
	{
		if ((n1 % i) == 0)
			return 0;
	}
}
void main()
{
	int Num;

	for (Num = 10000; Num < 10100; Num++)
	{
		if (Pos(Num))
		{
			printf("%d ", Num);
		}
	}
}

