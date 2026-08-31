#include<stdio.h>
void key(int length,int a[], int* min, int* max);
int main()
{
	int a[] = { 1,2,3,4,5,6,7,5,5,4,3,2,3,33,44,4,55,66,0, };
	int min;
	int max;
	int length = sizeof(a) / sizeof(a[0]);
	key(length, a, &min, &max);
	printf("max=%d,min=%d\n", max, min);
}

void key(int length,int a[], int* min, int* max)
{
	int i;
	*min = *max = a[0];
	for (i = 0;i < length;i++)
	{
		if (*min > a[i])
		{
			*min = a[i];
		}
		if (*max < a[i])
		{
			*max = a[i];
		}

	}
}