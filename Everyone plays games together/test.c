#include <stdio.h>
void Judge(int data[50], int n, int target, int count, int now);
void Judge(int data[50], int n, int target, int count, int now)
{
    if (count / 3 < n)
    {
        if (data[(now - 1) % n] != 1)
        {
            if (count % 3 == 0)
                data[(now - 1) % n] = 1, Judge(data, n, target, count + 1, now % n + 1);
            else
                Judge(data, n, target, count + 1, now % n + 1);
        }
        else
            Judge(data, n, target, count, now % n + 1);
    }
}
int main()
{
    int data[50] = {0};
    int n = 0;
    int target = 0;
    scanf("%d%d", &n, &target);
    Judge(data, n, target, 1, 1);
    for (int i = 0; i < n; i++)
        if (data[i] == 0)
            printf("The left child is NO %d.\n", i + 1);
    return 0;
}