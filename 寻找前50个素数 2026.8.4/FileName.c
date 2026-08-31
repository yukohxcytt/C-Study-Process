#include<stdio.h>
int main() {
	int x = 2;
	
	//while (num < 50) 
	for (int num = 0;num<50;x++) 
	{
		int b = 1;
		for (int i = 2;i < x;i++) {
			if (x % i == 0) {
				b = 0;
				break;
			}

		}
		if (b == 1) {
			printf(" %d ", x);
			num++;
		}
		//x++;
	}
	printf("\n");
	return 0;
}