// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>


#define IMax 10
using namespace std;
int main()
{
	uint16_t  Num = 1000;
	uint16_t  Kazu = 3;
	uint16_t  Sum = 3;

	for (uint16_t i = 0; i < Num; i++)
	{
		if (i != 0)
		{
			Sum *= Kazu;
			printf("%d,", Sum);
		}
	}
}
