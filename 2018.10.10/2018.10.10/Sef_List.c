#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct sefList
{
	int capacity;		//表容量
	int length;			//表长
	int* node;
}List;


List* Create(int capacity)			//创建顺序链表
{
	List* temp = NULL;
	temp = (List*)malloc(sizeof(list));
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

int InitNode()					//插入结点
{

}

void deleteNode(int code)				//删除节点
{

}

List* PutOut(List* temp)							//输出顺序链表
{

}