#include <stdio.h>
int main()
{
    int chushi = 3;
    int yinshu = 2;
    int panduan = 0;
    int yu = 0;
    scanf("%d", &chushi);
    while (chushi > 0)
    {
        while (yinshu < chushi)
        {
            yu = chushi % yinshu;
            {
                if (yu == 0)
                    panduan++;
            }
            yinshu++;
        }
        if (panduan == 0)
            break;
        chushi--;
        yinshu = 2;
        panduan = 0;
    }
    printf("The max prime number is %d.\n", chushi);
    return 0;
}