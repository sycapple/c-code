#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int  n, money;
//int count[6] = { 0 };
//int count1[6] = { 100,50,20,10,5,1, };
//void cq()
//{
//	for (int j = 0; j <= 5; j++)
//	{
//		count[j] += money / count1[j];
//		money %= count1[j];
//	}
//}
//int main()
//{
//	int i;
//	int sum = 0;
//	int val = 0;
//	while (scanf("%d", &n) != EOF) {
//		for (i = 1; i <= n; i++) {
//			scanf("%d", &val);//���빤��
//			money = val;
//			sum += money;
//			cq();//���ô�Ǯ
//		}
//		printf("�ܺ�Ϊ%d\n", sum);
//		for (int j = 0; j <= 5; j++)
//		{
//			printf("��Ҫ%d��%d\n", count[j], count1[j]);
//		}
//	}
//	return 0;
//}
int a[100] = { 0 };
int main()
{
	int b = 0;
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b);
		a[b]++;
	}
	n = 1;
	for (int i = 1; i <= 100; i++)
	{
		if (a[i] != 0)
		{
			for (int j = 1; j <= a[i]; j++)
			{
				printf("��%d������Ϊ%d\n", n, i);
				n++;
			}
		}
	}
	return 0;
}