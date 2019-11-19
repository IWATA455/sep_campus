// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define Max 17
using namespace std;
int main()
{
	char    str[100];
	int16_t i = 0;

	scanf("%s", str);

	while (str[i] != 0)
	{
		i++;
	}
	cout << i;
}
