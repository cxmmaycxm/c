#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define ROW 3
#define COL 3

void menu();
void game();
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//
//1. player win - *
//2. computer win - #
//3. The game draws - Q
//4. continue - C
char IsWin(char board[ROW][COL], int row, int col);