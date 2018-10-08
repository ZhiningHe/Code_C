#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

	struct list
	{
		int data;
		struct list *next;
	};							  //定义一个节点的结构体
	
	typedef struct list node;		//重命名为node
	typedef node *link;			


	int main()
	{
		link ptr , head;				//头节点
		int num = 0, i = 0;
		head = (link)malloc(sizeof(node));
		ptr = (link)malloc(sizeof(node));	//开辟link类型内存
		ptr = head;

		printf("please input 5 number:\n");
		for (i = 0; i <= 4; i++)			//给链表赋值
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