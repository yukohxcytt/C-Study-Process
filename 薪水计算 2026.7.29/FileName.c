#include<stdio.h>
int main(){
	//定义变量
	const SALARY = 20;
	const STANDARD = 40;
	int hour = 0;
	printf("请输入你的小时数\n");
	scanf("%d", &hour);
	//判断
	if (hour > STANDARD) {
		printf("你的薪资为%d", (hour - STANDARD) * 30 + STANDARD * SALARY);
	}
	else {
		printf("你的薪资为%d\n",hour * SALARY);
	}
	return 0;
}