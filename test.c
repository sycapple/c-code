#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	printf("%d\n", sizeof(int*));
//	return 0;
//}
//void spaw(int x, int y)
//{
//	x = x + y;
//	y = x - y;
//	x -= y;
//}
//int main()
//{
//	int a = 10;
//int b = 20;
//spaw(a, b);
//printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
//int cifang(int a, int b)
//{
//	int c = 1;
//	while (b > 0)
//	{
//		c *= a;
//		b--;
//
//	}
//	return c;
//}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	while (a <= 9)
	{
		b = 0;
		c = 0;
		while (b <= 9)
		{
			c =0;
			while (c <= 9)
			{
				d = a * 100 + b * 10 + c;
				if (cifang(a, 3) + cifang(b, 3) + cifang(c, 3) == d)
				{
					printf(("%d\n"), d);

				}
				c++;
			}
			b++;
	}
		a++;
	}
	return 0;
}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (a <= 5)
//	{
//		b = a * 5 +  a * 10 * 4 + a * 100 * 3 + a * 2000 + a * 10000;
//		printf("%d+%d%d+%d%d%d+%d%d%d%d+%d%d%d%d%d=%d\n", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, b);
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* b = &a;
//	*b = 20;
//	printf("%d\n", &a);
//	return 0;
//}