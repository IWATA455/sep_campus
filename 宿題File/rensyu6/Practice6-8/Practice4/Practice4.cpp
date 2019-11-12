// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define Max 10
using namespace std;
int main()
{
	uint16_t Kuku[Max];
	uint16_t kazu;
	for(int i = 0; i < Max; i++)
	{
		cin >> Kuku[i];
	}

	for (int i = 0; i < Max; i++)
	{
		for (int j = i + 1; j < Max; j++)
		{
			if (Kuku[i] > Kuku[j])
			{
				kazu = Kuku[i];
				Kuku[i] = Kuku[j];
				Kuku[j] = kazu;
			}
		}
	}

	for (int i = 0; i < Max; i++)
	{
		printf("小さい%d", Kuku[i]);
	}
}
