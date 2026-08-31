#include<stdio.h>

int main()
{
	float a = 0;
	float b = 0;
	printf("请输入两个数\n");
	scanf("%f %f", &a, &b);
	printf("%f + %f = %f\n", a, b, a + b);

	return 0;
}