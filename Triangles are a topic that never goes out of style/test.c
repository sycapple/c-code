#include <stdio.h>
struct DATA
{
    int x;
    int y;
};
int main()
{
    int T, N;
    struct DATA data[100];
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        int j = 0;
        for (; j < N; j++)
            scanf("%d%d", &data[j].x, &data[j].y);
        float max = 0.0;
        for (int m = 0; m < j; m++)
            for (int n = m + 1; n < j; n++)
                for (int k = n + 1; k < j; k++)
                {
                    int x1 = data[n].x - data[m].x;
                    int x2 = data[k].x - data[m].x;
                    int y1 = data[n].y - data[m].y;
                    int y2 = data[k].y - data[m].y;
                    max = (x1 * y2 - x2 * y1 > 0 ? x1 * y2 - x2 * y1 : -(x1 * y2 - x2 * y1)) > max ? (x1 * y2 - x2 * y1 > 0 ? x1 * y2 - x2 * y1 : -(x1 * y2 - x2 * y1)) : max;
                }
        printf("%.1f\n", max / 2);
    }
    return 0;
}
