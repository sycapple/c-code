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
//		printf("�ҵ���,�±���%d\n", mid);
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}
#include <stdio.h>
int main()
{
    char input[10] = { 0 };
    printf("���ڹػ�\n");
again:
    printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
    scanf("%s", input);
        if (0 == strcmp(input, "������"))
        {
            printf("ȡ���ػ�\n");
        }
        else
        {
            goto again;
        }
    return 0;
}