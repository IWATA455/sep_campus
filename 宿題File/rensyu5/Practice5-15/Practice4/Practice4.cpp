// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>


#define SMax 3
#define BMax 4
using namespace std;
int main()
{
	uint16_t  Num = 0;
	uint16_t  Sutoraiku = 0;
	uint16_t  boru = 0;
	uint16_t  fal = 0;
	bool Flag = false;

	while (!Flag)
	{
		printf("入力　1 2 3");
		cin >> Num;

		if (1 == Num)
		{
			printf("ストライク\n");
			Sutoraiku++;
		}
		if (2 == Num)
		{
			printf("ボール\n");
			boru++;
		}
		if (3 == Num)
		{
			if (Sutoraiku < 3)
			{
				printf("ファール\n");
				Sutoraiku++;
			}
		}

		if (Sutoraiku > SMax || boru > BMax)
		{
			Flag = true;
		}

	}

	printf("合計%d\n", Sutoraiku);
	printf("合計%d\n", boru);

}
