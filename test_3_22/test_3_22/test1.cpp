#define _CRT_SECURE_NO_WARNINGS 1

////给定两个数，求这两个数的最大公约数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//
//	scanf("%d%d", &a, &b);
//	printf("%d和%d的最大公约数是", a, b);
//	while (r = a % b) {
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//
//	return 0;
//}
// 
// 
//#include<stdio.h>
////打印1000年到2000年之间所有的润年
//int main()
//{
//	int left = 1000;
//	int right = 2000;
//	int i = 0;
//	for (i = left;i <= right;i++) {
//		if (0 == (i % 4)) {
//			if (i % 100) {
//				printf("%d ",i);
//			}
//		}
//		else {
//			if (0 == (i % 400)) {
//				printf("%d ",i);
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int year = 0;
//	for (year = 1000;year <= 2000;year++) {
//		//判断year是否为闰年
//		//1、能被4整除但是不能被100整除
//		//2、能被400整除
//		if (0 == year % 4 && 0 != year % 100) {
//			printf("%d ", year);
//			num++;
//		}
//		else {
//			if (0 == year % 400) {
//				printf("%d ", year);
//				num++;
//			}
//		}
//	}
//	printf("\n");
//	printf("count=%d\n", num);
//	return 0;
//}




//打印100~200之间的素数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i <= 200;i++) {
//		//判断i是否为素数
//		//素数判断的一个规则
//		//1、试除法
//		//13 2-12
//		//产生2-（i-1）
//		int j = 0;
//		for (j = 2;j < i;j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (i == j) {
//			printf("%d ", i);
//			count++;
//		}	
//	}
//	printf("\n");
//	printf("count=%d\n", count);
//	return 0;
//}

//优化代码
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
// 优化代码：
//		1、还可以跳过偶数，只计算奇数，因为偶数不可能是素数那么：
//		   for(i = 101;i <= 200;i+=2)
//		2、循环条件改为 j < i/2
// 
//	for (i = 100;i <= 200;i++) {
//		int j = 0;
//		for (j = 2;j < sqrt(i);j++) {    
//			if (0 == i % j) {
//				break;
//			}
//		}
//		if (j>sqrt(i) ){
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("count=%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int left = 100;
//	int right = 200;
//	int i = 0;
//	for (i = left;i <= right;i++) {
//		int ret = 1;
//////		while (ret) {?????素数出不来了
//			int n = 0;
//			for (n = 2;n < i;n++) {
//				if (0 == (i % n)) {
//					ret = 0;
//					break;
//				}
//			}	
//		}
//		if (ret) {
//			printf("%d ",i);
//		}	
//	}
//	printf("\n");
//	return 0;
//}