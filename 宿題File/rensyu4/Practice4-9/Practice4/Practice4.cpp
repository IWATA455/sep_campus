// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define heght 3;
#define whied 7;
using namespace std;
int main()
{
	uint16_t hyou[3][7];
	uint16_t X = 0;
	uint16_t Y = 0;

	printf("0,1,2\n");
	cin >> X;

	printf("0,1,2,3,4,5,6\n");
	cin >> Y;

	for (int i = 0; i < heght i++)
	{
		for (int j = 0; j < whied j++)
		{
			hyou[i][j] = 1;
			if (j == 0)
			{
				hyou[i][j] = 0;
			}
			if (i == 0 && j == 2 )
			{
				hyou[i][j] = 0;
			}
			if (i == 0 && j == 5)
			{
				hyou[i][j] = 0;
			}

			if (i == 1 && j == 6)
			{
				hyou[i][j] = 0;
			}
			if (i == 2 && j == 3)
			{
				hyou[i][j] = 0;
			}
			if (i == 2&&j == 6)
			{
				hyou[i][j] = 0;
			}

			
		}
	}

	if (hyou[X][Y] == 1)
	{
		printf("〇");
	}
	else if(hyou[X][Y] == 0)
	{
		printf("休診");
	}
}
