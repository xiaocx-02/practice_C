#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0;j <= col;j++)
	{
		if (j)
		{
			printf("%d ", j);
		}
		else
		{
			printf("%c ", ' ');
		}
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = ESAY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = -1;i <= 1;i++)
	{
		for (j = -1;j <= 1;j++)
		{
			if (i == x && j == y)
			{
				continue;
			}
			count = count + mine[x+i][y+j] - '0';
		}
	}
	return count;
}
void FindMine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int num = row * col - ESAY_COUNT;

	while (num)
	{
		int count = 0;
		printf("请输入要排除的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0')
			{
				count = get_mine_count(mine, x, y) + '0';
				show[x][y] = count;
				DisplayBoard(show, row, col);
				num--;
			}
			else
			{
				printf("很遗憾，你踩到炸弹了，游戏结束\n");
				break;
			}
		}
		else
		{
			printf("坐标不合法，请重新输入\n");
		}				
	}
	if (num == 0)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}