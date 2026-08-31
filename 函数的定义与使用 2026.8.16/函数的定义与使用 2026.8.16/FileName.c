#include<stdio.h>
int printf_a(int a, int b)
{
	printf("%d %d\n", a, b);
	return 1;
}
int main()
{
	int f;
	int c, d;
	scanf("%d %d", &c, &d);
	f=printf_a(c, d);
	printf("%d", f);
	return 0;
}
