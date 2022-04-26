#include <stdio.h>
int main()
{
    char input[100];
    scanf("%s", &input);
    for (int i = 0; i < 100; i++)
    {
        int k = 0;
        if (input[i] == '\0')
            break;
        for (int j = 0; j < i; j++)
        {
            if (input[i] == input[j])
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
            printf("%c", input[i]);
    }
    printf("\n");
    return 0;
}
