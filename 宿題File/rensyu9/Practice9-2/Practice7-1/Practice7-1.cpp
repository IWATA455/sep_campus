// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;

int Pos(int n1, int n2)
{
	return (n1 + n2)/2;
}
void main()
{
	int pos1;
	int pos2;
	

	cin >> pos1;
	cin >> pos2;

	printf("平均　%d\n", Pos(pos1,pos2));
}

