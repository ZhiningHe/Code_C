#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct sefList
{
	int capacity; //表容量
	int length;	 //表长
	int* node;
}List;


List* Create(int capacity)												//创建顺序链表
{//参数为 要建立的表的容量
	List* temp = NULL;
	temp = (List*)malloc(sizeof(List));
	if (NULL == temp)
	{
		printf("头节点创建失败！");
	}

	temp->capacity = capacity;
	temp->length = 0;
	temp->node = (List*)malloc(sizeof(int*)*capacity);

	if (NULL == temp->node)
	{
		printf("顺序链表创建失败！");
	}

	return temp;
}

int InitNode(List* list,int pos,List* node)									//插入结点
{//参数分别为 顺序表、插入数组的下标、 要插入的结点
	int i = 0;
	List* temp = NULL;
	//健壮性
	if (NULL == list || pos < 0 )
	{
		return -1;
	}
	if (list->capacity == list->length)
	{
		printf("顺序表已满，无法插入节点！");
	}
	if (pos >= list->length)
	{
		pos = list->length;
	}
	temp = list; 
	for (i = temp->length; i > pos; i-- )
	{
		temp->node[i] = temp->node[i - 1];
	}
	temp->node[i] = (int) node;//将List*类型的node强制转换为int类型
	temp->length++;
	return 0;
}


void deleteNode(int pos, List* list)										//删除节点
{//参数为 插入数组的下标、顺序表
	int i = 0;
	List* temp = NULL;
	List* tlist = NULL;
	tlist = list;
	if (NULL == list || pos < 0 || pos >= list->capacity)//健壮性
	{
		printf("输入信息错误！");
	}

	temp = tlist->node[pos];//要删除的数组元素

	for (i = pos+1; i <= tlist->length; i++)
	{
		tlist->node[i - 1] = tlist->node[i];
	}
	tlist->length--;
	return temp;
}


List* PutOut(List* list)												//输出顺序链表
{		
	int i = 0;
	List* temp = NULL;
	temp = list;
	if (NULL == temp)
	{
		return -1;
	}

	printf("顺序表的表容量为：%d\n表长为：%d\n", temp->capacity, temp->length);
	printf("顺序表为：");
	for (i = 0; i < temp->length; i++)
	{
		printf("%d ", temp->node[i]);
	}
	return 0;
}

int SreachNode(List* list, List* node)									//查找结点的下标
{
	int i = 0;
	List* temp = NULL;
	temp = list;
	if (NULL == temp)
	{
		return -1;
	}
	if (NULL == node)
	{
		printf("查找的节点为空！");
	}
	for (i = 0; i < temp->length; i++)
	{
		if ((int)node == temp->node[i])
		{
			printf("找到了它的数组下标为：%d\n", i);
		}
	}
	printf("没有找到！");
	return 0;
}

int GetNode(List* list, int pos)										//得到某下标对应的结点
{
	int i = 0;
	List* temp = NULL;
	temp = list;
	if (pos < 0 || pos > temp->length)
	{
		printf("查找下标输入错误！");
	}
	if (NULL == temp)
	{
		return -1;
	}

	if (temp->node[pos])
	{
		printf("下标为%d的结点为%d", pos, temp->node[pos]);
	}
	return 0;
}

void Clear(List* list)													//清空表
{
	List* temp = NULL;
	if (NULL == list)
	{
		return -1;
	}
	temp = list;
	temp->length = 0;
	memset(temp->node, 0, (temp->length*sizeof(int*)));//将数组元素全部赋值0
	return 0;
}

void Delete(List* list)													//销毁表
{
	List* temp = NULL;
	if (NULL == list)
	{
		return -1;
	}
	temp = list;
	if (NULL != temp->node)//先释放数组后释放链表头节点
	{
		free(temp->node);
	}
	free(temp);
	return 0;
}

int main()
{
	List* MyList = Create(100);

	return 0;
}