#include "clist.h"

phead Creat()
{
	phead ph = (phead)malloc(sizeof(phead));
	ph->length = 0;
	ph->next = NULL;

	return ph;
}

int Init(phead ph, int pos, int value)
{
	pnode pva = (pnode)malloc(sizeof(Head));
	pva->data = value;
	pva->next = NULL;
	if (pva = NULL)
	{
		printf("��㴴������\n");
	}
	if (pos<0 || pos>ph->length)
	{
		printf("����λ������\n");
	}

	if (pos == 1 || ph->length == 0)//���뵽��һλ
	{
		pnode plast;
		while (plast->next != ph->next)//��plastָ��ָ��ѭ�������һ�������һ��
		{
			plast = plast->next;
		}

		pnode pcur = ph->next;
		pva->next = pcur;
		ph->next = pva;
		plast->next = pva;
		ph->length++;
		return 1;
	}
	else
	{
		pnode pcur = ph->next;
		for (int i = 1; i < pos-1; i++)
		{
			pcur = pcur->next;
		}
		pva->next = pcur->next;
		pcur->next = pva;
		ph->length++;
		return 1;
	}
	return 0;
}

int Delete(phead ph, int pos, int value)
{
	phead ph = (phead)malloc(sizeof(Head));
	ph->length = 0;
	ph->next = NULL;

	return ph;
}

int Init(phead ph, int pos)
{
	if (pos<0 || pos>ph->length)
	{
		printf("ɾ��λ������\n");
	}
	if (ph->length == 0) 
	{

	}
	if (pos == 1 )//ɾ������һλ
	{
		pnode plast;
		while (plast->next != ph->next)//��plastָ��ָ��ѭ�������һ�������һ��
		{
			plast = plast->next;
		}
		ph->next = ph->next->next;
		plast->next = ph->next;
		ph->length--;
		return 1;
	}
	else
	{
		pnode pcur = ph->next;
		for (int i = 1; i < pos-1; i++)
		{
			pcur = pcur->next;
		}
		pcur->next = pcur->next->next;
		ph->length--;
		return 1;
	}
	return 0;
}