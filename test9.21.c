#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int px(int *a[],int b,int i,int j)
//{
//	int m = 0;
//	while (i <= j)
//	{
//		m = (i + j) / 2;
//		if (*a[m]==b)
//		{
//			return b + 1;
//			break;
//		}
//		else if (*a[m]>b)
//		{
//			i = m;
//		}
//		else
//		{
//			j = m;
//		}
//	}
//	if (i > j)
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int output = bin_search(a[10], 0, 19, 9);
//	printf("%d\n", output);
//	return 0;
//}
//int bin_search(int arr[], int left, int right, int key) {
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) >> 1;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;//找到了，返回下标
//	}
//	return -1;//找不到
//}
//int abc(int a)
//{
//	int b = 1;
//	a = b >> 1;
//}
//int mian()
//{
//	int a = 0;
//	printf("%d", a | f);
//	return 0;
//}