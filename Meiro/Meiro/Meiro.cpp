// Meiro.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <Windows.h>

#pragma comment(lib,"winmm.lib")
#define BOXWIDTH 31
#define BOXHEIGHT 31
int main()
{
	srand(timeGetTime());

	int Meiro[BOXHEIGHT][BOXWIDTH];
	//初期化
	for (int i = 0; i < BOXHEIGHT; i++)
	{
		for (int j = 0; j < BOXWIDTH; j++)
		{
			Meiro[i][j] = 0;
			//上下左右の囲い
			if (i == 0 || i == BOXHEIGHT - 1)
			{
				Meiro[i][j] = 1;
			}
			if (j == 0 || j == BOXWIDTH - 1)
			{
				Meiro[i][j] = 1;
			}
		}
	}
	for (int i = 0; i < BOXHEIGHT / 2; i++)
	{
		for (int j = 0; j < BOXWIDTH / 2; j++)
		{
			//2マスずつ等間隔で柱を立てる
			Meiro[i * 2][j * 2] = 1;
		}
	}

	//上下左右を見て1つだけ壁にする
	int Num = 0;
	for (int i = 1; i < BOXHEIGHT / 2; i++)
	{
		for (int j = 1; j < BOXWIDTH / 2; j++)
		{
			Num = rand() % 4;
			if (Num == 0)
			{
				//iが0だったら上に壁を作る選択肢　可
				if (i == 0)
				{
					Meiro[i * 2 + 1][j * 2] = 1;
				}
				else
				{
					Num = rand() % 4 + 1;
				}
			}
			//左
			if (Num == 1)
			{
				Meiro[i * 2 - 1][j * 2] = 1;
			}
			//右
			if (Num == 2)
			{
				Meiro[i * 2][j * 2 + 1] = 1;
			}
			//下
			if (Num == 3)
			{
				Meiro[i * 2][j * 2 - 1] = 1;
			}
		}
	}
	//ゴール生成
	int Width = 0;
	int Height = 0;
	int SaveWidth = 0;
	int SaveHeight = 0;
	bool Flag = false;
	while (!Flag)
	{
		Width = rand() % BOXWIDTH;
		Height = rand() % BOXHEIGHT;
		if (Meiro[Width][Height] == 0)
		{
			Meiro[Width][Height] = 2;
			SaveWidth = Width;
			SaveHeight = Height;
			Flag = true;
		}
	}
	//ゴールを見てスタート位置の生成
	Flag = false;
	while (!Flag)
	{
		Width = rand() % BOXWIDTH;
		Height = rand() % BOXHEIGHT;
		if (Meiro[Width][Height] == 0)
		{
			for (int i = 0; i < 5; i++)
			{
				if (Meiro[(SaveWidth - 2) + i][(SaveHeight - 2) + i] != 2)
				{
					Meiro[Width][Height] = 3;
					Flag = true;
				}
			}
		}
	}
	//描画
	for (int i = 0; i < BOXHEIGHT; i++)
	{
		for (int j = 0; j < BOXWIDTH; j++)
		{
			if (Meiro[i][j] == 0)
			{
				std::cout << "　";
			}
			if (Meiro[i][j] == 1)
			{
				std::cout << "■";
			}
			if (Meiro[i][j] == 2)
			{
				std::cout << "ゴ";
			}
			if (Meiro[i][j] == 3)
			{
				std::cout << "ス";
			}
		}
		std::cout << "\n";
	}
}

