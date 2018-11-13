#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Init(char mine[ROWS][COLS], int rows, int cols, char set)
{
	memset(mine, set, sizeof(mine[0][0])*rows*cols);
}
void Display(char mine[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= ROW; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= ROW; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= COL; j++)
		{
			printf("%c ",mine[i][j]);
		}
		printf("\n");
	}
	printf("............................\n");
}
void Set(char mine[ROWS][COLS], int row, int col)
{
	unsigned int x = 0;
	unsigned int y = 0;
	int count = MINE;
	while (count)
	{
		x = rand() % (row - 1) + 1;
		y = rand() % (col - 1) + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
void Move(char mine[ROWS][COLS], int row, int col)
{
	while (1)
	{
		int x = rand() % (row - 1) + 1;
		int y = rand() % (row - 1) + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			break;
		}
	}
}
int Get(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + \
		mine[x][y - 1]  + mine[x + 1][y - 1] + \
		mine[x + 1][y] + mine[x + 1][y + 1] + \
		mine[x][y + 1] + mine[x - 1][y + 1]-8 * '0';
}
void Clean(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int count = 0;
	while (win < row*col - MINE)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		count++;
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (count == 1 && mine[x][y] == '1')
			{
				Move(mine, row, col);
				mine[x][y] = '0';
			}
			else if (count != 1 && mine[x][y] == '1')
			{
				printf("很遗憾，被炸死\n");
				Display(mine, row, col);
				break;
			}
			else
			{
				show[x][y] = Get(mine, x, y) + '0';
				Display(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标有误，请重新输入:>\n");
		}
	}
	if (win >= row*col - MINE)
	{
		printf("恭喜你赢了\n");
		Display(mine, row, col);
	}
}