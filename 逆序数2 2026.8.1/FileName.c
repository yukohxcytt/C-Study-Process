#include<stdio.h>
int main(){
	int x = 0;
	int s = 0;
	printf("请输入正整数\n");
	scanf("%d", &x);
		while (x != 0) {
			s = x % 10;
			printf("%d",s);
			x = x / 10;
	}
	return 0;
}