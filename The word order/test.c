#include <stdio.h>
int main()
{
    char input[5][10] = {0};
    scanf("%s%s%s%s%s", &input[0], &input[1], &input[2], &input[3], &input[4]);
    for (int i = 0; i < 5; i++)
    {
        int max = 0;
        for (int j = 0; j < 5; j++)
        {
            if (input[j][0] > input[max][0])
                max = j;
        }
        printf("%s\n", input[max]);
        input[max][0] = '!';
    }
    return 0;
}