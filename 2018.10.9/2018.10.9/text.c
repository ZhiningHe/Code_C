#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
	int data;
	struct ListNode *next;
}Node,*List;								//定义一个结构体并重命名类型为*list

List CreateList()					//创建链表并输出
{
	int i = 0, num = 0;
	List pNode = (List)malloc(sizeof(Node));
	List head = (List)malloc(sizeof(Node));		//创建头节点
	head->next = pNode;

	printf("输入5个数字到链表：");
	for (i = 0; i <= 5; i++)
	{
		scanf("%d", &num);
		pNode->data = num;
	    pNode->next = (List)malloc(sizeof(Node));
		if (5 == i)
		{
			pNode->next = NULL;
		}
		else
		{
			pNode = pNode->next;
		}
	}
	pNode = head->next;		//移到头节点后
	while (pNode->next)					//输出链表
	{
		printf("%d ",pNode->data);
		pNode = pNode->next;
	}
}


List *ListUnion(List *list1,List *list2)		//连接链表
{
	List pNode = (List)malloc(sizeof(Node));

	pNode = list1;
	while (pNode->next)
	{
		pNode = pNode->next;
	}
	pNode->next = list2;
	
	pNode = list1;
	while (pNode->next)
	{
		printf("%d ", pNode->data);
		pNode = pNode->next;
	}
}

int main()
{
    List list1, list2, myunion;
	list1 = CreateList();
	printf("\n");
	list2 = CreateList();

	printf("\n连接后的myunion：");
	myunion = ListUnion(list1, list2);

	system("pause");
	return 0;
}