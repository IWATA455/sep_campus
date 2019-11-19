// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;

int Pos(int n1, int n2)
{
	if (n1 > n2)
	{
		return n1;
	}
	else if (n1 < n2)
	{
		return n2;
	}
}
void main()
{
	int X;
	int Y;
	int Z;

	cin >> X;
	cin >> Y;
	cin >> Z;

	printf("\n%d", Pos(X,Pos(Y,Z)));
}

