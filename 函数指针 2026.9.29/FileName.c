#include<stdio.h>
int plus(int a, int b)//两数之和
{
	return a + b;
}

int subtraction(int a, int b)//两数之差
{
	return a - b;
}

void call(int(*p)(int,int))//负责调用函数
{
	int result=(*p)(4, 5);//纪录被调用函数的返回值
	printf("%d", result);
}

int main(int argc,const char *argv[])
{
	int i;
	int (*p[])(int,int) = {plus,subtraction};//定义一个函数指针数组，函数去掉括号之后就是一个地址
	scanf("%d", &i);//0是加，1是减
	call(p[i]);
	return 0;
}