//#define _CRT_SECURE_NO_WARNINGS 1
//// 
//////��д������ʾ��ʾ����ַ����������м��ƶ�
////welcome to bit!!!!!!!!
//// Ч�����£�
////w####################!
////we##################!!
////wel################!!!
////����
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!!!";
//	char arr2[] = "#######################";
//	//int sz = sizeof(arr1) / sizeof(arr1[0])-1;
//	int sz = strlen(arr1) - 1;
//	int left = 0;
//	int right = sz ;
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);
//		system("cls");
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		
//	}
//
//
//	return 0;
//}
//
//
//
//
//
//
////#include<stdio.h>
////int main()
////{
////	char arr[] = "abcdefghiklmnopq";
////	int len = 0;
////	int ch = 0;//�ַ����ƶ�����
////	int cp = 0;
////	int mid = 0;
////	int n = 0;
////	len = sizeof(arr) / sizeof(arr[0]) - 1;//�ַ����ĳ���
////
////	
////	printf("������Ҫ�ƶ����ַ�����:>");
////	scanf("%d" , & ch);
////	mid = len / 2;
////
////	for (n = 0;n < (mid - ch);n++)
////	{
////		cp = arr[n + 2];
////		arr[n + 2] = arr[n + 1];
////		arr[n + 1] = cp;
////		cp = arr[n + 1];
////		arr[n + 1] = arr[n];
////		arr[n] = cp;
////
////		cp = arr[len - n - 1];
////		arr[len - n - 1] = arr[len - n - 2];
////		arr[len - n - 2] = cp;
////		cp = arr[len - n];
////		arr[len - n] = arr[len - n - 1];
////		arr[len - n - 1] = cp;
////		printf("%s\n", arr);
////	}
////
////	return 0;
////}