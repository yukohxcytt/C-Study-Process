#include<stdio.h>
void sum(int* p);
void key(int k);
int main()
{
	int a = 1;
	int* p = &a;
	printf("&a=%p\n", &a);
	sum(&a);//将a的地址传给函数sum
	key(a);//打印a的值
	return 0;
}

void sum(int* p)
{
	printf("%p\n", p);
	*p = 12;//直接改变a变量的值，p是地址，而*p相当于找到了对应地址中的值，将12赋值给了a
}

void key(int k)
{
	printf("a=%d\n", k);
}