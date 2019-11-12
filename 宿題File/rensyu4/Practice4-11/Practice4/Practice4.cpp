// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define Max 12
using namespace std;
int main()
{

	uint16_t X = 0;
	string karennda[Max];

	for (int i = 0; i < Max; i++)
	{
		if (i == 0)
		{
			karennda[i] = "元日、成人の日";
		}
		if (i == 1)
		{
			karennda[i] = "建国の日";
		}
		if (i == 2)
		{
			karennda[i] = "春分の日";
		}
		if (i == 3)
		{
			karennda[i] = "昭和の日";
		}
		if (i == 4)
		{
			karennda[i] = "憲法記念日、みどりの日、こどもの日";
		}
		if (i == 6)
		{
			karennda[i] = "海の日";
			
		}
		if (i == 8)
		{
			karennda[i] = "敬老の日、秋分の日";
		}
		if (i == 9)
		{
			karennda[i] = "体育の日";
		}
		if (i == 10)
		{
			karennda[i] = "文化の日、勤労感謝の日";
			
		}
		if (i == 11)
		{
			karennda[i] = "天皇誕生日";
		}
	}

	printf("1～12月の休み\n");
	cin >> X;

	cout << karennda[X - 1];


	

	
}
