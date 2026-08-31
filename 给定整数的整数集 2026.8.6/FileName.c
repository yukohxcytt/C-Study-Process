#include<stdio.h>
int main()
{
	int a;
	int i;
	int j;
	int k;
	int sum;
	int cnt = 0;
	scanf("%d", &a);
	for (i = a;i <= a + 3;i++)
	{
		for (j = a;j <= a + 3; j++) 
		{
			for (k = a;k <= a + 3; k++) 
			{
				if (i != j)
				{
					if (i != k)
					{
						if (j != k)
						{
							cnt++;
							sum = i * 100 + j * 10 + k * 1;
							printf("%d", sum);
							if (cnt<6) {
								printf(" ");
							}
						}
					}
				}
			}
		}
		printf("\n");
		cnt = 0;
		}
	}