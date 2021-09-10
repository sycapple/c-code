#define _CRT_SECURE_NO_WARNINGS 1
#include	<stdio.h>
#include <string.h>
//int main()
//{
//	int age = 0;
//	printf("你几岁了？\n");
//	scanf("%d", &age);
//	if (100> age&&age >= 18)
//	{
//		printf("you can R-18\n");
//	}
//	else {
//		printf("you can`t R-18\n");
//	}
//	return 0;

//int main()
//{
//	char a[20] = { 0 };
//	scanf("%s", a);
//	if (!strcmp(a, "你好"))
//	{
//		printf("你好\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		default:
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}
//int main(void)
//{
//    float n1 = 3.0;
//    double n2 = 3.0;
//    long n3 = 2000000000;
//    long n4 = 1234567890;
//    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
//    printf("%ld %ld\n", n3, n4);
//    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
//    printf("%d", sizeof(float));
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	while (a <= 10)
//	{
//		printf("%d\n", a);
//			a++;
//
//	}
//	return 0;
//}
int main()
{
	int a = 0;
	a = getchar();
	printf("%c\n", a);
	putchar(a);


	return 0;
}
