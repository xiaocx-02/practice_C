#define _CRT_SECURE_NO_WARNINGS 1
//
////������С��Ϸ
////1�����Ի�����һ�������
////2��������
////
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("****  1��play   0��exit  ****\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	//1�����������
//	int ret = 0;
//	int guess = 0;
//
//	//ʱ���
//	//��ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0:0:0:) =��xxxxxx����
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("���һ������>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//
//	}
//	//printf("%d\n",ret);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int )time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	//shutdown -s -t 60
//	//system()--C������ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n�����>:");
//	scanf("%s", input);
//	if ( 0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("��ĵ��Խ���1���Ӻ�ػ���������룺��������ȡ���ػ�\n������;>");
//	scanf("%s", input);
//	while (1)
//	{
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}


//strcpy()

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}



//memset
//memory -�ڴ�
//set -����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello bit!";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//memset example
#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "almost every programmer should konw memset";
	memset(str, '@', 5);
	puts(str);

	return 0;
}