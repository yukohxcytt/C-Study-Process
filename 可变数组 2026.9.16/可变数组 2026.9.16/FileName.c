#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int* data;
	int size;
	int capcity;

}vic;//定义结构体
int vic_start(vic* v, int cap)//初始化
{
	v->capcity = cap;
	v->size = 0;
	v->data = (int*)malloc(sizeof(int) * cap);
	if (v->data == NULL)
	{
		printf("false");
		return 0;
	}
	return 1;
}
int vic_push(vic* v,int x)
{
	if (v->size >= v->capcity)//扩容
	{
		int new_capcity = (v->capcity) * 2;//将大小乘以二
		int* p = (int*)realloc(v->data,sizeof(int) * new_capcity);
	
		if (p == NULL)
		{
			printf("false");
			return 0;
		}
		v->capcity = new_capcity;
		v->data = p;
		//覆盖原来的大小，扩大地址
	}
	v->data[v->size] = x;
	v->size++;
	return 1;
}
void print(vic* v)//将数组里面的元素全部打印
{
	printf("size=%d,capcity=%d\n", v->size, v->capcity);
	printf("元素：\n");
	for (int i = 0;i < v->size; i++)
	{
		printf("%d", v->data[i]);
		printf("\n");
	}
}
void vic_free(vic* v)//释放内存
{
	free(v->data);
	v->data = NULL;
	v->size = 0;
	v->capcity = 0;
}
int main()
{
	vic v;
	vic_start(&v,4);
	for (int i = 0;i < 10;i++)//往数组里面插入十个数，若不够则扩张
	{
		vic_push(&v, i * 10);
	}
	print(&v);//打印
	vic_free(&v);
	return 0;
}