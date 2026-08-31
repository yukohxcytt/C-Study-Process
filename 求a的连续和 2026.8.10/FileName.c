#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	printf("请分别输入a跟n\n");
	scanf("%d %d", &a, &n);
	int t = a;//用来替代a，防止a的值在循环中发生变量
	int sum = a;//初始化的值为a，确保了n=1时的正确输出
	for (int i = 1;i < n;i++)//n大于2的时候进入循环，乘以10的次数=n-1，就是循环次数
	{
		t = t * 10 + a;
		sum += t;
	}
	printf("总和为%d\n", sum);
	return 0;
}
//其实也可以让循环从0开始，让t=0，这样第一次循环也能得到个位数