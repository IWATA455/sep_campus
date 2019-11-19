// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define Max 10
using namespace std;
int main()
{
	int16_t Mozi;
	cin >> Mozi;

		for (int i = 0; i < 26; i++)
		{
			if (i > 0 && (i % Mozi) == 0)
				printf("\n");

			printf("%c", 'a' + i);
		}
}
