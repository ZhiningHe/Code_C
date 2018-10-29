#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int len(int num)
{
	int count = 0;
	while (num)
	{
		num /= 10;
		count++;
	}
	return count;
}

int main()
{
	int i = 0, j = 0;
	int a = 58, b = 213;
	int arr[20][20] = { 0 };
	if (len(a) > len(b))//保证b的位数比a多
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	while (a)
	{
		int c = a % 10 * b;
		for (int k = 0; k < len(c); k++)
		{
			arr[i][j] = (c / (10sqrt(len(c) - 1 - i))) % 10;
		}
	}
}