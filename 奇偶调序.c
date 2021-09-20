#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int a[20] = { 1,4,6,3,5,76,36,75,8,86,243,235,7567,868,324,46,456,0 };
int length = 20;
int i = 0;
int j = 0;
void ee()
{
	for (; i <= length; i++)
	{
		j = i;
		if (a[i] % 2 == 1 && a[i + 1] % 2 == 0)
		{
			a[i] = a[i + 1] + a[i];
			a[i + 1] = a[i] - a[i + 1];
			a[i] = a[i] - a[i + 1];
		}
		else if (a[i] % 2 == 1 && a[i + 1] % 2 == 1)
		{
			i += 1;
			ee();
		}
		else
		{
			continue;
		}
		i = j;
	}
}
int main()
{
	ee();
	for (int i=0; i <= length; i++)
	{
		printf("%d\n", a[i]);
	}


	return 0;
}