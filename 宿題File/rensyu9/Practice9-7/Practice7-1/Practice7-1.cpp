// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;

char Pos(char n1)
{
	if ('a' <= n1 && n1 <= 'z')
	{
		return n1 - 0x20;
	}
	else
	{
		return n1 + 0x20;
	}
}
void main()
{
	char    num[100];

	scanf("%s", num);

	for (int i = 0; num[i]; i++)
	{
		num[i] = Pos(num[i]);
	}
	printf("%s\n", num);
}

