// Mondai5.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

#define Max 10
#define MaxNum 100
enum number
{
	Zero,
	One,
	Two,
};
int32_t Sum = 0;
int32_t Number[10];
int32_t formulaNum[10];
int32_t ChangeNum = 0;


bool Flag = false;
bool threeFlag = false;

int main()
{
	for (int i = 0; i < Max; i++)
	{
		Number[i] = 0;
		formulaNum[i] = 0;
	}
	while (!Flag)
	{
		Sum = 0;
		for (int i = 0; i < Max; i++)
		{
			//+か-か*10を出している
			/* + =+0,- =*-1," "=*10 */
			ChangeNum = rand() % 3;
			if (ChangeNum == Zero)
			{
				Number[i] = i;
				threeFlag = false;
			}
			else if (ChangeNum == One)
			{
				Number[i] = -i;
			}
			else if (ChangeNum == Two)
			{
				if (!threeFlag)
				{
					if (i != Max-One)
					{
						Number[i] = i * Max;
						threeFlag = true;
					}
				}
			}
			//もし前のやつが＊10だったら強制的に+
			else if (threeFlag)
			{
				Number[i] = i;
				threeFlag = false;
			}
		}
		//合計
		for (int16_t i = One; i < Max; i++)
		{
			Sum += Number[i];
		}
		//合計の確認
		if (Sum == MaxNum)
		{
			Flag = true;
		}
		else
		{
			continue;
		}
	}

	//式の為に変更
	for (int i = One; i < Max; i++)
	{
		if (Number[i] <= Max)
		{
			formulaNum[i] = Number[i];
		}
		else
		{
			formulaNum[i] = Number[i] + Number[i + One];
			i++;
		}
	}
	//描画
	for (int i = One; i < Max; i++)
	{
		if (formulaNum[i] != 0)
		{
			if (i != One)
			{
				printf("+%d", formulaNum[i]);
			}
			else
			{
				printf("%d", formulaNum[i]);
			}
		}
	}
	printf("=%d", Sum);
}
