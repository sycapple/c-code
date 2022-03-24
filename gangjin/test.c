#include <stdio.h>
int main()
{
    do
    {
        float a = 0;
        int b = 0;
        float c = 0;
        float d = 0;
        float e = 0;
        int y = 0;
        printf("请输入\n");
        scanf("%f%d%f", &a, &b, &d);
        switch (b)
        {
        case 6:
            c = 0.22;
            break;
        case 8:
            c = 0.395;
            break;
        case 10:
            c = 0.617;
            break;
        case 12:
            c = 0.888;
            break;
        case 14:
            c = 1.21;
            break;
        case 16:
            c = 1.58;
            break;
        case 18:
            c = 1.98;
            break;
        case 20:
            c = 2.49;
            break;
        case 22:
            c = 3;
            break;
        case 25:
            c = 3.85;
            break;
        default:
            break;
        }
        e = a * c * d;
        y = (int)(e + 0.5) > (int)e ? (int)e + 1 : (int)e;
        printf("钢筋总重为%d\n", y);
    } while (1);
    return 0;
}
