#include<stdio.h>
int main() {
	int n = 0;
	int five = 0;
	int one = 0;
	int two = 0;
	int exit = 0;
	printf("请输入多少元\n");
	scanf("%d", &n);
	for (one = 1;one < n * 10;one++) 
	{
		for (two = 1;two < n * 10 / 2;two++) 
		{
			for (five = 1;five < n * 10 / 5;five++)
			{
				if (five * 5 + two * 2 + one * 1 == n * 10) {
					printf("可以找你 % d个五角 % d个二角 % d个一角\n", five, two, one);
					exit = 1;
					break;
				}
				if (exit == 1) break;
			}
			if (exit == 1) break;
		}
		if (exit == 1) break;
	}

	return 0;
}