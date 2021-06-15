#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			board[i][j] =' ';
		}
	}
}

int IsTie(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
				return 'C';
		}
	}return 1;
}


void StructureBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//打印行进行循环，分成2步骤，1打印数据，2打印分割线。
	//1打印数据
	for (i = 0; i < ROW; i++)
	{
		//将一列打印好。分为2步，1打印数据，2打印小竖线。
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
				printf("|");
		}
		printf("\n");//一行的数据打印好了进行换行。第一步已经完成。
		//2打印分割线
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
			}

			printf("\n");//一行的分割线打印好了进行换行。第二步已经完成。
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while (1)
	{
		printf("请玩家输入落子的坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标已经有棋子，请重新输入\n");
		}
		else
			printf("输入错误，请重新输入\n");

	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走的棋子位置是：\n");
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (x >= 0 && x <= 2 && y >= 0 && y <= 2)
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		}
	}
}

int IsWin(char board[ROW][COL], int row, int col)
{
	//判断行相同。
	int i = 0;
	for (i = 0; i < ROW;i++)
	if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		return board[i][1];
	//判断列相同
	int j = 0;
	for (j = 0; j < ROW; j++)
	if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		return board[1][j];
	//判断对角线元素相同
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//判断是否平局
	if (1 == IsTie(board, ROW, COL))
		return 'Q';

}
	