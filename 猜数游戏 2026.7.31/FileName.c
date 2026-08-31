#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int amount = 0;
	srand(time(0));
	int x = rand()%1000+1;
	int guess;
	printf("我已经藏好一个1-1000以内的数字了，请输入你的数字\n");
		do {
			scanf("%d", &guess);
			amount++;
			if (guess < x) {
				printf("很遗憾，你猜的数字小了\n");
			}
			if (guess > x) {
				printf("很遗憾，你猜的数字大了\n");
			}
		} while (guess != x);
		printf("恭喜，你猜中了！你用了%d次\n",amount);

	return 0;
}