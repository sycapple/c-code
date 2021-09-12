#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF-文件结束标志ctrl+Z
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	a = getchar();
//	if ('A' == a)
//	{
//		printf("可以\n");
//	}
//	else
//	{
//		printf("不可以\n");
//	}
//	return 0;
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码\n");
//	scanf("%s", password);
//	printf("请确认(Y/N)\n");
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//		ret = getchar();
//		if (ret == 'Y')
//		{
//			printf("成功\n"); 
//
//		}
//		else
//		{
//			printf("失败\n"); 
//		}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')//表示ch不是数字0~9
//		{
//			continue;
//		}
//			putchar(ch);
//		
//	}
//	return 0;
//}
int main()
{
	int ch = 0;
	printf("是否开始执行(Y/N)\n");
	if ((ch = getchar()) == 'Y')
	{
		for (int i = 0; i <= 10; i++)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}