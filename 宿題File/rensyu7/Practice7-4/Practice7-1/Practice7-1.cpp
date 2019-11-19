// Practice7-1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

#define Max 17
using namespace std;
int main()
{
	int16_t Mozi;
	char Mozihairetu[Max];
	cin >> Mozi;
	
	
	for (int i = Max - 2; i >= 0; i--)
	{
		Mozihairetu[i] = '0' + (Mozi % 2);
		Mozi /= 2;
	}
	Mozihairetu[Max-1] = 0;
	printf("%s", Mozihairetu);

}
