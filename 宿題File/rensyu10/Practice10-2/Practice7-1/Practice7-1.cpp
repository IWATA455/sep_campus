// Practice7-1.cpp : このファイルには 'maiNum' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;


void main()
{
	struct POINT
	{
		int Num;
		int mm;
	};
	
	struct POINT point[4];

	for (int i = 0; i < 4; i++)
	{
		printf("月\n");
		cin >> point[i].Num;
		printf("水量\n");
		cin >> point[i].mm;
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%d月　%dmm ", point[i].Num, point[i].mm);
	}
}

