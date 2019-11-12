// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	uint16_t X = 0;
	uint16_t Y = 0;


	printf("入力X\n");
	cin >> X;
	printf("入力Y？\n");
	cin >> Y;

	
	if (X > Y)
	{
		printf("XはYより大きいです");
	}
	else if(X < Y)
	{
		printf("XはYより小さいです");
	}
	else if (X == Y)
	{
		printf("XとYは同じです");
	}
}
