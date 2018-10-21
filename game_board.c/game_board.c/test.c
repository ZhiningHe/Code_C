#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


int main()
{
	int input = 0;

	do 
	{
		menu();
		printf("请选择>:\n");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("选择有误，请重新选择>:\n");
			break;

		}

	} while (input);
	printf("退出游戏，游戏结束！");
	system("pause");
	return 0;
}