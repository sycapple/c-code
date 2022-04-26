#include <stdio.h>
int main()
{
    int grade[10] = {0};
    int max = 0;
    int min = 0;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &grade[i]);
        if (grade[i] > grade[max])
            max = i;
        if (grade[i] < grade[min])
            min = i;
    }
    printf("Canceled Max Score:%d\n", grade[max]);
    printf("Canceled Min Score:%d\n", grade[min]);
    for (int i = 0; i < 10; i++)
    {
        if (i == max || i == min)
            continue;
        sum += grade[i];
    }
    printf("Average Score:%d\n", sum / 8);
    return 0;
}
