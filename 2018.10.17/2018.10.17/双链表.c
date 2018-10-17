#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Head *PHead;
typedef struct Node *PNode;

struct Head {		//头结点
	int length;
	PNode next;
};
struct Node {		//结点
	int data;
	PNode pre;
	PNode next;
};

PNode Create()			//创建头结点
{
	PHead ph = (PHead)malloc(sizeof(struct Head));
	if (NULL == ph)
	{
		printf("创建结点失败！\n");
	}
	ph->length = 0;
	ph->next = NULL;
	return ph;
}

int Inite(PHead ph, int pos, int val)		//插入结点到pCur后的结点
{
	PNode pTmp = (PNode)malloc(sizeof(struct Node));
	pTmp->data = val; pTmp->next = NULL;  //把val存入一个结点

	if (NULL == pTmp)
	{
		printf("创建结点失败！\n");
	}
	PNode pCur = ph->next;
	if (NULL == ph)		//空链表
	{
		pCur->pre = NULL;
		pCur->next = NULL;
		ph->next = pCur;
	}
	else if(0 == pos)  //插入到第一个位置
	{
		pCur->pre = pTmp;
		pTmp->next = pCur;
		ph->next = pTmp;
		pTmp->pre = NULL;
	}
	else
	{
		for (int i = 1; i < pos; i++)
		{
			pCur = pCur->next;
		}
		pTmp->next = pCur->next;
		pTmp->pre = pCur;
		pCur->next->pre = pTmp;
		pCur->next = pTmp;
	}
	ph->length++;
	return 1;
}

int Delecte(PHead ph, int val)			//删除某值
{
	if ( (ph == NULL) || (ph->length = 0))
	{
		printf("头结点错误！");
	}
	PNode pTmp = ph->next;
   do
	{
		if (pTmp->data == val)
		{
			pTmp->pre->next = pTmp->next;
			pTmp->next->pre = pTmp->pre;
			pTmp->next = NULL;
			pTmp->pre = NULL;
			free(pTmp);
			return val;
		}
   } while (pTmp->next != NULL);
   return 0;
}

PNode Search(PHead ph, int val)			//查找某值
{
	if ((ph == NULL)|| (ph->length == 0))
	{
		printf("头结点为空！");
	}
	PNode pTmp = ph->next;
	do
	{
		if (pTmp->data == val)
		{
			printf("已找到！\n");
			return pTmp;
		}
		pTmp = pTmp->next;
	} while (pTmp->next != NULL);
	printf("没有找到！\n");
	return 0;
}

int print(PHead ph)			//正序打印
{
	if (NULL == ph)
	{
		printf("头结点为空！");
	}
	PNode pTmp = ph->next;
	while (pTmp->next != NULL)
	{
		printf("%d ", pTmp->data);
		pTmp = pTmp->next;
	}
	printf("\n");
}

//逆序打印 即先将指针移动到表尾 再依次往前打印

int Destory(PHead ph)			//销毁双链表
{
	if (NULL == ph)
	{
		printf("头结点为空！");
	}
	PNode pTmp = ph->next;
	PNode pCur;
	while (pTmp != NULL)
	{
		pCur = pTmp->next;
		free(pTmp);
		pTmp = pCur;
	}
	ph->length = 0;
	ph->next = NULL;
}

int main()
{
	PHead List = Create();
	int str[] = { 3,5,6,3,44,33,64,34,88,23,78,45,34,23 };
	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		Inite( List, 0, str[i]);
	}
	printf("打印双链表：");
	print(List);

	printf("请输入要删除的元素：");
	int sum = 0;
	scanf("%d", sum);
	int ret = Delecte(List, sum);
	if (ret)
	{
		printf("删除成功！\n");
		printf("删除后双链表为：");
		print(List);
	}
	else
		printf("删除失败！");

	system("pause");
	return 0;
}