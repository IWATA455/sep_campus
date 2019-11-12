// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

int main()
{
	uint16_t X = 3;
	uint16_t Y = 7;
	uint16_t Num = 0;

	Num = X;
	X = Y;
	Y = Num;

	printf("X=%d,Y=%d", X, Y);
}
