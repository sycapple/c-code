#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int binary_search(int x, int v[], int n)
{
	int i = 0;
	for (;;i++)
	{
		if (i + 1 >= n)
		{
			return -1;
		}
		else if(v[i] == x)
		{
			break;
		}
	}
	i++;
	return i;
}
int main()
{
	for (;;)
	{
		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		int a = 0;
		int b = 0;
		int c = 0;
		printf("请输入需要查找的数字\n");
		scanf("%d", &a);
		if (a == -1)
		{
			printf("正在退出");
			break;
		}
		b = binary_search(a, arr, 10);
		if (b == -1)
			printf("没有找到\n");
		else
			printf("%d在第%d个位置\n", a, b);
	}
		return 0;
	
}