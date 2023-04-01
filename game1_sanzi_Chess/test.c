#define _CRT_SECURE_NO_WARNINGS 1


#include"game.h"

void game()
{
	//存储数据 -- 二维数组
	char board[ROW][COL];
	char ret = 0;
	//初始化棋盘 --初始化空格
	InitBoard(board, ROW, COL);
	//打印一下棋盘 --本质是打印数组的内容
	DisplayBoard(board, ROW, COL);
	//玩家玩
	//电脑玩
	while (1)
	{
		//玩家下棋
		printf("玩家下\n");
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		//电脑下棋
		printf("电脑下\n");
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
		printf("玩家赢\n");
		break;
	case '#':
		printf("电脑赢\n");
		break;
	default:
		printf("平局\n");
		break;
	}
	DisplayBoard(board, ROW, COL);
}

void menu()
{
	printf("***********************\n");
	printf("*****   1、play   *****\n");
	printf("*****   0、exit   *****\n");
	printf("***********************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}