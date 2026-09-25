#include<stdio.h>
#include<stdlib.h>
typedef struct node_key {
	int value;
	struct node_key* next;

}node;//定义链表
int main()
{
	node* head = NULL;//初始表头为空，在第一次循环后会指向第一个节点
	int number;
	do {
		scanf("%d", &number);
		if (number != -1)
		{
			node* p = (node*)malloc(sizeof(node));//申请内存，每一次循环p节点都会被刷新（就是创造新的节点），而已经申请的内存不会消失，这就是节点能保存的原因
			p->value = number;
			p->next = NULL;
			node* last = head;
			if (last)
			{
				while (last->next)//该循环能够寻找最后一个节点，最后一个节点的next为NULL
				{
					last = last->next;
				}
				last->next = p;//接上新的节点p
			}
			else {
				head = p;
			}
			
		}
		
	} while (number != -1);
	
	printf("你输入的链表为");//输出节点的内容
	node* current = head;
	while (current != NULL)
	{
		printf("%d->", current->value);
		current = current->next;
	}
	printf("NULL\n");
	//释放内存
	current = head;
	while (current != NULL)
	{
		node* temp = current->next;//先把下一个的地址记录下来，因为free之后的地址就没了，无法获得下一个地址
		free(current);
		current = temp;
	}
	free(head);
	return 0;
}