#include <stdio.h>
int main()
{
    for (int i = 0; i < 3; i++)
    {
        int type;
        float temper;
        scanf("%d%f", &type, &temper);
        switch (type)
        {
        case 1:
            printf("The Centigrade is %.2f\n", (temper - 32) / 1.8);
            break;
        case 2:
            printf("The Fahrenheit is %.2f\n", temper * 1.8 + 32);
            break;
        default:
            printf("Wrong input!\n");
            break;
        }
    }
    return 0;
}