// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define Max 17
using namespace std;
int main()
{
	char    str[50];
	int16_t Num = 0;

	scanf("%s", str);

	while (str[Num] != 0)
	{
		Num++;
	}
	for (int i = Num-1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	

	
}
