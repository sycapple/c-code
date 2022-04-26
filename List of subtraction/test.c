#include <stdio.h>
int main()
{
    char input1[10];
    char input2[10];
    int carry = 0;
    for (int i = 0; i < 10; i++)
        input1[i] = '*',
        input2[i] = '*';
    scanf("%s%s", &input1, &input2);
    for (int i = 0; input1[i] >= '0' && input1[1] <= '9'; i++)
    {
        int k = 0;
        for (int j = 0; input2[j] >= '0' && input2[j] <= '9'; j++)
        {
            if (input2[j] == input1[i])
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
            printf("%c", input1[i]);
    }
    printf("\n");
    return 0;
}