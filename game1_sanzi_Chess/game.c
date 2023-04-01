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

//玩家移动
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入移动坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1] == ' ') {
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("位置已经被占,请重新输入\n");
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}

//电脑移动
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

//检查是否满了
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

//判断是否有输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	//检查每行
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//检查每列
	for (j = 0;j < col ; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	//检查对角线
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