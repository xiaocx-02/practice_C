#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)
	{
		int j = 0;
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0;j < col;j++)
			{
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}

	}
}

//����ƶ�
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�������ƶ�����:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1] == ' ') {
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("λ���Ѿ���ռ,����������\n");
			}
		}
		else
		{
			printf("�����������������\n");
		}
	}
}

//�����ƶ�
void Computermove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	while (1)
	{
		i = rand() % ROW;
		j = rand() % COL;
		if (board[i][j] == ' ') {
			board[i][j] = '#';
			break;
		}
	}
}

//����Ƿ�����
int IsFull(char board[ROW][COL], int row, int col)
{
	int ret = 0;
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			if (board[i][j] == ' ')
			{
				ret = 1;
				goto end;
			}
		}
	}
end:
	return ret;
}

//�ж��Ƿ�����Ӯ
char IsWin(char board[ROW][COL], int row, int col)
{
	//���ÿ��
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//���ÿ��
	for (j = 0;j < col ; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	//���Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	if (IsFull(board, row, col) == 0)
	{
		return 'Q';
	}
	return 'C';
}