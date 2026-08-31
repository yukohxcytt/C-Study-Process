#include<stdio.h>
int main()
{	
	const number = 10;
	int x;
	int i;
	int num[10];
	for (i = 0;i < 10;i++)
	{
		num[i] = 0;
	}
	scanf("%d", &x);
	while (x != -1)
	{
		if (x >= 0 && x <= 9)
		{
			num[x]++;	
		}
		scanf("%d", &x);
	}
	for (i = 0;i < 10;i++)
	{
		printf("%d的出现次数为%d次\n", i, num[i]);
	}
	return 0;
}