// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>


#define IMax 10
using namespace std;
int main()
{
	uint16_t  Num = 0;
	uint16_t  Max = 0;
	uint16_t  Min = 0;


	for (uint16_t i = 0; i < IMax; i++)
	{
		
		cin >> Num;
		
		if (Max < Num)
		{
			Max = Num;
		}
	}

	printf("最大値%d\n", Max);

	
}
