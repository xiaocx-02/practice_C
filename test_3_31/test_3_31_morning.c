#define _CRT_SECURE_NO_WARNINGS 1

//�ַ������򣨵ݹ�ʵ�֣�
//��дһ������reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ
//Ҫ�󣺲���1ʹ��C�������е��ַ�����������
//���磺 char arr[]="abcdef"���������ݱ�ɣ�"fedcba"
//�ǵݹ鷽��
//#include<stdio.h>
//
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//
//	return count;
//}
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	char tmp = 0;
//
//	while (left < right)
//	{
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//�ݹ�ķ���
//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	
//	return count;
//}
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2) {
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//���룺1729  �����19
//#include<stdio.h>
//int DigitSum(int n)
//{
//	int sum = 0;
//	if (n > 9) {
//		sum = DigitSum(n / 10);
//		sum = sum + n % 10;
//	}
//	else {
//		sum = n;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	printf("������һ���Ǹ���:>");
//	scanf("%d", &n);
//	printf("ÿλ֮��Ϊ%d\n", DigitSum(n));
//
//	return 0;
//}

//��Ŀ���ƣ��ݹ�ʵ��n��k�η�
//��Ŀ���ݣ���дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//#include<stdio.h>
//double expon(int n, int k)
//{
//	double consult = 1;
//	if (1 == k) {
//		consult = n;
//	}
//	else if (k > 1) {
//		consult = expon(n, k - 1) * n;
//	}
//	else if (k < 0) {
//		consult = 1.0 / expon(n, -k);
//	}
//
//	return consult;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double outcome = 0;
//	printf("������n��ֵ:>");
//	scanf("%d", &n);
//	printf("������k��ֵ:>");
//	scanf("%d", &k);
//	outcome = expon(n, k);
//	printf("outcome=%lf\n", outcome);
//
//	return 0;
//}


#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	double str[] = { 1,2,3,4,5,6 };
	int* p = arr;
	double* p1 = str;
	int i = 0;
	for (i = 0;i < 6;i++)
	{
		printf("%d ", *p);
		p++;
	}
	printf("\n");
	for (i = 0;i < 6;i++)
	{
		printf("%lf ", *p1);
		p1++;
	}
	printf("\n");

	return 0;
}