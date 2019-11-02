// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#define MaxID 24
typedef struct Eki
{
	int Left;
	int Right;
	int own;

}EKI;
int main()
{
	EKI EkiID[MaxID];
	int A = 0;
	int B = 0;
	int RightNum = 0;
	int LeftNum = 0;
	
	int Num = 0;
	int Ahensuu = 0;
	for (int i = 1; i < MaxID; i++)
	{
		EkiID[i].Right = rand() % 10 + 1;
		EkiID[i].Left = rand() % 10 + 1;
		//回す回数
		EkiID[i].own = 1;

		printf("Right[%d]%d  Left[%d]%d\n", i,EkiID[i].Right,i,EkiID[i].Left);
	}
	printf("Min1～Max22\n");
	printf("初期場所\n");
	std::cin >> A;
	printf("行く歩数\n");
	std::cin >> B;
	Num = A;
	
	//右左の数代入
	for (int i = 0; i < B; i++)
	{

		RightNum += EkiID[Num].Right;
		LeftNum += EkiID[Num].Left;
		Num += 1;
		if (Num >= MaxID)
		{
			Num = 1;
		}
	}

	printf("Num%d\n", Num);
	if (RightNum < LeftNum)
	{
		printf("RightNum%d\n", RightNum);
	}
	else
	{
		printf("LeftNum%d\n", LeftNum);
	}
}
