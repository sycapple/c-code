#include <stdio.h>
int main()
{
    char input[50];
    char c;
    int i = 0;
    for (;; i++)
    {
        c = getchar();
        if (c == '\n')
            break;
        input[i] = c;
    }
    printf("Hi,there,");
    for (int j = 0; j < i; j++)
    {
        printf("%c", input[j]);
    }
    printf("!\n");

    return 0;
}