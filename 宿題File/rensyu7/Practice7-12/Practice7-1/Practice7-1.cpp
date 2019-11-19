// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;
int main()
{
	char    str[] = "Helloworld";

	int16_t Num = 0;
	int16_t save = 0;

	while (str[Num] != 0)
	{
		Num++;
	}
	for (int i = 0; i < Num/2; i++)
	{
		save = str[i];
		str[i] = str[Num - i - 1];
		str[Num - i - 1] = save;


	}
	printf("%s", str);

}
