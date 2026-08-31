#include<stdio.h>
#include<string.h>
int len(char* a)//构造一个函数，使其能起到strlen函数的作用
{
	int cnt = 0;
	while (a[cnt] != '\0')
	{
		cnt++;
	}
	return cnt;
}
int main()
{
	char a[] = "hello";
	printf("strlen=%d\n", len(a));
	printf("sizeof=%d\n", sizeof(a));
	return 0;
}