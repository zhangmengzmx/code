#ifndef __GAME_H__
#define __GAME_H__
#include<stdio.h>
#define ROW 3
#define COL 3
void menu();
void game();
void init_board(char board[ROW][COL], int row, int col);
void disply_board(char board[ROW][COL], int row, int col);
void player_board(char board[ROW][COL], int row, int col);
void computer_board(char board[ROW][COL], int row, int col);
char board_full(char board[ROW][COL], int row, int col);
char check_win(char board[ROW][COL], int row, int col);
#endif __GAME_H__
