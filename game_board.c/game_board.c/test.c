#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


int main()
{
	int input = 0;

	do 
	{
		menu();
		printf("��ѡ��>:\n");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("ѡ������������ѡ��>:\n");
			break;

		}

	} while (input);
	printf("�˳���Ϸ����Ϸ������");
	system("pause");
	return 0;
}