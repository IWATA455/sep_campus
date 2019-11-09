// mondai1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

const int Num = 5;
int Test[Num] = { 3,3,3,3,3 };
int Sum = 0;
bool Flag = false;
int i = 0;

int Sumfunc(int n)
{
	Sum += Test[n];
	n++;
	
	if (n == 5) return Sum;

	
	Sumfunc(n);
};

int main()
{
	
	/*for (int i = 0; i < Num; i++)
	{
		Sum += Test[i];
	}*/
	/*
	while (!Flag)
	{
		Sum += Test[i];
		i++;
		if (i >= 5)
		{
			Flag = true;
		}
	}*/

	
		Sumfunc(i);
		printf("%d",Sum);
}
