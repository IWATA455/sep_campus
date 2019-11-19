// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;
int main()
{
	char    str[100];
	char    str1[100];
	int16_t Num = 0;
	int16_t kazu = 0;
	scanf("%s", str);

	while (str[Num] != 0)
	{
		Num++;
	}

	for(int i=0;i<Num;i++)
	{
		if (str[i] < 0x61)
		{
			str1[kazu] = str[i];
			kazu++;
		}
	}
	
	str1[kazu] = 0;
	printf("%s", str1);

}
