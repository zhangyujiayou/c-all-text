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
	//��ӡ�н���ѭ�����ֳ�2���裬1��ӡ���ݣ�2��ӡ�ָ��ߡ�
	//1��ӡ����
	for (i = 0; i < ROW; i++)
	{
		//��һ�д�ӡ�á���Ϊ2����1��ӡ���ݣ�2��ӡС���ߡ�
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
				printf("|");
		}
		printf("\n");//һ�е����ݴ�ӡ���˽��л��С���һ���Ѿ���ɡ�
		//2��ӡ�ָ���
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
			}

			printf("\n");//һ�еķָ��ߴ�ӡ���˽��л��С��ڶ����Ѿ���ɡ�
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����\n");
	while (1)
	{
		printf("������������ӵ����꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("�����Ѿ������ӣ�����������\n");
		}
		else
			printf("�����������������\n");

	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ߵ�����λ���ǣ�\n");
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
	//�ж�����ͬ��
	int i = 0;
	for (i = 0; i < ROW;i++)
	if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		return board[i][1];
	//�ж�����ͬ
	int j = 0;
	for (j = 0; j < ROW; j++)
	if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		return board[1][j];
	//�ж϶Խ���Ԫ����ͬ
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//�ж��Ƿ�ƽ��
	if (1 == IsTie(board, ROW, COL))
		return 'Q';

}
	