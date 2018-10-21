#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void menu()
  {
	printf("############################\n");
	printf("#######    1. paly   #######\n");
	printf("#######    0. exit   #######\n");
	printf("############################\n");
	}

void Create_board(char board[ROW][COL], int row, int col)
{
	memset(&board,' ',row*col*sizeof(board[0][0]));//把数组全部初始化成空格
}

void Print_board(char board[ROW][COL], int row, int col)
{
		for (int i = 0; i<row; i++)
		{
			for (int j = 0; j<col; j++)
			{
				printf(" %c ", board[i][j]);
				if (j<row - 1)
				{
					printf("|");
				}
			}
			printf("\n");
			if (i<row - 1)
			{
				for (int j = 0; j<col; j++)
				{
					printf("---");
					if (j<row - 1)
					{
						printf("|");
					}
				}
				printf("\n");
			}
		}
}

void Player(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x, y;
		printf("请玩家输入坐标>:\n");
		scanf("%d %d", &x, &y);
		if ((x > 0 && x <row) || y > 0 && y <col)
		{
			if (board[x][y] != ' ')
			{
				board[x][y] = 'X';
				break;
			}
			else
			{
				printf("坐标被占用，重新输入>:\n");
			}
		}
		printf("输入坐标有误，重新输入>:\n");
	}
}

void Compurter(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x, y;
		x = rand() % row;//产生0-（row-1）的随机数
		y = rand() % col;

		if (board[x][y] != ' ')
		{
			board[x][y] = '0';
			break;
		}
	}
}

int Full(char board[ROW][COL], int row, int col)//1表示满
{
	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0; 
			}
		}
	}
	return 1;
}

char Iswin(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)//判断行相等
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
		{
			return board[i][0];
			break;
		}
	}
	for (int i = 0; i<col; i++)//判断列相等
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	
	for (int i = 1; i < col; i++)//判断左对角线相等
	{
		static int count = 0;
		if (board[0][0] == board[i][i])
		{
			count++;
		}
		if (count == col - 1)
		{
			return board[0][0];
		}
	}
	for (int i = 0; i <row; i++)//判断右对角线相等
	{
		for (int j = col-1; j >=0; j--)
		{
			static int count = 0;
			if (board[0][col-1] == board[i][j])
			{
				count++;
			}
			if (count == col - 1)
			{
				return board[0][col - 1];
			}
		}
	}
	if (Full(board, ROW, COL))//平局
	{
		return -1;
	}
	return -2;
}



void game()
{
	srand((unsigned int)time(0));
	char board[ROW][COL] = {0};
	Create_board(board[ROW][COL], ROW, COL );
	Print_board(board[ROW][COL], ROW, COL);
	char ret;

	while (1)
	{
		Player(board[ROW][COL], ROW, COL);
		Print_board(board[ROW][COL], ROW, COL);
		ret =  Iswin(board[ROW][COL], ROW, COL);
		if ('-2' != ret)
		{
			break; 
		}

		compurter(board[ROW][COL], ROW ,COL);
		print_board(board[ROW][COL], ROW ,COL);
		ret = Iswin(board[ROW][COL], ROW, COL);
		if ('-2' != ret)
		{
			 break;
		}
	}
	if (ret == '-1')
	{
		printf("平局！");
	}
	else if ('X' == ret)
	{
		printf("恭喜你！你赢了>>\n");
	}
	else if ('0' == ret)
	{
		printf("很遗憾！你输了>>\n");
	}
}