#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define ROW 9
#define COL 9
#define MINE 80

#define ROWS ROW+2
#define COLS COL+2

void menu();
void game();

void Init(char mine[ROWS][COLS], int row, int col, char set);
void Display(char mine[ROWS][COLS], int row, int col);
void Set(char mine[ROWS][COLS], int row, int col);
void Clean(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);
void Move(char mine[ROWS][COLS], int row, int col);
int Get(char mine[ROWS][COLS], int x, int y);
#endif

