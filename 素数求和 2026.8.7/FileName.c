#include<stdio.h>
int main()
{
	int M, N;
	scanf("%d %d", &M, &N);
	int m = M;
	int sum = 0;
	int cnt = 0;
	if (M > N)//确保N>M
	{
		M = N;
		N = m;
	}
	for (int s = M;s<= N;s++)
	{   int isprime = 1;
	    if (s < 2)continue;//排除1的影响

	for (int i = 2;i < s;i++)
	{
		if (s % i == 0)
		{
			isprime = 0;
			break;
		}
	}
		if (isprime == 1)
		{
			printf("%d ", s);
			sum += s;
			cnt++;
		}
	}
	printf("\n");
	printf("%d至%d区间素数的个数为%d，总和为%d", M, N, cnt,sum);
	return 0;
}