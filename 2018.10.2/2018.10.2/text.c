#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 2

//��Խ���Ԫ��֮��
//main()
//{
//	int a[N][N], sum = 0;
//	int i, j;
//
//	printf("�������Ԫ�أ�\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
//
//	for (i = 0; i < N; i++)
//	{
//			sum = sum + a[i][i];
//	}
//	for (i = N - 1; i >= 0; i--)
//	{
//		sum += a[i][N - 1 - i];
//	}
//
//
//	printf("�Խ���֮�ͣ�%d", sum);
//	return 0;
//}

//��һ�������뵽����������
//int main()
//{
//	int a[20] = { 0,3,4,5,23,55,67,87,88,90 };
//	int num = 15;
//	int i = 0, j = 0, t = 0;
//
//	int len = sizeof(a) / sizeof(a[0]);
//	for (i = 0; i < len - 1; i++)
//	{
//		if (a[i] < num)
//		{
//			continue;
//		}
//		else
//		{
//			while (a[i] != ' ')
//			{
//				t = num; num = a[i]; a[i] = t;
//			}
//			break;
//		}
//	}
//	for (i = 0; i < len + 1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	
//	return 0;
//}