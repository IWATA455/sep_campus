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
void main()
{
	int values[10];

	for (int i = 0; i < 10; i++)
		scanf("%d", &values[i]);

	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (values[i] > values[j])
				Pos(values + i, values + j);
		}
	}

	for (int i = 0; i < 10; i++)
		printf("%d ", values[i]);
}

