#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while(value)
//	{
//		if (value&1)
//			count++;
//		value>>=1 ;
//	}
//	return count;
//}
//
//int main()
//{
//	unsigned int value = 15;
//	int ret = count_one_bits(value);
//	printf("%d二进制里1的个数为%d。\n", value,ret);
//	system("pause");
//	return 0;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//void print(int arr[])
//{
//	for (int i = 0; i < 16; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//int count_bits(int num)
//{
//	int a[20] = { 0 };
//	int b[20] = { 0 };
//	int arr[40] = { 0 };
//
//	for (int i = 0, j = 0; j < 32; i++, j ++)
//	{
//		arr[31 - i] = (num >> j) & 1;
//	}
//	printf("二进制位为：\n");
//	for (int i = 0; i < 32; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//
//	for (int i = 0, j = 0; j < 32; i++, j += 2)
//	{
//		a[15 - i] = (num >> j) & 1;
//	}
//	printf("偶数位为：\n");
//	print(a);
//
//	for (int i = 0, j = 1; j < 32; i++, j += 2)
//	{
//		b[15 - i] = (num >> j) & 1;
//	}
//	printf("奇数位为：\n");
//	print(b);
//}
//
//int main()
//{
//	int num = 15;
//	count_bits( num);
//	system("pause");
//	return 0;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void print(int arr[])
{
			printf("二进制位为：\n");
			for (int i = 0; i < 32; i++)
			{
				printf("%d", arr[i]);
			}
			printf("\n");
}

int cmp_bits(n1,n2)
{
	int a[40] = { 0 };
	int b[40] = { 0 };

	for (int i = 0, j = 0; j < 32; i++, j++)
	{
		a[31 - i] = (n1 >> j) & 1;
	}

	for (int i = 0, j = 0; j < 32; i++, j++)
	{
		b[31 - i] = (n2 >> j) & 1;
	}
	printf("n1:");
	print(a);
	printf("n2:");
	print(b);
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (a[i] != b[i])
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n1 = 1999, n2 = 2299;
	int ret = cmp_bits(n1, n2);
	printf("有%d位不一样", ret);
	system("pause");
	return 0;
}
