// Practice7-1.cpp : このファイルには 'maiNum' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
#define Max 4

struct POSITION
{
	double  latitude;     // 緯度
	double  longitude;    // 経度
};

struct CITYINFO
{
	char    name[50];
	struct POSITION    pos;
};

void ShowCityInfo(struct CITYINFO* aCity, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%s,%lf,%lf")
	}
}

void main(void)
{
	struct CITYINFO aCity[] = { { "東京", 35.41, 139.45 },
								{ "大阪", 34.41, 135.29 },
								{ "名古屋", 35.11, 136.54 } }:
	
	ShowCityInfo(aCity, 3);
}

