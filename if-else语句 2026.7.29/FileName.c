#include<stdio.h>
int main() {
	double f = 0;
	double x = 0;
	printf("请输入x的值\n");
	scanf("%lf", &x);
	if (x < 0) {
		f = -1;
	}
	else if(x == 0) {
		f = 0;
	}
	else{
		f = 3 * x;
	}
	printf("该函数输出的值为%f", f);
	return 0;
}