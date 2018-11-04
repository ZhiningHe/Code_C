#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int length(int num)//输出数值的位数
{
	int i = 0;
	while (num)
	{
		num /= 10;
		i++;
	}
	return i;
}

void Multiplication(int a, int b, int an, int bn)  //格子乘法
{
	int n = 0; int i = an - 1;
	int arr[10][5] = { 0 }; //用来存放每一位相乘的结果
	int num[20] = { 0 };//用来保存对角线的和

	while (a)		//建立格子矩阵
	{
		int c = a % 10 * b;
		int lc = length(c);
		for (int j = lc - 1; j >= 0; j--)
		{
			arr[i][j] = c % 10;
			c /= 10;
		}
		i--;
		a /= 10;
	}

	printf("格子矩阵为：\n");
	for (int i = 0; i < an; i++)		//输出格子矩阵
	{
		for (int j = 0; j <= bn; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = an - 1, j = bn - 1; i >= 0; i--) //最右边一列为起点求对角线元素和
	{
		while (i < an)
		{
			num[n] += arr[i][j];
			i++; n++;
		}
	}
	for (int i = 0, j = bn - 1; j >= 0; j--)//最上边一行为起点求对角线元素和
	{
		while (i < an)
		{
			num[n] += arr[i][j];
			i++; n++;
		}
	}

	for (int i = 0, j = n; i>j; i++, j--)//倒序数组
	{
		int Tmp = num[i];
		num[i] = num[j];
		num[j] = Tmp;
	}

	printf("计算结果是：\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d", num[i]);
	}
	printf("\n");
}

int main()
{
	//int a = 58778853425466; int b = 247375829759213;
	int a = 0, b = 0, an = 0, bn = 0;
	printf("输入较长的一个乘数及它的长度,用空格分开：\n");
	scanf("%d %d", &a, &an);
	printf("输入另一个乘数：\n");
	scanf("%d %d", &b, &bn);
	Multiplication(a, b, an, bn);
	system("pause");
	return 0;
}






