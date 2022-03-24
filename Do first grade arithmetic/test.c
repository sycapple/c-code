#include <stdio.h>
#define LENGTH 10
int min(int input[LENGTH], int length);
int max(int input[LENGTH], int length);
int main()
{
    int input[LENGTH] = {0};
    char op[2];
    int i = 0;
    int j = 0;
    for (;; i++)
    {
        scanf("%c", &op[j]);
        if (op[j] == ',')
        {
            i--;
            continue;
        }
        else if ('0' <= op[j] && op[j] <= '9')
        {
            input[i] = (int)op[j] - 48;
        }
        else
        {
            j++;
            i--;
        }
        if (j == 2)
            break;
    }
    i++;
    if (min(input, i) == 0 && (op[0] == '/' || op[0] == '0'))
        printf("Error!\n");
    else
    {
        switch ((int)op[0])
        {
        case 43:
            printf("%d%c%d%c%d\n", max(input, i), op[0], min(input, i), op[1], max(input, i) + min(input, i));
            break;
        case 45:
            printf("%d%c%d%c%d\n", max(input, i), op[0], min(input, i), op[1], max(input, i) - min(input, i));
            break;
        case 42:
            printf("%d%c%d%c%d\n", max(input, i), op[0], min(input, i), op[1], max(input, i) * min(input, i));
            break;
        case 47:
            printf("%d%c%d%c%d\n", max(input, i), op[0], min(input, i), op[1], max(input, i) / min(input, i));
            break;
        case 37:
            printf("%d%c%d%c%d\n", max(input, i), op[0], min(input, i), op[1], max(input, i) % min(input, i));
            break;

        default:
            break;
        }
    }
    return 0;
}
int min(int input[LENGTH], int length)
{
    int min = 0;
    for (int i = 0; i < length; i++)
    {
        if (input[i] < input[min])
            min = i;
    }
    return input[min];
}
int max(int input[LENGTH], int length)
{
    int max = 0;
    for (int i = 0; i < length; i++)
    {
        if (input[i] > input[max])
            max = i;
    }
    return input[max];
}