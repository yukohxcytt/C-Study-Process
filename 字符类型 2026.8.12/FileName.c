#include<stdio.h>
int main()
{
	char c;
	
	scanf("%c", &c);
	 c = c + 'A' - 'a';//将小写字母变成大写
	printf("c=%d,c='%c'\n", c, c);



	return 0;
}