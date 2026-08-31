#include<stdio.h>
int main() {
	//初始化
	int prize = 0;
	int bill = 0;
	//输入
	printf("请输入价格\n");
	scanf("%d", &prize);
	printf("请输入票面\n");
	scanf("%d",&bill);
	//判断
	if (bill >= prize) {
		printf("找您%d元\n",bill - prize);
	
	}
	else {
		printf("您的票面不够，请重新输入\n");
	}
	return 0;
}