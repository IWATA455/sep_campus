// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define Max 10
using namespace std;
int main()
{
	uint16_t  Num1[Max];
	
	for (int i = 0; i < Max; i++)
	{
		cin >> Num1[i];
	}
	for (int i = 0; i < Max; i++)
	{
		printf("%d,", Num1[i] * 2);
	}


}
