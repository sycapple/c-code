#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF-�ļ�������־ctrl+Z
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
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������\n");
//	scanf("%s", password);
//	printf("��ȷ��(Y/N)\n");
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//		ret = getchar();
//		if (ret == 'Y')
//		{
//			printf("�ɹ�\n"); 
//
//		}
//		else
//		{
//			printf("ʧ��\n"); 
//		}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')//��ʾch��������0~9
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
	printf("�Ƿ�ʼִ��(Y/N)\n");
	if ((ch = getchar()) == 'Y')
	{
		for (int i = 0; i <= 10; i++)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}