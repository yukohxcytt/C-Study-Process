#include<stdio.h>
#include<string.h>
void rewrite()
{	
	FILE* fp = fopen("text.txt", "w");
	if (fp == NULL)
	{
		perror("error");
	}
	char str[] = "Hello World!";
	fputs(str,fp);
	fclose(fp);
}
void readtext()
{
	FILE* fp = fopen("text.txt", "r");
	if (fp == NULL)
	{
		perror("error");
	}
	char a[2024] = "";
	fgets(a, 2024, fp);
	puts(a);
	fclose(fp);
}

int main()
{
	rewrite();
	readtext();
	return 0;
}