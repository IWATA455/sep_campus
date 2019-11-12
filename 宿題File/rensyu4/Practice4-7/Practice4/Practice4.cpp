// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define roku 60
#define nana 70
#define hati 80
using namespace std;
int main()
{
	enum Num
	{
		Zero,
		One,
		Twe
	};
	int32_t X = 0;
	uint16_t Amari = 0;
	uint16_t saitenn = 2;


	cin >> X;

	switch (saitenn)
	{
	case Zero:
		if (X >= roku)
		{
			printf("合格");
		}
		else if (X < roku)
		{
			printf("不合格");
		}
	case One:
		if (X >= hati)
		{
			printf("たいへんよくできました");
		}
		else if (X >= roku && X < hati)
		{
			printf("よくできました");
		}
		else if (X < roku)
		{
			printf("ざんねんでした");
		}
	case Twe:
		if (X >= hati)
		{
			printf("優");
		}
		else if (X >= nana && X < hati)
		{
			printf("良");
		}
		else if (X >= roku && X < nana)
		{
			printf("可");
		}
		else if (X < roku)
		{
			printf("不可");
		}
	default:
		break;
	}
}
