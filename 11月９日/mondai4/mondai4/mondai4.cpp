// mondai4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
int Kazu[5] = { 5,1,2,9,0 };
int Sum[5];
int Max;
int num;
int main()
{
	for (int i = 0; i < 5; i++)
	{
		Max = 0;
		for (int j = 0; j < 5; j++)
		{
			if (Max < Kazu[j])
			{
				Max = Kazu[j];
				num = j;
			}
		}

		Sum[i] = Max;
		Kazu[num] = -1;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d",Sum[i]);
	}
}