#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"
void init_board(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', row*col*sizeof(char));
}
void disply_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < ROW - 1)
			printf("---|---|---\n");
	}
	printf("............................\n");
}
void player_board(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("玩家输入坐标：\n");
		scanf("%d%d", &x,&y);
		--x;
		--y;
		if ((x >= 0) && (x < ROW) && (y >= 0) && (y < COL))
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = 'X';
				break;
			}
			else
			{
				printf("坐标有误，请重新输入：\n");
			}
		}
		else
		{
			printf("坐标有误，请重新输入：\n");
		}
	}
}
void computer_board(char board[ROW][COL], int row, int col)
{
	srand((int)time(NULL));
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("电脑输入坐标：\n");
		x = rand() % ROW;
		y = rand() % COL;
		printf("%d %d\n", x+1,y+1);
		if (board[x][y] == ' ')
		{
			board[x][y] = '0';
			break;
		}
		else
		{
			printf("输入有误，请重新输入：\n");
		} 
	}
}
char board_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
				return ' ';
		}
	}
	return 'f';
}
char check_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	else
		return board_full(board,ROW,COL);

}
