
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

		printf("请选择：>\n");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("<游戏已退出！>\n");
			break;
		default:
			printf("选择错误，请重新输入：>\n");
			break;
		}
	}


	system("pause");
	return 0;
}