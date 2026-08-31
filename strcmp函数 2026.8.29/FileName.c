#include<stdio.h>
#include<string.h>
int mycmp(char* a, char* b)
{
	int cnt = 0;
	while (a[cnt] == b[cnt] && a[cnt] != '\0')
	{
		cnt++;
	}
	return (a[cnt] - b[cnt]);
}



int main()
{
	char a[] = "abD";
	char b[] = "abd";
	printf("%d", mycmp(a, b));
	return 0;
}