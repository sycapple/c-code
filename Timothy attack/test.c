#include <stdio.h>
int findPoisonedDuration(int *timeSeries, int timeSeriesSize, int duration)
{
    int continuration = 0;
    int j = 0;
    int sum = 0;
    for (int i = 1; i <= timeSeries[timeSeriesSize - 1] + duration; i++)
    {
        if (continuration)
        {
            continuration--;
            sum++;
        }
        if (timeSeries[j] == i)
        {
            j++;
            continuration = duration;
        }
    }
    return sum;
}
int main()
{
    int timeSeries[50];
    int length = 0;
    int duration = 0;
    printf("�����ж�ʱ��\n");
    scanf("%d", &duration);
    printf("�������\n");
    scanf("%d", &length);
    timeSeries[length] = '\0';
    printf("��������\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &timeSeries[i]);
    }
    for (int i = 0; i < length; i++)
    {
        int k = timeSeries[i];
        for (int j = 0; j < i; j++)
        {
            if (timeSeries[j] > k)
            {
                int m = i;
                for (; m > j; m--)
                {
                    timeSeries[m] = timeSeries[m - 1];
                }
                timeSeries[m] = k;
                break;
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", timeSeries[i]);
    }
    printf("-----------------------------------------------\n");
    printf("�������ְ�ϣ���ж�ʱ��Ϊ%d\n", findPoisonedDuration(timeSeries, length, duration));
    system("pause");
    return 0;
}