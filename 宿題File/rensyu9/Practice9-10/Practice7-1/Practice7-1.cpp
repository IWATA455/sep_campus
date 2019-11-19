// Practice7-1.cpp : このファイルには 'maiNum' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;

void Pos(int* n1, int* n2)
{
	int t = *n1;

	*n1 = *n2;
	*n2 = t;
}
void Pos1(int* n3, int n4)
{
	int i, j;

	for (i = 0; i < n4; i++)
	{
		for (j = i + 1; j < n4; j++)
		{
			if (n3[i] > n3[j])
				Pos(n3 + i, n3 + j);
		}
	}
}
void main()
{
	int values[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &values[i]);
	}

	Pos1(values, 10);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", values[i]);
	}
}

