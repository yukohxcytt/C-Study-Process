#include<stdio.h>
int getfilesize(FILE* fp)
{
	fseek(fp, 0L, SEEK_END);
	return ftell(fp);

}

int main()
{
	FILE* fp = fopen("测量文件字节的多少 2026.10.1.vcxproj", "r +");
	printf("%d\n", getfilesize(fp));
	fclose(fp);
	return 0;
}