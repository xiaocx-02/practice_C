#define _CRT_SECURE_NO_WARNINGS 1


#include"game.h"

void game()
{
	//�洢���� -- ��ά����
	char board[ROW][COL];
	char ret = 0;
	//��ʼ������ --��ʼ���ո�
	InitBoard(board, ROW, COL);
	//��ӡһ������ --�����Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);
	//�����
	//������
	while (1)
	{
		//�������
		printf("�����\n");
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		//��������
		printf("������\n");
		Sleep(2000);
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	switch (ret)
	{
	case '*':
		printf("���Ӯ\n");
		break;
	case '#':
		printf("����Ӯ\n");
		break;
	default:
		printf("ƽ��\n");
		break;
	}
	DisplayBoard(board, ROW, COL);
}

void menu()
{
	printf("***********************\n");
	printf("*****   1��play   *****\n");
	printf("*****   0��exit   *****\n");
	printf("***********************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}