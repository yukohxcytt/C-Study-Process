#include<stdio.h>
int main()
{
	int n = 0;
	int i;
	double sum = 0;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		sum += 1.0 / i;
	}
	printf("前n项和为%lf\n",sum);
	return 0;
}