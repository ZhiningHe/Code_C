#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	pnode next;
}*pnode,Node;

typedef struct Head
{
	int length;
	pnode next;
}*phead,Head;

phead Creat();//����ѭ������
int Init(phead ph, int pos, int value);
int Delete(phead ph, int pos, int value);


#ifdef __CLIST_H__
#endif //__CLIST_H__
