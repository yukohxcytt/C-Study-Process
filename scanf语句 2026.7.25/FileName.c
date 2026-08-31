#include <stdio.h>
int main()
{
	int price = 0;
	printf("请输入金额(元)\n");
	scanf("%d", &price);
	int money = 100 - price;
	printf("找您%d元\n",money);
	return 0;
}