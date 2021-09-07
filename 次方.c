#define _CRT_SECURE_NO_WARNINGS 1
int cifang(int a, int b)
{
	int c = 1;
	while (b > 0)
	{
		c *= a;
		b--;

    }
	return c;
}