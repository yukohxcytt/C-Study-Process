#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请分别输入分子和分母\n");
	scanf("%d/%d", &a, &b);
	int divident = a;
	int divisor = b;
	{
		do {
			int t = a % b;
			a = b;
			b = t;
		} while (b != 0);//辗转相除法，求出公约数
		printf("%d/%d", divident / a, divisor / a);

	}

	return 0;
}