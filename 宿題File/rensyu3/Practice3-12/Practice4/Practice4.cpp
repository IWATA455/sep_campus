// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	uint16_t ago = 0;
	uint16_t Day = 365;
	

	printf("歳は？\n");
	cin >> ago;

	printf("おおよその日数は%d日", ago * Day);
}
