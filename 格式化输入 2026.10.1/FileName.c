#include<stdio.h>
#include<string.h>
typedef struct {
	char name[20];
	int age;
}student;
void write(student a[], int len)
{
	FILE* fp = fopen("test.txt", "w");
	if (fp == NULL)
	{
		printf("error");
		return 1;
	}
	int i = 0;
	for (i = 0;i < len;i++)
	{
		fprintf(fp, "%s\t%d\t\n", a[i].name, a[i].age);
	}
	fclose(fp);
}

void readtext(student b[])
{
	FILE* fp = fopen("test.txt", "r");
	if (fp == NULL)
	{
		printf("error");
		return 1;
	}
	int i = 0;
	while (fscanf(fp, "%s\t%d\t", b[i].name, &b[i].age)!=EOF)
	{
		printf("%s\t%d\t\n", b[i].name, b[i].age);
		i++;
	}
	fclose(fp);
}

int main()
{
	student a[] = {
		{"lisa",11},
		{"may",23}
	};
	int len = sizeof(a) / sizeof(a[0]);
	write(a, len);
	readtext(a);

	return 0;
}