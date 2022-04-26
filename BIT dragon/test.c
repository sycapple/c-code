#include <stdio.h>
int main()
{
    int head, people;
    int D[20] = {0};
    int height[20] = {0};
    int sum = 0;
    int min = 0;
    scanf("%d%d", &head, &people);
    if (head > people)
    {
        printf("bit is doomed!\n");
        goto $;
    }
    for (int i = 0; i < head; i++)
        scanf("%d", &D[i]);
    for (int i = 0; i < people; i++)
        scanf("%d", &height[i]);
    for (int i = 0; i < head; i++)
    {
        for (int k = 0; k < people; k++)
            if (height[k] > height[min])
                min = k;
        if (D[i] > height[min])
        {
            printf("bit is doomed!\n");
            goto $;
        }
        for (int j = 0; j < people; j++)
            if (height[j] >= D[i] && height[j] < height[min])
                min = j;
        sum += height[min];
        height[min] = 0;
    }
    printf("%d\n", sum);
$:
    return 0;
}