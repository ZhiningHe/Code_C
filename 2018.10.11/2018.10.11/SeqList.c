#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct sefList
{
	int capacity; //������
	int length;	 //��
	int* node;
}List;


List* Create(int capacity)												//����˳������
{//����Ϊ Ҫ�����ı������
	List* temp = NULL;
	temp = (List*)malloc(sizeof(List));
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

int InitNode(List* list,int pos,List* node)									//������
{//�����ֱ�Ϊ ˳�������������±ꡢ Ҫ����Ľ��
	int i = 0;
	List* temp = NULL;
	//��׳��
	if (NULL == list || pos < 0 )
	{
		return -1;
	}
	if (list->capacity == list->length)
	{
		printf("˳����������޷�����ڵ㣡");
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
	temp->node[i] = (int) node;//��List*���͵�nodeǿ��ת��Ϊint����
	temp->length++;
	return 0;
}


void deleteNode(int pos, List* list)										//ɾ���ڵ�
{//����Ϊ ����������±ꡢ˳���
	int i = 0;
	List* temp = NULL;
	List* tlist = NULL;
	tlist = list;
	if (NULL == list || pos < 0 || pos >= list->capacity)//��׳��
	{
		printf("������Ϣ����");
	}

	temp = tlist->node[pos];//Ҫɾ��������Ԫ��

	for (i = pos+1; i <= tlist->length; i++)
	{
		tlist->node[i - 1] = tlist->node[i];
	}
	tlist->length--;
	return temp;
}


List* PutOut(List* list)												//���˳������
{		
	int i = 0;
	List* temp = NULL;
	temp = list;
	if (NULL == temp)
	{
		return -1;
	}

	printf("˳���ı�����Ϊ��%d\n��Ϊ��%d\n", temp->capacity, temp->length);
	printf("˳���Ϊ��");
	for (i = 0; i < temp->length; i++)
	{
		printf("%d ", temp->node[i]);
	}
	return 0;
}

int SreachNode(List* list, List* node)									//���ҽ����±�
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
		printf("���ҵĽڵ�Ϊ�գ�");
	}
	for (i = 0; i < temp->length; i++)
	{
		if ((int)node == temp->node[i])
		{
			printf("�ҵ������������±�Ϊ��%d\n", i);
		}
	}
	printf("û���ҵ���");
	return 0;
}

int GetNode(List* list, int pos)										//�õ�ĳ�±��Ӧ�Ľ��
{
	int i = 0;
	List* temp = NULL;
	temp = list;
	if (pos < 0 || pos > temp->length)
	{
		printf("�����±��������");
	}
	if (NULL == temp)
	{
		return -1;
	}

	if (temp->node[pos])
	{
		printf("�±�Ϊ%d�Ľ��Ϊ%d", pos, temp->node[pos]);
	}
	return 0;
}

void Clear(List* list)													//��ձ�
{
	List* temp = NULL;
	if (NULL == list)
	{
		return -1;
	}
	temp = list;
	temp->length = 0;
	memset(temp->node, 0, (temp->length*sizeof(int*)));//������Ԫ��ȫ����ֵ0
	return 0;
}

void Delete(List* list)													//���ٱ�
{
	List* temp = NULL;
	if (NULL == list)
	{
		return -1;
	}
	temp = list;
	if (NULL != temp->node)//���ͷ�������ͷ�����ͷ�ڵ�
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