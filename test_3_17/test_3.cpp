//#define _CRT_SECURE_NO_WARNINGS 1
////
//////��һ�����������в��Ҿ����ĳ������n����дbinsearch(int x,int v[], int n)
//////���ܣ���v [0] <= v[1] <= v[2] <= ...... <= v[n]���������x]
//// 
//// ���ֲ��ҷ�   ���Ӷȣ�log2N
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = len - 1;
//	printf("������Ҫ���ҵ�����:>");
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
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ���\n");
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
////	printf("������Ҫ���ҵ�����>");
////	scanf("%d", &x);
////	ret = binsearch(x, v, n);
////	if (-1 == ret)
////	{
////		printf("û��Ҫ���ҵ���\n");
////	}
////	else
////	{
////		printf("���ҳɹ�\n");
////		printf("v[%d] = %d\n", ret, x);
////	}
////
////	return 0;
////}