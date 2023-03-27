#define _CRT_SECURE_NO_WARNINGS 1
//
////猜数字小游戏
////1、电脑会生成一个随机数
////2、猜数字
////
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("****  1、play   0、exit  ****\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	//1、生产随机数
//	int ret = 0;
//	int guess = 0;
//
//	//时间戳
//	//当前计算机的时间-计算机的起始时间（1970.1.1.0:0:0:) =（xxxxxx）秒
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("请猜一个数字>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("选择错误\n");
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
//	//system()--C语言中执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输出>:");
//	scanf("%s", input);
//	if ( 0 == strcmp(input, "我是猪"))
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
//	printf("你的电脑将在1分钟后关机，如果输入：我是猪，就取消关机\n请输入;>");
//	scanf("%s", input);
//	while (1)
//	{
//		if (0 == strcmp(input, "我是猪"))
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
//memory -内存
//set -设置
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