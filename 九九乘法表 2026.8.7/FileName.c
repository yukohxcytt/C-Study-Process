#include<stdio.h>
int main()
{
	int n;
	int s = 1;
	scanf("%d", &n);
	for (int i = 1;i <= n; i++)
	{
		for (s = 1;s <= i;s++)
		{
			int sum = s * i;
			printf("%d * %d = %d", s, i, sum);
			if (sum<10)
			{
				printf("   ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}


	return 0;
}