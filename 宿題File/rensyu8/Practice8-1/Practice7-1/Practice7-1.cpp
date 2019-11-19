// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;
int main()
{
	int x;
	int* p;

	p = &x;
	*p = 12;
	
	printf("%d", x);

}
