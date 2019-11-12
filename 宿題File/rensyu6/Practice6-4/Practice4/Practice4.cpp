// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define Max 10
using namespace std;
int main()
{
	uint16_t Num1[Max];
	uint16_t Sum = 0;
	for (int i = 0; i < Max; i++)
	{
		Num1[i] = 0;
		cin >> Num1[i];
		Sum += Num1[i];
		if (Sum > 100)
		{
			break;
		}
	}
	for (int i = 0; i < Max; i++)
	{
			printf("[%d]%d,",i, Num1[i]);
	}


}
