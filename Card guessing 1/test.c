#include <stdio.h>
int judge(int *arr[50]);
int main()
{
    int arr[50] = {1};
    int count[50] = {0};
    int input = 0;
    scanf("%d", &input);
    int i = 1;
    for (int j = 1;;)
    {
        int num = 1;
        if (arr[j] == 0)
            continue;
        if (num == i)
        {
            arr[j] = 0;
            count[num - 1] = j;
            num++;
            i = 0;
        }
        if (judge(&arr, input) != 1)
            break;
        i++;
        j++;
    }
    for (int j = 0; j < input; j++)
        printf("%d ", count[j]);
    printf("\n");
    return 0;
}
int judge(int *arr[50], int input)
{
    for (int i = 0; i < input; i++)
    {
        if (*arr[i] == 1)
            return 1;
    }
    return 0;
}
