#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int data[20] = { 1,3,2,2,2,2,5,4,3,1,4,2,3,5,4,3,1,1,5,4 };
//int mc[5] = { 0 };
//int main()
//{
//	int p[5] = { 0 };
//	int a, b, c, d, e;
//	int judge = 0;
//	for (a = 1; a <= 4; a += 2)
//	{
//		for (b = 5; b <= 8; b += 2)
//		{
//			for (c = 9; c <= 12; c += 2)
//			{
//				for (d = 13; d <= 16; d += 2)
//				{
//					for (e = 17; e <= 20; e += 2)
//					{
//						p[data[a] - 1] ++;
//						p[data[b] - 1] ++;
//						p[data[c] - 1] ++;
//						p[data[d] - 1] ++;
//						p[data[e] - 1] ++;
//						for (int i = 0; i <= 4; i++)
//						{
//							if (p[i] != 1)
//								judge++;
//						}
//						if (judge == 0)
//							printf("五个人的名次为%d%d%d%d%d\n", data[a + 1], data[b + 1], data[c + 1], data[d + 1], data[e + 1]);
//						judge = 0;
//						for (int i = 0; i <= 4; i++)
//						{
//							p[i] = 0;
//						}
//					}
//
//				}
//
//			}
//		}
//	}
//	return 0;
//}
//int a = 2; int b = 1;
//void change()
//{
//	a = b + a;
//	b = a - b;
//	a = a - b;
//}
//int main()
//{
//	change();
//	printf("%d\n%d", a, b);
//	return 0;
//}
