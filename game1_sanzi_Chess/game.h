//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
//符号的的定义
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家移动
void Playermove(char board[ROW][COL], int row, int col);
//电脑移动
void Computermove(char board[ROW][COL], int row, int col);
//判断游戏是否有输赢
//玩家赢 -- ‘*’
//电脑赢 -- ‘#’
//平局 -- ‘Q’
//继续 -- ‘C’
char IsWin(char board[ROW][COL],int row, int col);