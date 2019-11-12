// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	int32_t X = 0;
	uint16_t Amari = 0;

	
	cin >> X;
	
	if (X > 60)
	{
		printf("合格");
	}
	else if (X < 60)
	{
		printf("不合格");
	}
	
}
