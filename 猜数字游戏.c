#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int a = 88;
int b = 0;
int main()
{
	while (a != b)
	{
		scanf("%d", &b);
		if (a > b)
		{
			printf("̫С��\n");
		}
		else if (a < b)
		{
			printf("̫����\n");
		}
		else if (a = b)
		{
			printf("��ϲ������\n");
		}
	}
	return 0;

}