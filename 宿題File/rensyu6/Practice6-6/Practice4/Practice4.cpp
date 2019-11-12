// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define Max 9
using namespace std;
int main()
{
	uint16_t Kuku[Max][Max];


	for (int i = 0; i < Max; i++)
	{
		for (int j = 0; j < Max; j++)
		{
			Kuku[i][j] = (i + 1) * (j + 1);
		}
	}

	for (int i = 0; i < Max; i++)
	{
		for (int j = 0; j < Max; j++)
		{
			printf("%2d", Kuku[i][j]);
			printf("\n");
		}
	}
	

}
