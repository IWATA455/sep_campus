// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	uint16_t  Num = 1;
	uint16_t  Sum = 0;
	uint16_t  Max = 0;

	while (Num != 0)
	{
		cin >> Num;
		Sum += Num;
		if (Num != 0)
		{
			Max++;
		}
	}

	printf("平均%d", Sum);
	printf("平均%d", Sum / Max);

}
