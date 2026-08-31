#include<stdio.h>
int main() {
	int n = 0;
	int output = 1;
	scanf("%d", &n);
	for (int i = 2;i <= n;i++)
	{
		output *= i;
	}
	printf("%d\n", output);

	return 0;
}