
#include"game.h"

int main()
{
	int input = 1;
	while (input)
	{
		printf("##############################\n");
		printf("#########   1. play   ########\n");
		printf("#########   0. exit   ########\n");
		printf("##############################\n");

		printf("��ѡ��>\n");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("<��Ϸ���˳���>\n");
			break;
		default:
			printf("ѡ��������������룺>\n");
			break;
		}
	}


	system("pause");
	return 0;
}