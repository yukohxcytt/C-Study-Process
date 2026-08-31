#include<stdio.h>
int main()
{
	int a;
	int b;
	int yu;
	scanf("%d %d", &a, &b);
	while(b!=0)
	{
		yu = a % b;
		a = b;
		b = yu;
	}
	printf("最大公约数为%d\n", a);

}