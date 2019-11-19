// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;
int main()
{
	int values[10];


	for (int i = 0; i < 10; i++)
	{
		cin >> values[i];
	}
	for (int i = 9; i >= 0; i--)
	{
		printf("\n%d", values[i]);
	}

}
