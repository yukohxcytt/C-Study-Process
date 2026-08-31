#include<stdio.h>
int main() {
	int x;
	int mask = 1;
	int t;
	scanf("%d", &x);
	t = x;
	while (t >= 10)
	{
		t /= 10;
		mask = mask * 10;
	}
	while (mask > 0)
	{
		int d = x / mask;
		x = x % mask;
		mask = mask / 10;
		printf("%d", d);
		if (mask != 0) {
			printf(" ");
		}
	}
	
	
	
	
	
	return 0;
}