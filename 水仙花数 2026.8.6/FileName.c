#include<stdio.h>
int main() 
{
	int n = 0;//输入
	int t = 1;
	scanf("%d", &n);
	for (int i = 1;i < n;i++)
	{
		t *= 10;
	}
	int end = t*10;
	while (t < end)
	{
		int a = 0;
		int sum = 0;
		int temp = t;//防止t的值发生改变
		do {
			a = temp % 10;//求各位数
			temp = temp / 10;
			int f = 1;
				for (int m = 0;m < n;m++)//计算各位数的幂
				{

				f *= a;
				}
				sum = sum + f;			
		} while (temp != 0);
		if (sum == t)printf("%d\n", sum);//放在循环外面，确保计算的完整
	    t++;//迭代
	}

	return 0;
}