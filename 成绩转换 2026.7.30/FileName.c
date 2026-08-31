#include<stdio.h>
int main() {
	int grade;
	printf("请输入成绩\n");
	scanf("%d", &grade);
	switch (grade / 10)
	{
	case 10:
		printf("您的等级是A\n");
		break;
	case 9:
		printf("您的等级是A\n");
		break;
	case 8:
		printf("您的等级是B\n");
		break;
	case 7:
		printf("您的等级是C\n");
		break;
	case 6:
		printf("您的等级是D\n");
		break;
	default :
		printf("很遗憾，您没有及格\n");
		break;
	}

	return 0;
}