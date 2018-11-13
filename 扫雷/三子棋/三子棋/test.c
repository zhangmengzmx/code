#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("***********************************\n");
	printf("******  0.退出游戏 1.玩游戏  ******\n");
	printf("***********************************\n");
}
void game()
{
	char ret = '0';
	char board[ROW][COL] = { 0 };
	init_board(board, ROW, COL);
	disply_board(board, ROW, COL);
	while (1)
	{
		player_board(board, ROW, COL);
		disply_board(board, ROW, COL);
		ret = check_win(board, ROW, COL);
		if (' ' != ret)
		{
			break;
		}
		computer_board(board, ROW, COL);
		disply_board(board, ROW, COL);
		ret = check_win(board, ROW, COL);
		if (' ' != ret)
		{
			break;
		}
	}
	if ('X' == ret)
	{
		printf("玩家赢\n");
	}
	else if ('0' == ret)
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	disply_board(board, ROW, COL);
}
int main()
{
	int input = 1;
	do
	{
		menu();
		printf("请选择>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏！\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入有误，请重新输入：\n");
			break;
		}
	} while (input);
	return 0;
}