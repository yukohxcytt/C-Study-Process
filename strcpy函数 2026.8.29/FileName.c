#include<stdio.h>
#include<string.h>
char* mycpy(char* b, char* a)
{
	int idx = 0;
	while (*b++ = *a++)
	{}
	return b;
}

int main()
{
	char a[] = "abD";
	char b[] = "abd";
	mycpy(b, a);
	printf("%s\n", b);
	return 0;
}