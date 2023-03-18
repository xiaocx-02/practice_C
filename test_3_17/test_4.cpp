//#define _CRT_SECURE_NO_WARNINGS 1
// 
////编写代码演示演示多个字符从两端向中间移动
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdefghiklmnopq";
//	int len = 0;
//	int ch = 0;//字符串移动个数
//	int cp = 0;
//	int mid = 0;
//	int n = 0;
//	len = sizeof(arr) / sizeof(arr[0]) - 1;//字符串的长度
//
//	
//	printf("请输入要移动的字符个数:>");
//	scanf("%d" , & ch);
//	mid = len / 2;
//
//	for (n = 0;n < (mid - ch);n++)
//	{
//		cp = arr[n + 2];
//		arr[n + 2] = arr[n + 1];
//		arr[n + 1] = cp;
//		cp = arr[n + 1];
//		arr[n + 1] = arr[n];
//		arr[n] = cp;
//
//		cp = arr[len - n - 1];
//		arr[len - n - 1] = arr[len - n - 2];
//		arr[len - n - 2] = cp;
//		cp = arr[len - n];
//		arr[len - n] = arr[len - n - 1];
//		arr[len - n - 1] = cp;
//		printf("%s\n", arr);
//	}
//
//	return 0;
//}