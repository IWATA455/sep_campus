// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	uint16_t  Num = 0;
	uint16_t  Sum = 0;
	uint16_t  Max = 0;

	printf("入力");
	cin >> Num;
	for (int i = 0; i < Num; i++)
	{
		Max++;
		for (int j = 0; j < Max; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
