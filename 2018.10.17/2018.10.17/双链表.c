#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Head *PHead;
typedef struct Node *PNode;

struct Head {		//ͷ���
	int length;
	PNode next;
};
struct Node {		//���
	int data;
	PNode pre;
	PNode next;
};

PNode Create()			//����ͷ���
{
	PHead ph = (PHead)malloc(sizeof(struct Head));
	if (NULL == ph)
	{
		printf("�������ʧ�ܣ�\n");
	}
	ph->length = 0;
	ph->next = NULL;
	return ph;
}

int Inite(PHead ph, int pos, int val)		//�����㵽pCur��Ľ��
{
	PNode pTmp = (PNode)malloc(sizeof(struct Node));
	pTmp->data = val; pTmp->next = NULL;  //��val����һ�����

	if (NULL == pTmp)
	{
		printf("�������ʧ�ܣ�\n");
	}
	PNode pCur = ph->next;
	if (NULL == ph)		//������
	{
		pCur->pre = NULL;
		pCur->next = NULL;
		ph->next = pCur;
	}
	else if(0 == pos)  //���뵽��һ��λ��
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

int Delecte(PHead ph, int val)			//ɾ��ĳֵ
{
	if ( (ph == NULL) || (ph->length = 0))
	{
		printf("ͷ������");
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

PNode Search(PHead ph, int val)			//����ĳֵ
{
	if ((ph == NULL)|| (ph->length == 0))
	{
		printf("ͷ���Ϊ�գ�");
	}
	PNode pTmp = ph->next;
	do
	{
		if (pTmp->data == val)
		{
			printf("���ҵ���\n");
			return pTmp;
		}
		pTmp = pTmp->next;
	} while (pTmp->next != NULL);
	printf("û���ҵ���\n");
	return 0;
}

int print(PHead ph)			//�����ӡ
{
	if (NULL == ph)
	{
		printf("ͷ���Ϊ�գ�");
	}
	PNode pTmp = ph->next;
	while (pTmp->next != NULL)
	{
		printf("%d ", pTmp->data);
		pTmp = pTmp->next;
	}
	printf("\n");
}

//�����ӡ ���Ƚ�ָ���ƶ�����β ��������ǰ��ӡ

int Destory(PHead ph)			//����˫����
{
	if (NULL == ph)
	{
		printf("ͷ���Ϊ�գ�");
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
	printf("��ӡ˫����");
	print(List);

	printf("������Ҫɾ����Ԫ�أ�");
	int sum = 0;
	scanf("%d", sum);
	int ret = Delecte(List, sum);
	if (ret)
	{
		printf("ɾ���ɹ���\n");
		printf("ɾ����˫����Ϊ��");
		print(List);
	}
	else
		printf("ɾ��ʧ�ܣ�");

	system("pause");
	return 0;
}