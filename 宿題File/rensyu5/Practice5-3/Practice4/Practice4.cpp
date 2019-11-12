// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>


#define JMax 9
using namespace std;
int main()
{
	int Num = 2;
	int Ans = 2;

	for (int j = 1; j < JMax; j++)
	{
		for (int i = 1; i < j; i++)
		{
			Ans *= Num;
		}
		printf("乗%d\n", Ans);
		Ans = 2;
	}



}
