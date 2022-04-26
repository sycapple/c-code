#include <stdio.h>
void Print(int data[20], int n, int m);
void Print(int data[20], int n, int m)
{
    if (m < n)
    {
        printf("%d ", data[n] * data[m]);
        Print(data, n - 1, m + 1);
    }
    else if (m == n)
        printf("%d ", data[n]);
}
int main()
{
    int n = 0;
    int data[20];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &data[i]);
    Print(data, n - 1, 0);
    printf("\n");
    return 0;
}