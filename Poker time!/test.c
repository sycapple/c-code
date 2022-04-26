#include <stdio.h>
#include <stdlib.h>
#define NUM 6
char Deformation(char c);
char Translation(char c);
void Input(char arr1[NUM], char arr2[NUM]);
void Rank(char arr[NUM]);
void compare(char arr1[NUM], char arr2[NUM]);
void Check(char arr1[NUM], char arr2[NUM], int i);
void Print(char arr[NUM]);
void Check(char arr1[NUM], char arr2[NUM], int i)
{
    if (i < 6)
    {
        for (int j = 0; j < i % 6 - 2; j += 2)
            if (arr1[j] == arr1[i - 2])
                if (arr1[j + 1] == arr1[i - 1])
                {
                    printf("Input Error!\n");
                    exit(0);
                }
    }
    else
    {
        for (int j = 0; j < i % 6 - 2; j += 2)
            if (arr2[j] == arr2[i % 6 - 2])
                if (arr1[j + 1] == arr1[i % 6 - 1])
                {
                    printf("Input Error!\n");
                    exit(0);
                }
    }
}
char Translation(char c)
{
    switch (c)
    {
    case 'e':
        return 'H';
    case 'd':
        return 'S';
    case 'c':
        return 'D';
    case 'b':
        return 'C';
    case 'f':
        return 'J';
    case 'g':
        return 'Q';
    case 'h':
        return 'K';
    case 'i':
        return 'A';
    default:
        break;
    }
}
void Print(char arr[NUM])
{
    int k = 0;
    int m = 0;
    for (int i = 0; i < 6; i++)
    {
        if (m == 2)
        {
            printf(" ");
            m = 0;
        }
        if (arr[i] == 'a')
        {
            printf("10");
            m++;
            continue;
        }
        else if (arr[i] > '9')
            arr[i] = Translation(arr[i]);
        printf("%c", arr[i]);
        m++;
    }
    printf("\n");
}
char Deformation(char c)
{
    switch (c)
    {
    case 'H':
        return 'e';
    case 'S':
        return 'd';
    case 'D':
        return 'c';
    case 'C':
        return 'b';
    case 'J':
        return 'f';
    case 'Q':
        return 'g';
    case 'K':
        return 'h';
    case 'A':
        return 'i';
    default:
        return 'X';
        break;
    }
}
void Input(char arr1[NUM], char arr2[NUM])
{
    int count = 0;
    int k = 0;
    char c;
    for (int i = 0; k < 2; i++)
    {
        c = getchar();
        if (c == '0')
        {
            i--;
            continue;
        }
        if (c == '\n')
            Check(arr1, arr2, i), k++, i--, count = 0;
        else if (c == ' ')
        {
            if (count > 0)
                Check(arr1, arr2, i);
            i--;
            count++;
            continue;
        }
        else
        {
            if (k == 0)
            {
                if (c == '1')
                    c = 'a';
                else if (c > '9')
                {
                    c = Deformation(c);
                    if (c == 'X')
                    {
                        printf("Input Error!\n");
                        exit(0);
                    }
                }
                arr1[i % 6] = c;
            }
            else
            {
                if (c == '1')
                    c = 'a';
                else if (c > '9')
                {
                    c = Deformation(c);
                    if (c == 'X')
                    {
                        printf("Input Error!\n");
                        exit(0);
                    }
                }
                arr2[i % 6] = c;
            }
        }
    }
}
void Rank(char arr[NUM])
{
    for (int i = 0; i < NUM; i += 2)
    {
        char max = i;
        char change = '*';
        for (int j = i + 2; j < NUM; j += 2)
        {
            if ((arr[j] > arr[max]) || (arr[j] == arr[max] && arr[j + 1] > arr[max + 1]))
                max = j;
        }
        change = arr[max];
        arr[max] = arr[i];
        arr[i] = change;
        change = arr[max + 1];
        arr[max + 1] = arr[i + 1];
        arr[i + 1] = change;
    }
}
void compare(char arr1[NUM], char arr2[NUM])
{
    int i = 0;
    for (; i < 6; i++)
    {
        if (arr1[i] > arr2[i])
        {
            printf("Winner is A!\n");
            break;
        }
        else if (arr1[i] < arr2[i])
        {
            printf("Winner is B!\n");
            break;
        }
    }
    if (i == 6)
        printf("Winner is X!\n");
}
int main()
{
    char arr1[NUM], arr2[NUM];
    Input(arr1, arr2);
    Rank(arr1);
    Rank(arr2);
    compare(arr1, arr2);
    printf("A: ");
    Print(arr1);
    printf("B: ");
    Print(arr2);
    return 0;
}
