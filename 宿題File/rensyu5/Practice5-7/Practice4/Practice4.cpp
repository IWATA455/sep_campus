// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>


#define IMax 10
using namespace std;
int main()
{
	uint16_t  kyozinnum = 0;
	uint16_t  hansinnum = 0;
	uint16_t  kyozin = 0;
	uint16_t  hansin = 0;


	for (uint16_t i = 0; i < IMax; i++)
	{
		printf("%d巨人", i);
		cin >> kyozinnum;
		printf("%d阪神", i);
		cin >> hansinnum;

		kyozin += kyozinnum;
		hansin += hansinnum;
	}

	printf("巨人%d点,阪神%d点\n", kyozin, hansin);

	if (kyozin > hansin)
	{
		printf("巨人勝利\n");
	}
	else if (kyozin > hansin)
	{
		printf("阪神勝利\n");
	}
	else if (kyozin == hansin)
	{
		printf("引き分け\n");
	}

}
