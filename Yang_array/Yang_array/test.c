#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 3

void Yang_array(int arr[N][N], int value)
{
	int i = 0, j = N - 1;
	while ((i <= N - 1) && (j >= 0))
	{
		if ((value<arr[0][0]) || (value>arr[N - 1][N - 1]))
		{
			printf("没有找到！\n");
			break;
		}
		if (value > arr[i][j])
		{
			i++;
		}
		else if (value < arr[i][j])
		{
			j--;
		}
		else if (value == arr[i][j])
		{
			printf("%d的下标为%d，%d \n", value, i, j);
			break;
		}
		else
		{
			printf("没有找到！\n");
			break;
		}
	}
}

int main()
{
	int arr[N][N] = { 1, 3, 4, 2, 3, 4,3, 4, 5 };
	Yang_array(arr, 2);

	system("pause");
	return 0;
}