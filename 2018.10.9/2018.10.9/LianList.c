#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct Node					//定义结点
{
	int data;
	struct Node* next;
}Node,List;

typedef struct Header			//定义头结点
{
	int length;
	Node* next;
}pHead;


pHead* Create()						//创建（初始化）头节点
{
	pHead* pH = (pHead*)malloc(sizeof(pHead));
	
	pH->length = 0;
	pH->next = NULL;
	return pH;
}

int Insert(pHead* pH, int pos, int val)				//插入元素
//参数为 头节点、插入位置、插入元素
{

	List* pval = (List*)malloc(sizeof(List));
	pval->data = val;
	List* pCur = pH->next;//创建一个指针

	if (pos == 0)
	{
		pH->next = pval;
		pval->next = pCur;
	}
	else
	{
		for (int i = 1; i <= pos; i++)//找到位置
		{
			pCur = pCur->next;
		}

		pval->next = pCur->next;
		pCur->next = pval;
	}

		pH->length++;
		return 1;//插入成功
}


List* Delete(pHead* pH, int pos)					//删除结点
{//参数为 头节点、删除位置
	if (NULL == pH || pos < 0 || pos >= pH->length)
	{
		printf("信息输入错误！");

	}

	List* pRe = pH->next;
	List* pCur = pRe->next;

	if (pos == 0)
	{
		pH->next = pH->next->next;
		pH->length--;
		return pRe;
	}

	else
	{
		for (int i = 0; i < pos; i++)//找到位置
		{
			pCur = pRe->next;
			pRe->next = pCur->next;
			pH->length--;
			return pCur;
		}
	}
}

List* Search(pHead* pH, int val)							//查找元素
{
	if (NULL == pH)
	{
		printf("信息输入错误！");

	}

	List* pTemp = pH->next;
	while (pTemp->next != NULL)
	{
		pTemp = pTemp->next;
		if (pTemp->data == val)
		{
			return pTemp;
		}
	}
	printf("没有找到！");
}


int print(pHead* pH)								//打印链表
{
	if (NULL == pH)
	{
		printf("信息输入错误！");

	}
	List* pTemp = pH->next;
	while (pTemp->next != NULL)
	{
		printf("%d ", pTemp->data);
		pTemp = pTemp->next;
	}
	printf("\n");
}

void Destory (pHead* pH)							//销毁链表
{
	if (NULL == pH)
	{
		printf("信息输入错误！");
	}
	List* pCur = pH->next;
	List* pTemp;

	while (pCur->next != NULL)
	{
		pTemp = pCur->next;
		free(pCur);
		pCur = pTemp;
	}
	pH->length = 0;
	pH->next = NULL;
}

int Len(pHead* pH)								//求链表长度
{
	if (NULL == pH)
	{
		printf("信息输入错误！");

	}
	return pH->length;
}


int main()
{
	pHead* ph = Create();

	int arr[10] = { 1,45,33,67,34,55,8,7,93,44 };

	for (int i = 0;  i <= 8; i++)
	{
		Insert(ph, 0, arr[i]);//每次都从头部插入
	}
	printf("链表长度为：%d\n", ph->length-1);
	printf("表中元素为:\n");
	print(ph);
	printf("\n请输入要删除的元素位置：");
	int num = 0;
	scanf("%d", &num);
	Delete(ph, num);
	printf("\n删除后的链表为:");
	print(ph);

	printf("\n请输入要查找的元素：");
	scanf("%d", &num);
	List* ret;
	ret = Search(ph, num);
	if (ret)
	{
		printf("找到！");
	}

	system("pause");
	return 0;
}