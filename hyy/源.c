#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    float a, b, d;
    char c;
    scanf("%f%c%f", &a, &c, &b);
    if (c != '+' && c != '-' && c != '*' && c != '/')
    {
        printf("符号错误\n");
    }
    else
    {
        if (c == '/' && b == 0)
            printf("除以0\n");
        switch (c)
        {
        case '+':
            printf("%.2f+%.2f=%.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f-%.2f=%.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f*%.2f=%.2f\n", a, b, a * b);
            break;
        case '/':
            printf("%.2f/%.2f=%.2f\n", a, b, a / b);
            break;
        default:
            break;
        }
    }
    return 0;
}
