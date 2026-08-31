#include<stdio.h>
int main()
{
	const int maxnumber = 25;
	int x[maxnumber];
	int i;
	{
		int i;
		printf("\t");
		for (i = 2;i < maxnumber;i++)
		{
			printf("%d\t", i);
		}
		printf("\n");//打印2-24的表头
	}
	for (i = 0;i < maxnumber;i++)
	{
		x[i] = 1;
	}
	for (i = 2;i < maxnumber;i++)
	{
		printf("%d\t", i);
		if (x[i] == 1)
		{
			for (int n = 2;i * n < maxnumber; n++)
			{
				x[i * n] = 0;
			}
		}
			for (int n = 2;n < maxnumber;n++)
			{
				printf("%d\t", x[n]);
			}
			printf("\n");
	}
	for (int n = 2;n < maxnumber;n++)
	{
		if (x[n] == 1)
		{
			printf("%d\t", n);
		}
	}
	return 0;
}
