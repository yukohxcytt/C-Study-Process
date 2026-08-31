#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int divident = 2;
	int divisor = 1;
	double sum = 0.0;
	for (int i = 0;i < n;i++)
	{
		int temp = divident;
		sum += 1.0*divident / divisor;
		divident = temp + divisor;
		divisor = temp;
	}
	printf("%.2f", sum);
	return 0;
}