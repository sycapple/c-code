#include <stdio.h>
#include <stdlib.h>
void reverse();
void reverse(char str[100], int a, int b)
{
    if (a + 1 > strlen(str))
        reverse(str, a - 1, b - 1);
    else if (b + 1 > strlen(str))
        reverse(str, a, b - 1);
    else if (a < b)
    {
        str[b] = str[a] + str[b];
        str[a] = str[b] - str[a];
        str[b] = str[b] - str[a];
        reverse(str, a + 1, b - 1);
    }
}
int main()
{
    char str[100];
    int start, end;
    gets(str);
    scanf("%d%d", &start, &end);
    reverse(str, start, end);
    printf("%s\n", str);
    return 0;
}