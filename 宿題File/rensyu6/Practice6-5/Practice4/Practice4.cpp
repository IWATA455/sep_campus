// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 10
using namespace std;
int main()
{
	uint16_t binary[16];
	int32_t value;

	//cin >> value;
	cin >> value;
	for (int i = 15; i >= 0; i--)
	{
		binary[i] = value % 2;
		value /= 2;
	}

	for (int i = 0; i < 16; i++)
	{
		printf("%d", binary[i]);
	}
}
