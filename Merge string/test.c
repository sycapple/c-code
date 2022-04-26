#include <stdio.h>
int main()
{
    int count[36] = {0};
    int k = 0;
    int n = 0;
    char input1[20];
$:
    for (int i = 0; i < 20; i++)
        input1[i] = '*';
    scanf("%s", input1);
    for (int i = 0; i < 20; i++)
    {
        if (input1[i] == '*')
            break;
        if (input1[i] >= 'a')
            count[input1[i] - 97]++, k = 1;
        else
            count[input1[i] - 49]++;
    }
    n++;
    if (n == 1)
        goto $;
    for (int i = 0; i < 36; i++)
    {
        if (k == 0)
        {
            if (count[i] != 0)
            {
                printf("%d", i + 1);
                count[i]--;
                i--;
            }
        }
        else
        {
            if (count[i] != 0)
            {
                printf("%c", (char)(i + 97));
                count[i]--;
                i--;
            }
        }
    }
    printf("\n");
    return 0;
}