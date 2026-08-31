#include<stdio.h>
int main()
{
	int input;
	printf("请输入月份\n");
	scanf("%d", &input);
	//定义字符串数组
	char* a[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	printf("%s\n",a[input-1]);

	return 0;
}