#include "clist.h"

int main()
{
	int man = 0; int n = 0;
	printf("输入约瑟夫环的数：\n");
	scanf("%d", man);
	printf("输入第几个数出局\n");
	scanf("%d", n);
	phead ph = Creat();
	printf("请逐个输入要插入的元素：\n");
	for (int i = 0; i < man;i++)
	{
		int num = 0;
		printf("请输入元素：\n");
		scanf("%d", num);
		int Re = Init(ph, 0, num);
		if (Re == 0)
		{
			printf("插入失败！\n");
		}
		else
		{
			printf("插入成功!请输入下一个>:\n");
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
		free(ptmp);//删除第n个元素

		pcur = pcur->next;
	}
	printf("最后剩下%d\n", pcur->data);

	system("pause");
	return 0;
}