// Practice7-1.cpp : このファイルには 'maiNum' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
#define Max 4
struct POINT
{
	char Name[60];
	int Num;
	char Sum;
};

void Sumkansu(struct POINT* human)
{
	if (human->Num >= 80)
	{
		human->Sum = 'A';
	}
	else if (human->Num >= 70)
	{
		human->Sum = 'B';
	}
	else if (human->Num >= 60)
	{
		human->Sum = 'C';
	}
	else if (human->Num < 60)
	{
		human->Sum = 'D';
	}
}

void main(void)
{
	struct POINT human[Max];

	for (int i = 0; i < Max; i++)
	{
		printf("名前\n");
		scanf("%s", human[i].Name);
		printf("点数\n");
		scanf("%d", &human[i].Num);

		Sumkansu(&human[i]);

		printf("%s,%d点,成績%c", human[i].Name, human[i].Num, human[i].Sum);
	}

}

