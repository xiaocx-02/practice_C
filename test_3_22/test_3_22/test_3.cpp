//#define _CRT_SECURE_NO_WARNINGS 1
////
//////在一个有序数组中查找具体的某个数字n，编写binsearch(int x,int v[], int n)
//////功能：在v [0] <= v[1] <= v[2] <= ...... <= v[n]的数组查找x]
//// 
//// 二分查找法   复杂度：log2N
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = len - 1;
//	printf("请输入要查找的数据:>");
//	scanf("%d", &k);
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else{
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("找不到\n");
//	}
//	
//	return 0;
//}
////#include<stdio.h>
////int binsearch(int x, int v[], int n)
////{
////	int i = 0;
////	int num = -1;
////	for (i = 0;i < n; i++)
////	{
////		if (x == v[i])
////		{
////			num = i;
////			break;
////		}
////	}
////	return num;
////}
////int main()
////{
////	int v[] = { 1,2,3,4,5,6,7,8,9,10,11 };
////	int n = sizeof(v) / sizeof(v[0]);
////	int ret = -1;
////	int x = 0;
////	printf("请输入要查找的数：>");
////	scanf("%d", &x);
////	ret = binsearch(x, v, n);
////	if (-1 == ret)
////	{
////		printf("没有要查找的数\n");
////	}
////	else
////	{
////		printf("查找成功\n");
////		printf("v[%d] = %d\n", ret, x);
////	}
////
////	return 0;
////}