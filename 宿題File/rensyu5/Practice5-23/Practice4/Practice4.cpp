// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	uint16_t  Num1 = 0;
	uint16_t  Num2 = 1;
	uint16_t  Sum = 0;
	uint16_t  Max = 1000;

	printf("%d,", Num1);
	printf("%d,", Num2);
	for (int i = 0; i < Max; i++)
	{
		Sum = Num1 + Num2;
		Num1 = Num2;
		Num2 = Sum;
		printf("%d,", Sum);


	}


}
