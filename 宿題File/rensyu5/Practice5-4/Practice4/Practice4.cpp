// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>


#define IMax 7
using namespace std;
int main()
{
	int Sum = 1;
	for (int i = IMax; i > 0; i--)
	{
		Sum *= i;
	}

	printf("%d", Sum);
}
