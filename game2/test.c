
#include "game.h"

void menu()
{
	
	printf("***********************\n");
	printf("******    1��play   ***\n");
	printf("******    0��exit   ***\n");
	printf("***********************\n");
	printf("��ӭ����ɨ����Ϸ��������:>");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//�Ų���
	FindMine(show, mine, ROW, COL);


}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);


	return 0;
}