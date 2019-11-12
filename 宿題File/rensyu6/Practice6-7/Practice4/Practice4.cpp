// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 10
using namespace std;
int main()
{
	uint16_t Kuku[Max][Max];

	uint16_t X;
	uint16_t Y;
	uint16_t Sum;

	for (int i = 0; i < Max; i++)
	{
		for (int j = 0; j < Max; j++)
		{
			Kuku[i][j] = (i + 1) * (j + 1);
		}
	}
	printf("入力");
	cin >> X;
	cin >> Y;

	Sum = X * Y;
	for (int i = 0; i < Max; i++)
	{
		for (int j = 0; j < Max; j++)
		{
			if (Kuku[i][j] == Sum)
			{
				printf("これ%d", Kuku[i][j]);	
			}
			break;
		}
	}
	
}
