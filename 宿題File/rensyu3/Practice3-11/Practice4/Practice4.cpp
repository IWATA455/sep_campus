// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	uint16_t X = 0;
	uint16_t Y = 0;
	uint16_t Ans = 0;
	

	printf("入力X\n");
	cin >> X;
	printf("入力Y\n");
	cin >> Y;

	Ans =( X + Y )/ 2;

	printf("平均%d", Ans);
}
