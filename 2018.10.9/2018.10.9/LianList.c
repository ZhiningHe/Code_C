#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct Node					//������
{
	int data;
	struct Node* next;
}Node,List;

typedef struct Header			//����ͷ���
{
	int length;
	Node* next;
}pHead;


pHead* Create()						//��������ʼ����ͷ�ڵ�
{
	pHead* pH = (pHead*)malloc(sizeof(pHead));
	
	pH->length = 0;
	pH->next = NULL;
	return pH;
}

int Insert(pHead* pH, int pos, int val)				//����Ԫ��
//����Ϊ ͷ�ڵ㡢����λ�á�����Ԫ��
{

	List* pval = (List*)malloc(sizeof(List));
	pval->data = val;
	List* pCur = pH->next;//����һ��ָ��

	if (pos == 0)
	{
		pH->next = pval;
		pval->next = pCur;
	}
	else
	{
		for (int i = 1; i <= pos; i++)//�ҵ�λ��
		{
			pCur = pCur->next;
		}

		pval->next = pCur->next;
		pCur->next = pval;
	}

		pH->length++;
		return 1;//����ɹ�
}


List* Delete(pHead* pH, int pos)					//ɾ�����
{//����Ϊ ͷ�ڵ㡢ɾ��λ��
	if (NULL == pH || pos < 0 || pos >= pH->length)
	{
		printf("��Ϣ�������");

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
		for (int i = 0; i < pos; i++)//�ҵ�λ��
		{
			pCur = pRe->next;
			pRe->next = pCur->next;
			pH->length--;
			return pCur;
		}
	}
}

List* Search(pHead* pH, int val)							//����Ԫ��
{
	if (NULL == pH)
	{
		printf("��Ϣ�������");

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
	printf("û���ҵ���");
}


int print(pHead* pH)								//��ӡ����
{
	if (NULL == pH)
	{
		printf("��Ϣ�������");

	}
	List* pTemp = pH->next;
	while (pTemp->next != NULL)
	{
		printf("%d ", pTemp->data);
		pTemp = pTemp->next;
	}
	printf("\n");
}

void Destory (pHead* pH)							//��������
{
	if (NULL == pH)
	{
		printf("��Ϣ�������");
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

int Len(pHead* pH)								//��������
{
	if (NULL == pH)
	{
		printf("��Ϣ�������");

	}
	return pH->length;
}


int main()
{
	pHead* ph = Create();

	int arr[10] = { 1,45,33,67,34,55,8,7,93,44 };

	for (int i = 0;  i <= 8; i++)
	{
		Insert(ph, 0, arr[i]);//ÿ�ζ���ͷ������
	}
	printf("������Ϊ��%d\n", ph->length-1);
	printf("����Ԫ��Ϊ:\n");
	print(ph);
	printf("\n������Ҫɾ����Ԫ��λ�ã�");
	int num = 0;
	scanf("%d", &num);
	Delete(ph, num);
	printf("\nɾ���������Ϊ:");
	print(ph);

	printf("\n������Ҫ���ҵ�Ԫ�أ�");
	scanf("%d", &num);
	List* ret;
	ret = Search(ph, num);
	if (ret)
	{
		printf("�ҵ���");
	}

	system("pause");
	return 0;
}