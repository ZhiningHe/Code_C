#include"game.h"



void init(char show[ROW][COL], char mine[ROW][COL], int row, int col)//初始化两个阵
{
	int i = 0;
	int j = 0;
	for (int i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			show[i][j] = '*';
			mine[i][j] = '0';
		}
	}
}

void print_player(char show[ROW][COL], char mine[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i <row - 1; i++)
	{
		printf("%d ", i);//打印横标（0--10）
	}
	printf("\n");
	for (i = 1; i <row - 2; i++)//打印竖标（1--10）
	{
		printf("%d  ", i);
		for (j = 1; j < col - 1; j++)
		{
			printf("%c ", show[i][j]);//玩家棋盘数组
		}
		printf("\n");
	}
	printf("10 ");//开始打印最后一行
	for (i = 1; i < row - 1; i++)
	{
		printf("%c ", show[10][i]);
	}
	printf("\n");
}

void print_mine(char mine[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i <row - 1; i++)
	{
		printf("%d ", i);//打印横标（0--10）
	}
	printf("\n");
	for (i = 1; i <row - 2; i++)//打印竖标（1--10）
	{
		printf("%d  ", i);
		for (j = 1; j < col - 1; j++)
		{
			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}
	printf("10 ");//开始打印最后一行
	for (i = 1; i < row - 1; i++)
	{
		printf("%c ", mine[10][i]);
	}
	printf("\n");
}


int count_mine(int x, int y)//检测周围8个区域雷的个数
{
	int count = 0;
	if (mine[x - 1][y - 1] == '1')
		count++;
	if (mine[x - 1][y] == '1')
		count++;
	if (mine[x - 1][y + 1] == '1')
		count++;
	if (mine[x][y - 1] == '1')
		count++;
	if (mine[x][y + 1] == '1')
		count++;
	if (mine[x + 1][y - 1] == '1')
		count++;
	if (mine[x + 1][y] == '1')
		count++;
	if (mine[x + 1][y + 1] == '1')
		count++;
	return count;
}


int player(char show[ROW][COL],int row, int col)
{
	int x = 0, y = 0;
	printf("请输入坐标：>");
	scanf("%d %d", &x, &y);
	while (1)
	{
		if ((x >= 1 && x <= 10) && (y >= 1 && y <= 10))//判断输入坐标是否有误

		{
			if (mine[x][y] == '0')//没踩到雷
			{
				char ch = count_mine(x, y);
				show[x][y] = ch + '0';//数字对应的ASCII值和数字字符对应的ASCII值相差48，即'0'的ASCII值
				open_mine(show[ROW][COL], mine[ROW][COL], row, col, x, y);//展开
				print_player(show[ROW][COL], row, col);

				if (count_show_mine(show[ROW][COL], mine[ROW][COL], row, col) == COUNT)//判断剩余未知区域的个数，个数为雷数时玩家赢
				{
					print_mine( mine[ROW][COL], row, col);
					printf("玩家赢！>\n");
					break;
				}
			}
			else if (mine[x][y] == '1')//踩到雷
			{
				return 1;
			}

		}

		else
		{
			printf("输入错误重新输入\n");
		}
		return 0;//没踩到雷
	}
}

void set_min(char mine[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = COUNT;//雷总数
	while (count)//雷布完后跳出循环
	{
		int x = rand() % 10 + 1;//产生1到10的随机数
		int y = rand() % 10 + 1;
		if (mine[x][y] == '0')//找不是雷的地方布雷
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

void open_mine(char mine[ROW][COL], int row, int col,int x, int y)//坐标周围展开函数
{
	if (mine[x - 1][y - 1] == '0')
	{
		show[x - 1][y - 1] = count_mine(x - 1, y - 1) + '0';//显示该坐标周围雷数
	}
	if (mine[x - 1][y] == '0')
	{
		show[x - 1][y] = count_mine(x - 1, y) + '0';//显示该坐标周围雷数
	}
	if (mine[x - 1][y + 1] == '0')
	{
		show[x - 1][y + 1] = count_mine(x - 1, y + 1) + '0';//显示该坐标周围雷数
	}
	if (mine[x][y - 1] == '0')
	{
		show[x][y - 1] = count_mine(x, y - 1) + '0';//显示该坐标周围雷数
	}
	if (mine[x][y + 1] == '0')
	{
		show[x][y + 1] = count_mine(x, y + 1) + '0';//显示该坐标周围雷数
	}
	if (mine[x + 1][y - 1] == '0')
	{
		show[x + 1][y - 1] = count_mine(x + 1, y - 1) + '0';//显示该坐标周围雷数
	}
	if (mine[x + 1][y] == '0')
	{
		show[x + 1][y] = count_mine(x + 1, y) + '0';//显示该坐标周围雷数
	}
	if (mine[x + 1][y + 1] == '0')
	{
		show[x + 1][y + 1] = count_mine(x + 1, y + 1) + '0';//显示该坐标周围雷数
	}
}

int count_show_mine(char mine[ROW][COL], int row, int col)
//判断剩余未知区域的个数，个数为雷数时玩家赢
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i <= row - 2; i++)
	{
		for (j = 1; j <= col - 2; j++)
		{
			if (show[i][j] == '*')
			{
				count++;
			}
		}

	}
	return count;
}



int game()
{
	srand((unsigned int)time(0));
	char show[ROW][COL] = { 0 };
	char mine[ROW][COL] = { 0 }; 
	int x = 0, y = 0;
	int row = ROW, col = COL;
	init(show[ROW][COL], mine[ROW][COL], row, col);//初始化雷阵
	print_player(show[ROW][COL], mine[ROW][COL], row, col);
	printf("请输入坐标：>");
	scanf("%d %d", &x, &y);
	show[x][y] = 0;//第一步不会炸死
	print_player(show[ROW][COL], mine[ROW][COL], row, col);//输出棋盘
	set_min(mine[ROW][COL],  row, col);//放雷
	int ret = player(show[ROW][COL], row, col);//玩家走并判断
	if (ret )
	{
		printf("很遗憾，你被'炸死'了\n");
	}
	else
	{
		player(show[ROW][COL], row, col);
	}
	return 1;
}