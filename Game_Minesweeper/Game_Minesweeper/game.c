#include"game.h"



void init(char show[ROW][COL], char mine[ROW][COL], int row, int col)//��ʼ��������
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
		printf("%d ", i);//��ӡ��꣨0--10��
	}
	printf("\n");
	for (i = 1; i <row - 2; i++)//��ӡ���꣨1--10��
	{
		printf("%d  ", i);
		for (j = 1; j < col - 1; j++)
		{
			printf("%c ", show[i][j]);//�����������
		}
		printf("\n");
	}
	printf("10 ");//��ʼ��ӡ���һ��
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
		printf("%d ", i);//��ӡ��꣨0--10��
	}
	printf("\n");
	for (i = 1; i <row - 2; i++)//��ӡ���꣨1--10��
	{
		printf("%d  ", i);
		for (j = 1; j < col - 1; j++)
		{
			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}
	printf("10 ");//��ʼ��ӡ���һ��
	for (i = 1; i < row - 1; i++)
	{
		printf("%c ", mine[10][i]);
	}
	printf("\n");
}


int count_mine(int x, int y)//�����Χ8�������׵ĸ���
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
	printf("���������꣺>");
	scanf("%d %d", &x, &y);
	while (1)
	{
		if ((x >= 1 && x <= 10) && (y >= 1 && y <= 10))//�ж����������Ƿ�����

		{
			if (mine[x][y] == '0')//û�ȵ���
			{
				char ch = count_mine(x, y);
				show[x][y] = ch + '0';//���ֶ�Ӧ��ASCIIֵ�������ַ���Ӧ��ASCIIֵ���48����'0'��ASCIIֵ
				open_mine(show[ROW][COL], mine[ROW][COL], row, col, x, y);//չ��
				print_player(show[ROW][COL], row, col);

				if (count_show_mine(show[ROW][COL], mine[ROW][COL], row, col) == COUNT)//�ж�ʣ��δ֪����ĸ���������Ϊ����ʱ���Ӯ
				{
					print_mine( mine[ROW][COL], row, col);
					printf("���Ӯ��>\n");
					break;
				}
			}
			else if (mine[x][y] == '1')//�ȵ���
			{
				return 1;
			}

		}

		else
		{
			printf("���������������\n");
		}
		return 0;//û�ȵ���
	}
}

void set_min(char mine[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = COUNT;//������
	while (count)//�ײ��������ѭ��
	{
		int x = rand() % 10 + 1;//����1��10�������
		int y = rand() % 10 + 1;
		if (mine[x][y] == '0')//�Ҳ����׵ĵط�����
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

void open_mine(char mine[ROW][COL], int row, int col,int x, int y)//������Χչ������
{
	if (mine[x - 1][y - 1] == '0')
	{
		show[x - 1][y - 1] = count_mine(x - 1, y - 1) + '0';//��ʾ��������Χ����
	}
	if (mine[x - 1][y] == '0')
	{
		show[x - 1][y] = count_mine(x - 1, y) + '0';//��ʾ��������Χ����
	}
	if (mine[x - 1][y + 1] == '0')
	{
		show[x - 1][y + 1] = count_mine(x - 1, y + 1) + '0';//��ʾ��������Χ����
	}
	if (mine[x][y - 1] == '0')
	{
		show[x][y - 1] = count_mine(x, y - 1) + '0';//��ʾ��������Χ����
	}
	if (mine[x][y + 1] == '0')
	{
		show[x][y + 1] = count_mine(x, y + 1) + '0';//��ʾ��������Χ����
	}
	if (mine[x + 1][y - 1] == '0')
	{
		show[x + 1][y - 1] = count_mine(x + 1, y - 1) + '0';//��ʾ��������Χ����
	}
	if (mine[x + 1][y] == '0')
	{
		show[x + 1][y] = count_mine(x + 1, y) + '0';//��ʾ��������Χ����
	}
	if (mine[x + 1][y + 1] == '0')
	{
		show[x + 1][y + 1] = count_mine(x + 1, y + 1) + '0';//��ʾ��������Χ����
	}
}

int count_show_mine(char mine[ROW][COL], int row, int col)
//�ж�ʣ��δ֪����ĸ���������Ϊ����ʱ���Ӯ
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
	init(show[ROW][COL], mine[ROW][COL], row, col);//��ʼ������
	print_player(show[ROW][COL], mine[ROW][COL], row, col);
	printf("���������꣺>");
	scanf("%d %d", &x, &y);
	show[x][y] = 0;//��һ������ը��
	print_player(show[ROW][COL], mine[ROW][COL], row, col);//�������
	set_min(mine[ROW][COL],  row, col);//����
	int ret = player(show[ROW][COL], row, col);//����߲��ж�
	if (ret )
	{
		printf("���ź����㱻'ը��'��\n");
	}
	else
	{
		player(show[ROW][COL], row, col);
	}
	return 1;
}