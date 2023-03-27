#define _CRT_SECURE_NO_WARNINGS 1

//ָ�����
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



//�����ﲻҪ�д�ӡ��������



#include<stdio.h>
#include<math.h>
#include<string.h>

int  menu()
{
	int m_option = 0;
	printf("########################################################\n");
	printf("#####       0��exit                             ########\n");
	printf("#####       1���ж�һ�����Ƿ�Ϊ����             ########\n");
	printf("#####       2���ж�һ���Ƿ�Ϊ����               ########\n");
	printf("#####       3��ʵ��һ��������������Ķ��ֲ���   ########\n");
	printf("#####       4��ÿ�ε���һ�κ������ͻ�num��һ    ########\n");
	printf("########################################################\n");
	printf("�����룺>");
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
			printf("�˳�������\n");
			break;
		case 1:
			printf("������һ������:>");
			scanf("%d", &a1);
			if (is_prime(a1)) {
				printf("%d������\n", a1);
			}
			else {
				printf("%d��������\n",a1);
			}
			break;
		case 2:
			printf("���������:>");
			scanf("%d", &a2);
			if (is_leap_year(a2)) {
				printf("%d������\n", a2);
			}
			else {
				printf("%d��������\n",a2);
			}
			break;
		case 3:
			printf("������Ҫ���ҵ�����:>");
			scanf("%d", &a3);
			ret = binsearch(arr, len, a3);
			if (ret >= 0) {
			printf("%d=arr[%d]\n", a3, ret);
			}
			else {
				printf("û���ҵ�\n");
			}
			break;
		case 4:
			count(p_num);
			printf("num=%d\n", num);
			break;
		default:
			printf("�����������������\n");
			while (getchar() != '\n');
			break;
		}
	}

	return 0;
}