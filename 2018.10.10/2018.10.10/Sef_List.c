#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct sefList
{
	int capacity;		//������
	int length;			//��
	int* node;
}List;


List* Create(int capacity)			//����˳������
{
	List* temp = NULL;
	temp = (List*)malloc(sizeof(list));
	if (NULL == temp)
	{
		printf("ͷ�ڵ㴴��ʧ�ܣ�");
	}

	temp->capacity = capacity;
	temp->length = 0;
	temp->node = (List*)malloc(sizeof(int*)*capacity);

	if (NULL == temp->node)
	{
		printf("˳��������ʧ�ܣ�");
	}

	return temp;
}

int InitNode()					//������
{

}

void deleteNode(int code)				//ɾ���ڵ�
{

}

List* PutOut(List* temp)							//���˳������
{

}