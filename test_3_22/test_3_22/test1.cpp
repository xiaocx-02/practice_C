#define _CRT_SECURE_NO_WARNINGS 1

////���������������������������Լ��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//
//	scanf("%d%d", &a, &b);
//	printf("%d��%d�����Լ����", a, b);
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
////��ӡ1000�굽2000��֮�����е�����
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
//		//�ж�year�Ƿ�Ϊ����
//		//1���ܱ�4�������ǲ��ܱ�100����
//		//2���ܱ�400����
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




//��ӡ100~200֮�������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i <= 200;i++) {
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵ�һ������
//		//1���Գ���
//		//13 2-12
//		//����2-��i-1��
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

//�Ż�����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
// �Ż����룺
//		1������������ż����ֻ������������Ϊż����������������ô��
//		   for(i = 101;i <= 200;i+=2)
//		2��ѭ��������Ϊ j < i/2
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
//////		while (ret) {?????������������
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