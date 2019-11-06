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
	
	
	while (!G_Flag)
	{
		Num = 0;
		for (int i = 1; i < 4; i++)
		{
			if (CreateNum == Up)
			{
				if (Meiro[G_Save_Y+i][G_Save_X]==1)
				{
					Num++;
				}
			}
			if (CreateNum == Down)
			{
				if (Meiro[G_Save_Y+i][G_Save_X] == 1)
				{
					Num++;
				}
			}
			if (CreateNum == Right)
			{
				if (Meiro[G_Save_Y][G_Save_X+i] == 1)
				{
					Num++;
				}
			}
			if (CreateNum == left)
			{
				if (Meiro[G_Save_Y][G_Save_X-i] == 1)
				{
					Num++;
				}
			}
		}
		if (Num == 3)
		{
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
		}
		/*for (int i = 0; i < 3; i++)
		{
			if (CreateNum == Up)
			{
				G_Save_Y--;
				if (Meiro[G_Save_Y][G_Save_X] == 1)
				{
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
				else
				{
					G_Save_Y++;
					break;
				}
			}
			if (CreateNum == Down)
			{
				G_Save_Y++;
				if (Meiro[G_Save_Y][G_Save_X] == 1)
				{
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
				else
				{
					G_Save_Y--;
					break;
				}
			}
			if (CreateNum == Right)
			{
				G_Save_X++;
				if (Meiro[G_Save_Y][G_Save_X] == 1)
				{
					Meiro[G_Save_Y][G_Save_X] = 0;
				}
				else
				{
					G_Save_X--;
					break;
				}
			}
			if (CreateNum == left)
			{
				G_Save_X--;
				if (Meiro[G_Save_Y][G_Save_X] == 1)
				{
					Meiro[G_Save_Y][G_Save_X] = 0;
					
				}
				else
				{
					G_Save_X++;
					break;
				}
			}
			
			//壁に当たる
			
		}*/
		if (G_Save_X >= Map_X - 1 || G_Save_Y >= Map_Y - 1)
		{
			G_Flag = true;
		}
		CreateNum = rand() % 4;
	}
	Meiro[G_Y][G_X] = 2;

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