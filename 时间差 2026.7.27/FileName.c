#include<stdio.h>
int main()
{
	int hour1, hour2;
	int min1, min2;
	printf("请分别输入两者的小时数\n");
	scanf("%d %d", &hour1, &hour2);
	printf("请分别输入两者的分钟数\n");
	scanf("%d %d", &min1, &min2);
	int t1 = hour1 * 60 + min1;
	int t2 = hour2 * 60 + min2;
	int summin = t2 - t1;  //分钟数之差
	if (summin<0) {    //取绝对值，避免出现负数
		summin = -summin;
	}
	int remain_min = summin % 60;
	printf("时间差为%d小时%d分钟", summin/60, remain_min);
	return 0;
}


