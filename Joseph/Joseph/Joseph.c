#include "clist.h"

int main()
{
	int man = 0; int n = 0;
	printf("����Լɪ�򻷵�����\n");
	scanf("%d", man);
	printf("����ڼ���������\n");
	scanf("%d", n);
	phead ph = Creat();
	printf("���������Ҫ�����Ԫ�أ�\n");
	for (int i = 0; i < man;i++)
	{
		int num = 0;
		printf("������Ԫ�أ�\n");
		scanf("%d", num);
		int Re = Init(ph, 0, num);
		if (Re == 0)
		{
			printf("����ʧ�ܣ�\n");
		}
		else
		{
			printf("����ɹ�!��������һ��>:\n");
		}
	}
	pnode pcur = ph->next;
	while (man != 1)
	{
		for (int i = 0; i < n-1; i++)
		{
			pcur = pcur->next;
		}
		pnode ptmp = pcur->next;
		pcur->next = pcur->next->next;
		free(ptmp);//ɾ����n��Ԫ��

		pcur = pcur->next;
	}
	printf("���ʣ��%d\n", pcur->data);

	system("pause");
	return 0;
}