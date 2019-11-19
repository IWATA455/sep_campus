// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

#define Max 17
using namespace std;
int main()
{
	char    x[] = "hello world";

	*x -= 0x20;
	*(x + 6) -= 0x20;

	printf("%s\n", x);
	

}
