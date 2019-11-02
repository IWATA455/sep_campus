// Tetolisu.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<stdint.h>
#include<Windows.h>
#define Flem 60
#define MapWidth 16
#define MapHeight 16
#define BrockNum 4
#define ID 4
#define initPos 4

int main()
{
	//後で消す
	bool Flag = false;
	bool HitFlag = false;

	enum
	{
		Nome,
		own,
	};
	
	
	int Map[MapHeight][MapWidth];
	int MapDrwa[MapHeight][MapWidth];
	int Zangai[MapHeight][MapWidth];
	int ZangaiSave[MapHeight][MapWidth];
	//三次元配列にあとでやる[ID][[Y][X]
	int Save[BrockNum][BrockNum];
	int Brock[ID][BrockNum][BrockNum] =
	{
		{
			0,0,0,0,
			0,0,0,0,
			0,1,0,0,
			1,1,1,0
		},
		{
			0,1,0,0,
			0,1,0,0,
			0,1,0,0,
			0,1,0,0
		},
		{
			0,0,0,0,
			0,1,0,0,
			0,1,0,0,
			0,1,1,0
		},
		{
			0,0,0,0,
			0,1,0,0,
			0,1,0,0,
			1,1,0,0
		}
	
	};
	//キー

	BYTE				m_Keyboard[MAX_PATH];
	ZeroMemory(m_Keyboard, sizeof(m_Keyboard));
	//初期化
	int NumWidth = initPos;
	int NumHight = 0;
	int Num = 0;
	int Id = 0;

	for (int i = 0; i < MapHeight; i++)
	{
		for (int j = 0; j < MapWidth; j++)
		{
			Zangai[i][j] = 0;
		}
	}

	while (!Flag)
	{
		//マップ
		for (int i = 0; i < MapHeight; i++)
		{
			for (int j = 0; j < MapWidth; j++)
			{
				Map[i][j] = MapDrwa[i][j] = 0;
				ZangaiSave[i][j] = 0;
				Save[j][i] = 0;
			}
		}
		
		//キー

		if (GetKeyState(VK_RIGHT) < 0)
		{
			NumWidth++;
		}
		else if (GetKeyState(VK_LEFT) < 0)
		{
			NumWidth--;
		}

		if (GetKeyState(VK_UP) < 0)
		{
			
			for (int i = BrockNum; i > 0; i--)
			{
				for (int j = 0; j < BrockNum; j++)
				{
					
					Save[j][BrockNum -i] = Brock[Id][i-1][j];
				}
			}
			for (int i = 0; i < BrockNum; i++)
			{
				for (int j = 0; j < BrockNum; j++)
				{
					Brock[Id][i][j] = Save[i][j];
				}
			}
		}
		else if (GetKeyState(VK_DOWN) < 0)
		{
			for (int i = BrockNum; i > 0; i--)
			{
				for (int j = BrockNum; j > 0; j--)
				{
					Save[BrockNum - j][i - 1] = Brock[Id][i - 1][j - 1];
				}
			}
			for (int i = 0; i < BrockNum; i++)
			{
				for (int j = 0; j < BrockNum; j++)
				{
					Brock[Id][i][j] = Save[i][j];
				}
			}
		}

		
		//ブロックをマップに
		for (int i = 0; i < BrockNum; i++)
		{
			for (int j = 0; j < BrockNum; j++)
			{
				Map[i + NumHight][j + NumWidth] = Brock[Id][i][j];
				MapDrwa[i + NumHight][j + NumWidth] = Brock[Id][i][j];
			}
		}
		for (int i = 0; i < MapHeight; i++)
		{
			for (int j = 0; j < MapWidth; j++)
			{
				MapDrwa[i][j] += Zangai[i][j];
			}
		}
		NumHight++;
		//判定
		for (int i = 0; i < MapHeight; i++)
		{
			for (int j = 0; j < MapWidth; j++)
			{
				if (Zangai[i+1][j] >= 1&& Map[i][j]>=1)
				{
					HitFlag = true;
				}
			}
		}
		if (HitFlag)
		{
			NumWidth = initPos;
			NumHight = 0;
			for (int i = 0; i < MapHeight; i++)
			{
				for (int j = 0; j < MapWidth; j++)
				{
					Zangai[i][j] += Map[i][j];
				}
			}
			Id = rand() % ID;
			HitFlag = false;
		}
		//一番下にブロックがいたら

		if (NumHight + 3 >= MapHeight)
		{

			NumWidth = initPos;
			NumHight = 0;
			for (int i = 0; i < MapHeight; i++)
			{
				for (int j = 0; j < MapWidth; j++)
				{
					Zangai[i][j] += Map[i][j];
				}
			}
			Id = rand() % ID;
		}
		//列揃ったら
		int kazu = 0;
		int ColumnEraseNumEraseNum = 0;
		bool DeleteFlag = false;
		
		int SaveNum = 0;
		for (int i = 0; i < MapHeight; i++)
		{
			for (int j = 0; j < MapWidth; j++)
			{
				if (Zangai[i][j] >= 1)
				{
					kazu++;
				}
				if (kazu > MapWidth - own)
				{
					for (int j = 0; j < MapWidth; j++)
					{
						Zangai[i][j] = 0;
						kazu = 0;
						SaveNum = i;
						DeleteFlag = true;
					}
					ColumnEraseNumEraseNum++;
				}
			}
			kazu = 0;
		}
		//一段下げる
		if (DeleteFlag)
		{
			for (int i = SaveNum; i > 0; i--)
			{
				for (int j = 0; j < MapWidth; j++)
				{
					if(i - ColumnEraseNumEraseNum >0)
					ZangaiSave[i][j] = Zangai[i-ColumnEraseNumEraseNum][j];
				}
			}
			for (int i = 0; i < MapHeight; i++)
			{
				for (int j = 0; j < MapWidth; j++)
				{
					Zangai[i][j] = ZangaiSave[i][j];

				}
			}
			DeleteFlag = false;
		}
		//描画
		for (int i = 0; i < MapHeight; i++)
		{
			for (int j = 0; j < MapWidth; j++)
			{
				if (MapDrwa[i][j] == 0)
				{
					printf("□");
					
				}

				if (MapDrwa[i][j] >= 1)
				{
					printf("■");
					
				}
			}
			printf("\n");
		}
		printf("\n");

		
		Sleep(Flem*10);

	}

	/**/
}