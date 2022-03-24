#include <stdio.h>
#define Length 19
int main()
{
    char c;
    printf("ÇëÊäÈë\n");
    for (int i = 0; c!= '\n'; i++)
    {
        c = getchar();
        if (c >= 'a' && c <= 'z')
        {
            c = c + ('A' - 'a');
            printf("%c", c);
            continue;
        }
        if (c >= 'A' && c <= 'Z')
        {
            c == c - ('A' - 'a');
            printf("%c", c);
            continue;
        }
        printf("%c", c);
    }
    system("pause");
    return 0;
}
