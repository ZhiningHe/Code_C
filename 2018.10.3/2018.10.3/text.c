#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����������Ԫ��

//int main()
//{
//	int arr[5] = { 0,1,2,3,4 };
//	int i = 0;
//	for (i = 4; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	system("pause");
//	return 0;
//}

//���������

int main()
{
	int a[100][100] = { 0 }; int i = 0, j = 0, n = 0;

	while (n<1 || n>100)

	{
		printf("��������������ε�����:");

		scanf("%d", &n);

	}


		for (i = 1; i < n; i++)
		{
			a[i][0] = 1;
			for (j = 1; j <= i; j++)
			{
					a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
		}

        for (i = 1; i < n; i++)
       {
			for (j = 1; j <= i; j++)
			{
				printf("%5d", a[i][j]);
			}
			printf("\n");
		}

	system("pause");
	return 0;
}

//main()
//
//{
//	int i, j, n = 0, a[17][17] = { 0 };
//
	//while (n<1 || n>16)

	//{
	//	printf("��������������ε�����:");

	//	scanf("%d", &n);

	//}

//	for (i = 0; i<n; i++)
//
//		a[i][0] = 1; /*��һ��ȫ��Ϊһ*/
//
//	for (i = 1; i<n; i++)
//
//		for (j = 1; j <= i; j++)
//
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];/*ÿ��������������֮��*/
//
//
//	for (i = 0; i<n; i++) /*����������*/
//
//	{
//		for (j = 0; j <= i; j++)
//
//			printf("%5d", a[i][j]);
//
//		printf("\n");
//
//	}
//	system("pause");
//	return 0;
//}
