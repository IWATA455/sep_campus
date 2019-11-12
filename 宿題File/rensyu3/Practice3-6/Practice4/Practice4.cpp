// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	uint16_t X = 3;

	X *= 1;
	printf("X%d\n", X);
	X = 3;

	X *= X;
	printf("X%d\n", X);
	X = 3;

	X *= X * X;
	printf("X%d\n", X);
}
