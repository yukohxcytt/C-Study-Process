#include<stdio.h>
int main() {
	int x = 0;
	scanf("%d", &x);
	int b = 1;
	for (int i = 2;i < x;i++) {
		if (x % i == 0) {
			b = 0;
			break;
		}
	}
	if (b == 1 ) {
		if (x == 1) {
			printf("1既不是素数，也不是合数\n");
		}
		else {
			printf("是素数\n");
		}

	}
	else{
		printf("不是素数\n");
	}
	return 0;
}