#include<stdio.h>
int main()
{
	double sum = 0;
	int n = 0;
	int x = 0;
	printf("请输入正整数，当你输入-1时输入结束\n");
	while (x != -1) {
		scanf("%d", &x);
		if (x != -1 && x > 0) { //排除负数跟0的情况
			sum += x;
			n++;
		}
       
	} 
	if (n > 0) {
		double average = sum / n; //这里n不等于0，定义有意义
		printf("平均数为%f\n", average);
	}
	else {
		printf("输入有误，请重新输入\n");
	}
	
	return 0;
}