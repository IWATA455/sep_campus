// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	uint16_t X = 0;
	uint16_t Kotae = 0;

	printf("入力\n");
	cin >> X;


	Kotae = X;
	printf("1乗 %d\n", Kotae);

	Kotae = X * X;
	printf("2乗 %d\n", Kotae);

	Kotae = X * X * X;
	printf("3乗 %d", Kotae);
}
