#define _CRT_SECURE_NO_WARNINGS 1
//用来测试三子棋这个游戏。
#include"game.h"
void game()
{
	int ret = 0;
	//需要一个棋盘来存放数据。
	char board[ROW][COL] = { 0 };
	//初始化棋盘里面的数据。
	InitBoard(board,ROW,COL);
	//建立一个棋盘。
	StructureBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		StructureBoard(board, ROW, COL);
		//判断一次输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		StructureBoard(board, ROW, COL);
		//判断一次输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家胜利\n");
	else if (ret == '#')
		printf("电脑胜利\n");
	else
		printf("平局\n");

}
void memu()
{
	printf("********************\n");
	printf("***1.play  0.exit***\n");
	printf("********************\n");
	printf("请选择:");
}

void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		memu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏已退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

}

int main()
{
	text();
	return 0;
}