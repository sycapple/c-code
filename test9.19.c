#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了,下标是%d\n", mid);
//	else
//		printf("找不到\n");
//	return 0;
//}
#include <stdio.h>
int main()
{
    char input[10] = { 0 };
    printf("正在关机\n");
again:
    printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
    scanf("%s", input);
        if (0 == strcmp(input, "我是猪"))
        {
            printf("取消关机\n");
        }
        else
        {
            goto again;
        }
    return 0;
}