#include<stdio.h>
int main() {
	int n = 0;
	int sum = 0;
	int t = 0;
	printf("请输入数字\n");
	scanf("%d", &n);
	do {
		t = n % 10;
		sum += t;
		n /= 10;
	} while (n != 0);
	printf("该数各位上数字的总和为%d\n", sum);
	return 0;

}