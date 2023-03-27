#define _CRT_SECURE_NO_WARNINGS 1

//指针初用
//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}



//函数里不要有打印！！！！



#include<stdio.h>
#include<math.h>
#include<string.h>

int  menu()
{
	int m_option = 0;
	printf("########################################################\n");
	printf("#####       0、exit                             ########\n");
	printf("#####       1、判断一个数是否为素数             ########\n");
	printf("#####       2、判断一年是否为闰年               ########\n");
	printf("#####       3、实现一个整形有序数组的二分查找   ########\n");
	printf("#####       4、每次调用一次函数，就会num加一    ########\n");
	printf("########################################################\n");
	printf("请输入：>");
	scanf("%d", &m_option);
	return m_option;
}

int  is_prime(int a)
{
	int n = 0;
	int ret = 1;
	for (n = 2;n <= sqrt(a);n++)
	{
		if (0 == (a % n)) {
			ret = 0;
			break;
		}
	}
	return ret;
}

int  is_leap_year(int year)
{
	int ret = 0;
	if ((0 == year % 4 && year % 100 != 0) || 0 == year % 400) {
		ret = 1;
	}
	return ret;
}

int binsearch(int arr[], int sz, int num)
{
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	int ret = -1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (num < arr[mid])
		{
			right = mid - 1;
		}
		else if (num > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			break;
		}
	}
	if (left <= right) {
		ret = mid;	
	}
	return ret;
}

void count(int* p_num)
{
	*p_num+=1;
}
int main()
{
	int option = 0;
	int state = 1;
	char str[10] = { 0 };

	int a1 = 0;

	int a2 = 0;

	int a3 = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = -1;

	int num = 0;
	int* p_num = &num;
	
	while (state)
	{

		option = menu();
		switch (option)
		{
		case 0:
			state = 0;
			printf("退出！！！\n");
			break;
		case 1:
			printf("请输入一个整数:>");
			scanf("%d", &a1);
			if (is_prime(a1)) {
				printf("%d是素数\n", a1);
			}
			else {
				printf("%d不是素数\n",a1);
			}
			break;
		case 2:
			printf("请输入年份:>");
			scanf("%d", &a2);
			if (is_leap_year(a2)) {
				printf("%d是闰年\n", a2);
			}
			else {
				printf("%d不是闰年\n",a2);
			}
			break;
		case 3:
			printf("请输入要查找的数字:>");
			scanf("%d", &a3);
			ret = binsearch(arr, len, a3);
			if (ret >= 0) {
			printf("%d=arr[%d]\n", a3, ret);
			}
			else {
				printf("没有找到\n");
			}
			break;
		case 4:
			count(p_num);
			printf("num=%d\n", num);
			break;
		default:
			printf("输入错误，请重新输入\n");
			while (getchar() != '\n');
			break;
		}
	}

	return 0;
}