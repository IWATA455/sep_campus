// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;

int Pos(int n)
{
	return (n * n);
}
void main()
{
		printf("3の2乗=%d\n", Pos(3));
}

