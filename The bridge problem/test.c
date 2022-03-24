#include <stdio.h>
int main()
{
    int num = 0;
    int time[10] = {0};
    int min[2] = {0};
    int big[2] = {0};
    int sum = 0;
    for (;;)
    {
        if (scanf("%d", &num) == EOF)
            break;
        else
        {
            for (int i = 0; i < num; i++)
            {
                scanf("%d", &time[i]);
            }
            for (int i = 0; i < num;i++)
            {
                if (time[i] < time[min[0]])
                    min[0] = i;
                else if (time[i] > time[min[0] && time[i] < time[min[1]]])
                    min[1] = i;
                if (time[i] > time[big[0]])
                    big[0] = i;
                else if (time[i] < time[big[0] && time[i] > time[big[1]]])
                    big[1] = i;
            }
        }
    }
    return 0;
}