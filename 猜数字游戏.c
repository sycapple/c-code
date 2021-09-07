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
			printf("太小了\n");
		}
		else if (a < b)
		{
			printf("太大了\n");
		}
		else if (a = b)
		{
			printf("恭喜你答对啦\n");
		}
	}
	return 0;

}