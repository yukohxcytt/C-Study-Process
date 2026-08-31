#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p = NULL;
	int t;
	int i;
	scanf("%d", &t);
	p = (int*)malloc(t * sizeof(int));//分配内存
	for (i = 0;i < t;i++)
	{
		p[i] = i + 1;//指针也能像数组那样操作
		printf("%d ", p[i]);
	}
	free(p);//释放指针
	p = NULL;
	return 0;
}