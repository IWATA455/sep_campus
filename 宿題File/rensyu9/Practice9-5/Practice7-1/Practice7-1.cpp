﻿// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;

void Pos(int n1, char n2)
{

	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("%c", n2);

		printf("\n");
	}
}
void main()
{
	Pos(3, '%');
	printf("\n");

	Pos(5, '#');
	printf("\n");

	Pos(7, '@');
}

