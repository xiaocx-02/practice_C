//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
//���ŵĵĶ���
#define ROW 3
#define COL 3

//����������

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//����ƶ�
void Playermove(char board[ROW][COL], int row, int col);
//�����ƶ�
void Computermove(char board[ROW][COL], int row, int col);
//�ж���Ϸ�Ƿ�����Ӯ
//���Ӯ -- ��*��
//����Ӯ -- ��#��
//ƽ�� -- ��Q��
//���� -- ��C��
char IsWin(char board[ROW][COL],int row, int col);