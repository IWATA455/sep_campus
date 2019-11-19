// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;
int main()
{
	char    str[100] = "Hello";
	char    str1[] = "world";
	int16_t Num = 0;

	while (str[Num] != 0)
	{
		Num++;
	}
	for (int i = 0; str1[i] != 0; i++)
	{
		
		str[Num] = str1[i];
		Num++;
		
	}
	printf("%s", str);

}
