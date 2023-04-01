#define _CRT_SECURE_NO_WARNINGS 1
//冒泡排序实现一维数组排序 
//#include<stdio.h>
//
//void bubble_sort(int arr[], int num)
//{
//	int n1 = 0;
//	int n2 = 0;
//	int tmp = 0;
//	while (n1 < num)
//	{
//		n2 = 0;
//		while (n2 < num-n1)
//		{
//			tmp = arr[n2];
//			if (arr[n2] > arr[n2 + 1])
//			{
//				arr[n2] = arr[n2 + 1];
//				arr[n2 + 1] = tmp;
//			}
//			n2++;
//		}
//		n1++;
//	}
//	
//}
//int main()
//{
//	int arr[10] = { 12,23,11,3,4,5,6,1,4 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr, len-1);
//	printf("排序后:>");
//	for (i = 0;i < len;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//
//	return 0;
//}

//#include<stdio.h>
//
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	//确定冒泡排序的次数 ：sz-1
//	for (i = 0;i < sz - 1;i++)
//	{
//		//确定排序次数 ：sz-1-i
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			int tmp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j+1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	//计算数组元素的个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//
//	return 0;
//}