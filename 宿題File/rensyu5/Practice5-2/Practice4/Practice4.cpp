// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>


#define IMax 3
#define JMax 10
using namespace std;
int main()
{

	for (int j = 1; j < JMax; j++)
	{
		printf("三の段%d\n", IMax * j);
	}



}
