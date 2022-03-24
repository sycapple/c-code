#include <stdio.h>
int main()
{   
    do{ 
    float a = 0;
    int b = 0;
    float c = 0;
    int d = 0;
    int e = 0;
    float f = 0;
    int y = 0;
    float x = 0;
    printf("请输入\n长度 直径 根数 弯折数量 弯折长度\n");
    scanf("%f%d%d%d%f", &a, &b, &d, &e, &f);
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
    x = (a + e * f / 100) * c * d;
    y = (int)(x + 0.5) > (int)x ? (int)x + 1 : (int)x;
    printf("钢筋总重为%d\n", y);
    } while (1);
    return 0;
}