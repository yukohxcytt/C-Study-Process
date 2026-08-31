#include<stdio.h>
int main()
{
	double sum = 0;
	int n = 0;
	int x = 0;
	printf("请输入正整数，当你输入-1时输入结束\n");
	int number [100];//定义数组
	while (x != -1) {
		scanf("%d", &x);
		if (x != -1 && x > 0) { //排除负数跟0的情况
			number[n] = x;
			sum += x;
			n++;
		}

	}
	if (n > 0) {
		double average = sum / n; //这里n不等于0，定义有意义
		printf("平均数为%.2lf\n", average);
		for (int t = 0;t < n;t++)
		{
			if (number[t] > average)
			{
				printf("%d,", number[t]);
			}
		}
	}
	else {
	printf("输入有误，请重新输入\n");
	}

	return 0;
}