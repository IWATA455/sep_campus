// Meiro2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

#define Map_X 30
#define Map_Y 30
int main()
{
	//変数
	int Meiro[Map_Y][Map_X];

	//初期化
	for (int i = 0; i < Map_Y; i++)
	{
		for (int j = 0; j < Map_X; j++)
		{
			Meiro[i][j] = 1;
		}
	}

	//ゴールからスタート生成
	int G_X = 0;
	int G_Y = 0;
	int G_Save_X = 0;
	int G_Save_Y = 0;

	bool G_Flag = false;

	G_X = rand() % Map_X;
	G_Y = rand() % Map_Y;

	G_Save_X = G_X;
	G_Save_Y = G_Y;
	int Num = 0;
	
	enum Number
	{
		Up,
		Down,
		Right,
		left,
		Max
	};
	int CreateNum = rand() % 4;
	int rootNum = 0;
	//３マスづつ生成
	for (int i = 0; i < 3; i++)
	{
		if (CreateNum == Up)
		{
			G_Save_Y--;
			Meiro[G_Save_Y][G_Save_X] = 0;
		}
		if (CreateNum == Down)
		{
			G_Save_Y++;
			Meiro[G_Save_Y][G_Save_X] = 0;
		}
		if (CreateNum == Right)
		{
			G_Save_X++;
			Meiro[G_Save_Y][G_Save_X] = 0;
		}
		if (CreateNum == left)
		{
			G_Save_X--;
			Meiro[G_Save_Y][G_Save_X] = 0;
		}
	}
	Meiro[G_Y][G_X] = 2;
	while (!G_Flag)
	{
		/*rootNum = rand() % 4;
		for (int i = 0; i < 3; i++)
		{
			if (CreateNum == Up)
			{
				if (rootNum == Up)
				{
					G_Save_Y--;
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
				if (rootNum == Right)
				{
					G_Save_X++;
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
				if (rootNum == left)
				{
					G_Save_X--;
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
			}
			else if (CreateNum == Down)
			{
				if (rootNum == Down)
				{
					G_Save_Y++;
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
				if (rootNum == Right)
				{
					G_Save_X++;
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
				if (rootNum == left)
				{
					G_Save_X--;
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
			}
			else if (CreateNum == Right)
			{
				if (rootNum == Up)
				{
					G_Save_Y--;
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
				if (rootNum == Down)
				{
					G_Save_Y++;
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
				if (rootNum == Right)
				{
					G_Save_X++;
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
			}
			else if (CreateNum == left)
			{
				if (rootNum == Up)
				{
					G_Save_Y--;
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
				if (rootNum == Down)
				{
					G_Save_Y++;
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
				if (rootNum == left)
				{
					G_Save_X--;
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
			}
			if (G_Save_X >= Map_X-1 || G_Save_X <= 0|| G_Save_Y >= Map_Y - 1 || G_Save_Y <= 0)
			{
				G_Flag = true;
			}
		}*/
		//壁に当たる
		
		for (int i = 0; i < 3; i++)
		{
			if (Meiro[G_Save_Y][G_Save_X] ==0)
			{
				
			}
			if (CreateNum == Up)
			{
				G_Save_Y--;
				Meiro[G_Save_Y][G_Save_X] = 0;
			}
			if (CreateNum == Down)
			{
				G_Save_Y++;
				Meiro[G_Save_Y][G_Save_X] = 0;
			}
			if (CreateNum == Right)
			{
				G_Save_X++;
				Meiro[G_Save_Y][G_Save_X] = 0;
			}
			if (CreateNum == left)
			{
				G_Save_X--;
				Meiro[G_Save_Y][G_Save_X] = 0;
			}
			
		}
		Meiro[G_Y][G_X] = 2;

		//壁に当たる
		if (G_Save_X > Map_X || G_Save_Y > Map_Y)
		{
			G_Flag = true;
		}
	}


	//表示
	for (int i = 0; i < Map_Y; i++)
	{
		for (int j = 0; j < Map_X; j++)
		{
			if (Meiro[i][j] == 0)
			{
				printf("　");
			}
			if (Meiro[i][j] == 1)
			{
				printf("■");
			}
			if (Meiro[i][j] == 2)
			{
				printf("ゴ");
			}
		}
		printf("\n");
	}
    
}