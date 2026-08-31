#include<stdio.h>
int main() {
	int x = 0;//输入
	int n = 0;//记录位数
	int t = 0;//记录最后一位的数字
	int sum = 0;//输出
	int s = 1;//记录十的幂
	printf("请输入数字\n");
	scanf("%d", &x);
	int y = x;//作为中间值，替代x来计算位数
	do {     //获取输入的位数
		n++;
		y /= 10;
	} while (y!=0);

	do {
		t = x % 10;
		for (int i = 0;i < n-1;i++)//计算乘方
		{
			s *= 10;
		}
		sum += t * s;
		s = 1;
		n--;
		x /= 10;
	} while (n != 0);
	printf("该数字的逆序数为%d\n",sum);
	return 0;
}