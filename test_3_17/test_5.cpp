//#define _CRT_SECURE_NO_WARNINGS 1
////编写代码实现模拟用户登录，并且只能登录三次（只允许输入三次密码，如果密码正确，则提示“登录成功”
////如果三次均输入错误，则退出程序
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int ret = 0;
//	int i = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	char set_password[20] = "wonder0120";
//	printf("请输入密码:>");
//	for (i = 0;i < 3;i++)
//	{
//		scanf("%s", password);
//		while ((ch = getchar()) != '\n' );//清除输入缓冲区
//		ret = strcmp(password, set_password);
//		if (0 == ret)
//		{
//			break;
//		}
//	}
//	if (3 == i)
//	{
//		printf("登录失败\n");
//	}
//	else
//	{
//		printf("登录成功\n欢迎进入系统\n");
//	}
//
//
//
//	
//
//
//	return 0;
//}
