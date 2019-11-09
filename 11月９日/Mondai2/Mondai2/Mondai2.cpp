// Mondai2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#define Num 3
#include <iostream>
#include <string>

using namespace std;

string Sum[Num * 2];

void SumSt(string a, string b,int i)
{
	
		
	
}
int main()
{
	
	string kazu[Num] = { "1","2","3" };
	string Mozi[Num] = { "a","b","c" };

	for (int i = 0; i < Num;i++)
	{
		Sum[i] += kazu[i];
		Sum[i + 1] += Mozi[i];
	}
	for (int i = 0; i < 6; i++)
	{
		//printf(Sum[i]);
		cout << Sum[i];
	}
}

