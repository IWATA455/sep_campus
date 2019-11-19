// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define Max 17
using namespace std;
int main()
{
	char    Mozi[4];
	char    str[20];
	int16_t num = 0;

	Mozi[0] = 'S';
	Mozi[1] = 'P';
	Mozi[2] = 'A';
	Mozi[3] = 'M';

	for (int i = 0; i < 20; i++)
	{
		str[i] = Mozi[num];
		num++;
		if (num == 4)
		{
			num = 0;
		}
	}

	for (int i = 0; i < 20; i++)
	{
		cout << str[i];
	}


}
