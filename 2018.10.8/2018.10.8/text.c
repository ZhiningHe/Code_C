#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

	struct list
	{
		int data;
		struct list *next;
	};							  //����һ���ڵ�Ľṹ��
	
	typedef struct list node;		//������Ϊnode
	typedef node *link;			


	int main()
	{
		link ptr , head;				//ͷ�ڵ�
		int num = 0, i = 0;
		head = (link)malloc(sizeof(node));
		ptr = (link)malloc(sizeof(node));	//����link�����ڴ�
		ptr = head;

		printf("please input 5 number:\n");
		for (i = 0; i <= 4; i++)			//������ֵ
		{
			printf("please input number:\n");
			num = 0;
			scanf("%d", &num);
			ptr->data = num;
			ptr->next = (link)malloc(sizeof(node));
			if (i == 4)
			{
				ptr->next = NULL;
			}
			else
			{
				ptr = ptr->next;
			}
		}

			ptr = head;
			printf("The value is :");
			while (ptr != NULL)
			{
				printf("%d ", ptr->data);
				ptr = ptr->next;
			}
		
		system("pause");
		return 0;
	}