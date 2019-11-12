// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define heght 3;
#define whied 7;
using namespace std;
int main()
{

	uint16_t X = 0;
	uint16_t Y = 0;

	printf("入力X\n");
	cin >> X;

	printf("入力Y\n");
	cin >> Y;

	if (X < Y && X % 2 == 0 &&Y % 2==0)
	{
		printf("XはYより小さく、かつ、ｘとｙはともに偶数である。\n");
	}
	if (X == Y && X < 0 && Y < 0)
	{
		printf("XとY等しく、かつ、負の数である。\n");
	}
	if (X < Y && X % 2==0)
	{
		printf("XはYより小さい、または、ｘは偶数である。\n");
	}
	if (X < 10 || X>100 && Y > 10 || Y < 100)
	{
		printf("Xは10以下または100以上で、かつ、ｙは10以上かつ100以下\n");
	}
	if (X > 0 && Y > 0)
	{
		printf("Xもｙも負の数である、ではない。\n");
	}
}
