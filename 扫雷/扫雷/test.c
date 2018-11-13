#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#include"game.h"
void menu()
{
	printf("***********************************\n");
	printf("*****    1.play     0.exit    *****\n");
	printf("***********************************\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择:>\n");
			break;
		}
	} while (input);
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Init(mine, ROWS, COLS, '0');
	Init(show, ROWS, COLS,'*');
	Set(mine, ROW, COL);
	Display(show, ROW, COL);
	Display(mine, ROW, COL);
	Clean(mine,show, ROW, COL);
}
int main()
{
	test();
	system("pause");
	return 0;
}