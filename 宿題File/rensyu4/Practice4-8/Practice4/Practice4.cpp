// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define roku 60
#define SumMax 130
#define Sum1 100
#define Sum2 90
using namespace std;
int main()
{
	int32_t X = 0;
	int32_t Y = 0;
	uint16_t Sum = 0;

	printf("中間");
	cin >> X;
	printf("期末");
	cin >> Y;

	Sum = X + Y;

	if (X >= roku && Y >= roku)
	{
		printf("合格");
	}
	else if (Sum >= SumMax)
	{
		printf("合格");
	}
	else if (Sum >= Sum1 && X >= Sum2 || Y >= Sum2)
	{
		printf("合格");
	}
	else
	{
		printf("不合格");
	}

}
