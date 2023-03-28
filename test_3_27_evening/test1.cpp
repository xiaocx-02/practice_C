#define _CRT_SECURE_NO_WARNINGS 1

//////函数递归初用
//////#include<stdio.h>
//////#include<math.h>
//////
////////好呆呀！！！！！
//////void print(unsigned int num)
//////{
//////	unsigned int var = num;
//////	unsigned int mid = 0;
//////	int n = 0;
//////	while (var)
//////	{
//////		var /= 10;
//////		n++;
//////	}
//////	mid = (unsigned int)pow(10, n-1);
//////	var = num / mid;
//////	if (0 != n)
//////	{
//////		printf("%d ", var);
//////		num = num % mid;
//////		print(num);
//////	}
//////}
//////int main()
//////{
//////	unsigned int num = 0;
//////	printf("请输入一个数字:>");
//////	scanf("%d", &num);
//////	print(num);
//////
//////	return 0;
//////}
////
////#include<stdio.h>
////
////void print(int num)
////{
////	if (num > 9)
////	{
////		print(num / 10);
////	}
////	printf("%d ", num % 10);
////}
////int main()
////{
////	unsigned int num = 0;
////	scanf("%d" , &num);
////	//递归
////	print(num);
////	//print(1234)
////	//print(123) 4
////	//print(12) 3 4
////	//print(1) 2 3 4
////	
////	return 0;
////}
//
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
//	return count;
//}
//int main()
//{
//	char arr[] = "bit hello";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//#include<stdio.h>

//int count = 0;
//
//void my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		count++;
//		arr++;
//		my_strlen(arr);
//	}
//}
//递归的方法
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//要求不创建临时变量，求字符串长度
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "bit hello hhh";
//	int count = my_strlen(arr);
//	printf("count=%d\n", count);
//
//	return 0;
//}
 
//递归 与 迭代(循环)
//求n的阶乘
//#include<stdio.h>
//int factorial(int n)
//{
//	if (n > 1)
//	{
//		return n * factorial(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int outcome = 0;
//	scanf("%d", &n);
//	outcome = factorial(n);
//	printf("outcome=%d\n", outcome);
//
//	return 0;
//}

//求斐波那契数
//递归可以求解，但是效率太低!!!!
//int Fibonacci(int n)
//{
//	if (0 == n) {
//		return 1;
//	}
//	else if (1 == n) {
//		return 1;
//	}
//	else {
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
//输入50，很难算出来
//效率太低  -  大量重复的计算


//用迭代(循环)的方式求斐波那契数
//unsigned long Fibonacci(int n)
//{
//	int i = 0;
//	unsigned long f1 = 1;
//	unsigned long f2 = 1;
//	unsigned long sum = 0;
//	if (n <= 2) {
//		sum = 1;
//	}
//	else {
//		for (i = 2;i <= n;i++) {
//			sum = f1 + f2;
//			f1 = f2;
//			f2 = sum;
//		}
//	}
//	return sum;
//}
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("Fib(%d)=%lud", n, Fibonacci(n));
//	return 0;
//
//}


//汉诺塔问题   --  递归
//#include<stdio.h>
//#include<windows.h>
//void move(char c1, char c2)
//{
//	printf("%c -> %c\n", c1, c2);
//	Sleep(3000);
//}
//void Tower_of_Hanoi(int n,char x,char y,char z)
//{
//	if (n == 1) {
//		move(x, z);
//	}
//	else {
//		Tower_of_Hanoi(n - 1, x, z, y);
//		move(x, z);
//		Tower_of_Hanoi(n - 1, y, x, z);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Tower_of_Hanoi(n, 'A', 'B', 'C');
//	return 0;
//
//}

//青蛙跳台阶问题
#include<stdio.h>

int Frog_jumping(int step)
{

}

int main()
{
	int step = 0;
	int count = 0;
	scanf("%d", &step);
	count = Frog_jumping(step);
	printf("count=%d\n", count);

	return 0;
}