#define _CRT_SECURE_NO_WARNINGS 1
//�������������������Ϸ��
#include"game.h"
void game()
{
	int ret = 0;
	//��Ҫһ��������������ݡ�
	char board[ROW][COL] = { 0 };
	//��ʼ��������������ݡ�
	InitBoard(board,ROW,COL);
	//����һ�����̡�
	StructureBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		StructureBoard(board, ROW, COL);
		//�ж�һ����Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		StructureBoard(board, ROW, COL);
		//�ж�һ����Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���ʤ��\n");
	else if (ret == '#')
		printf("����ʤ��\n");
	else
		printf("ƽ��\n");

}
void memu()
{
	printf("********************\n");
	printf("***1.play  0.exit***\n");
	printf("********************\n");
	printf("��ѡ��:");
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
			printf("��������Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("��Ϸ���˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);

}

int main()
{
	text();
	return 0;
}