#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL],int row,int col);
void StructureBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
int  IsWin(char board[ROW][COL], int row, int col);
int IsTie(char board[ROW][COL], int row, int col);

//��Ϸ������״̬
//���Ӯ----*
//����Ӯ----#
//ƽ��------Q
//����------C
