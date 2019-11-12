// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>


using namespace std;
int main()
{
	enum
	{
		zero,
		iti,
		ni,
		san,
		yon,
		go,
		roku,
		nana,
		hati,
		kyuu,
		zyu,
		zyuit,
		zyuuni,

	};


	int Neta = 0;

	printf("1～12月の中からえらんでね\n");
	cin >> Neta;

	switch (Neta)
	{
	case iti:
		printf("31日");
		break;
	case ni:
		printf("28日");
		break;
	case san:
		printf("31日");
		break;
	case yon:
		printf("30日");
		break;
	case go:
		printf("31日");
		break;
	case roku:
		printf("30日");
		break;
	case nana:
		printf("31日");
		break;
	case hati:
		printf("30日");
		break;
	case kyuu:
		printf("31日");
		break;
	case zyu:
		printf("31日");
		break;
	case zyuit:
		printf("30日");
		break;
	case zyuuni:
		printf("31日");
		break;
	default:
		printf("入力が違います");
		break;
	}





}
