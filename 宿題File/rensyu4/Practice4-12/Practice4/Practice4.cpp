// Practice4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>


using namespace std;
int main()
{
	enum
	{
		zero,
		Maguro,
		ika,
		egi,
		sanma,
		iwasi,

	};

	
	int Neta = 0;

	printf("1～5の中からえらんでね\n");
	cin >> Neta;

	switch (Neta)
	{
	case Maguro:
		printf("鮪10かん");
		break;
	case ika:
		printf("イカ2かん");
		break;
	case egi:
		printf("海老６かん");
		break;
	case sanma:
		printf("秋刀魚9かん");
		break;
	case iwasi:
		printf("鰯100かん");
		break;
	default:
		break;
	}


	

	
}
