#include<stdio.h>
#include<stdlib.h>
typedef struct Node//定义链表
{
	struct Node* next;
	int value;
}node;
typedef struct {//定义链表头跟链表尾
	node* head;
	node*tail;
}List;
void add(List* plist, int number);
void print(List* plist);
void free_(List* plist);
int main()
{
	int number;
	int found;
	int key = 0;
	node* q = NULL;
	List list;
	list.head = NULL;
	list.tail = NULL;//初始化
	
	do {
		scanf("%d", &number);
		if (number != -1)
		{
			add(&list, number);//添加节点
		}
		} while (number != -1);
	
	printf("请输入查找的数字\n");
	scanf("%d", &found);
	for (node*find = list.head;find;q=find,find = find->next)//寻找链表中的特定数字是否存在并删除
	{
		if (find->value == found)
		{	key = 1;
			if (q==NULL)//边界情况，第一个节点就是目标删除
			{
				list.head = find->next;
				free(find);
				break;
			}
			else {
				q->next = find->next;
				free(find);
				break;
			}
			
		}
	}
	if (key == 0)
	{
		printf("没找到\n");
	}
	printf("链表是");
	print(&list);//逐行打印
	free_(&list);//释放内存
	return 0;
}

void add(List* plist, int number)
{
	node* p = malloc(sizeof(node));
	p->value = number;
	p->next = NULL;
	if (plist->head==NULL)
	{
		plist->head = p;
		plist->tail = p;
	}
	else {
		plist->tail->next = p;
		plist->tail = p;
	}
}

void print(List* plist)
{
	node* p;
	for(p=plist->head;p;p=p->next)
	{
		printf("%d->", p->value);
		
	}

	printf("NULL");
}

void free_(List* plist)
{
	node* current = plist->head;
	while (current)
	{
		node* temp = current->next;
		free(current);
		current = temp;
	}
}