#include<stdio.h>
int main() {
	int x;
	int n = 0;
	printf("请输入整数\n");
	scanf("%d", &x);
	if (x < 0) {
		x /= -1;
	}
	while (x > 0) {
		x /= 10;
		n++;
	}
	printf("该整数的位数为%d\n", n);
	return 0;
}