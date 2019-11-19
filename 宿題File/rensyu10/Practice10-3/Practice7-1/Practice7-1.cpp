// Practice7-1.cpp : このファイルには 'maiNum' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>


using namespace std;

struct  POINT
{
	int x;
	int y;
};
POINT Sum(POINT n1)
{
	n1.x *= 2;
	n1.y *= 2;

	return n1;
}
void main()
{
	POINT Num;

	Num.x = 9;
	Num.y = 2;

	Num = Sum(Num);

	printf("X=%d,Y=%d", Num.x, Num.y);

}

