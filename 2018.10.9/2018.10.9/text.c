#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
	int data;
	struct ListNode *next;
}Node,*List;								//����һ���ṹ�岢����������Ϊ*list

List CreateList()					//�����������
{
	int i = 0, num = 0;
	List pNode = (List)malloc(sizeof(Node));
	List head = (List)malloc(sizeof(Node));		//����ͷ�ڵ�
	head->next = pNode;

	printf("����5�����ֵ�����");
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
	pNode = head->next;		//�Ƶ�ͷ�ڵ��
	while (pNode->next)					//�������
	{
		printf("%d ",pNode->data);
		pNode = pNode->next;
	}
}


List *ListUnion(List *list1,List *list2)		//��������
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

	printf("\n���Ӻ��myunion��");
	myunion = ListUnion(list1, list2);

	system("pause");
	return 0;
}