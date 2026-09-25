#include<stdio.h>
struct point {
	float x;
	float y;
};//点的定义
struct rectangle {
	struct point p1;
	struct point p2;
};//矩形需要两个点来定义
void print(struct rectangle);//函数声明，将矩形的两个点传输，打印坐标
int main()
{
	struct rectangle arrange[] = { 
		{{5.5,6.6},{5.0,7.9}}, 
		{{9.0,4.6},{55.7,77.9}}
	};//定义结构数组
	for (int i = 0;i < 2;i++) {
		print(arrange[i]);
	}//遍历数组
	return 0;
}
void print(struct rectangle a)
{
	printf("%.2f-%.2f,%.2f-%.2f\n",a.p1.x,a.p1.y,a.p2.x,a.p2.y);//访问成员
}