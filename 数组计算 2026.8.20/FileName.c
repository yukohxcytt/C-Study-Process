#include<stdio.h>
int find(int x,int a[],int length);
int main()
{
	int x;
	scanf("%d", &x);
	int a[] = { 1,2,3,4,55,6,7,4,65,7,8,6,3,5,8,6,5,4,3, };
	int length = sizeof(a) / sizeof(a[0]);
	int key;
	key = find(x, a, length);
	if (key == -1)
	{
		printf("很遗憾，你输入的数不存在\n");
	}
	else {
		printf("%d在这个数组里面\n", key);
	}

	return 0;
}

int find(int x,int a[],int length)
{
	int ret = -1;

	for (int i = 0;i < length;i++)
	{
		if (a[i] == x)
		{
			ret = x;
			break;
		}
	}
	return ret;
}