#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int a[20] = {1,1,2,2,3,3,4,4,5,5,6,6,7,8 };
//int main()
//{
//	int b[100] = { 0 };
//	int i = 0;
//	for (; i <= 20; i++)
//	{
//		b[a[i]]++;
//	}
//	i = 0;
//	for (; i <= 100; i++)
//	{
//		if (b[i] == 1)
//			printf("数字%d出现了一次\n", i);
//	}
//	return 0;
//}
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
//						p[data[a]-1] ++;
//						p[data[b]-1] ++;
//						p[data[c]-1] ++;
//						p[data[d]-1] ++;
//						p[data[e]-1] ++;
//						for (int i = 0;i <= 4; i++)
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
//                    }
//					
//				}
//
//			}
//		}
//	}
//	return 0;
//}
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int a[5] = {1,2,3,4,5};
//	/*scanf("%d", a[5]);*/
//	for (int i = 0; i <= 4; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//
//
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	return 0;
//}
//int main()
//{
//	char arr[3] = { "abc" };
//	char arr1[3] = { 'a','b','c'};
//	printf("%s\n", arr);
//	printf("%s\n", arr1);
//	return 0;
//}
int main()
{
	char b[] = "abc";
	char a[] = { 'a','b','c' ,0};
	printf("%s\n", b);
	printf("%s\n", a);
	return 0;
}