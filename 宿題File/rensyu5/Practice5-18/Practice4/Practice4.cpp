// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>


#define IMax 10
#define JMax 10
using namespace std;
int main()
{
	uint16_t  Num = 0;
	uint16_t  Sutoraiku = 0;
	uint16_t  boru = 0;
	uint16_t  fal = 0;
	bool Flag = false;

	for (int i = 1; i < IMax; i++)
	{
		for (int j = 1; j < JMax; j++)
		{
			printf("[%d][%d] %d\n",i,j, i * j);

		}
	}

}
