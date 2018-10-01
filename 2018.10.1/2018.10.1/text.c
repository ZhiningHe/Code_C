#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



//递归求阶乘

//static int f(int n) 
//	{
//		if (n == 1)   // 递归终止条件 
//			return 1;   
//
//		return n*f(n - 1);  
//	}
//
//
//int main()
//
//{
//	printf("5! = %d", f(5));
//
//	system("pause");
//	return 0;
//}

//判断回文数

int fun(long n)
{
	int len = 0; int ret = 1; 
	int i = 0, j = 0, k = 0;
	int left, right;
	while (n == 0)  //求n的位数
	{
		n %= 10;
		n /= 10;
		len++;
	}
	for (i = 1; i < len / 2; i++)
	{
		for (j = 0; j < len - i; j++)
		{
			left = n / 10;
		}
		for (k = 0; k < i; k++)
		{
			right = n % 10;
		}
		if ((left == i) && (right == 1))
		{
			continue;
		}
		else
		{
			ret = 0;
			break;
		}
	}
	return ret;
}

int main()
{
	long num;
	printf("输入一个小于6位的数字：\n");
	scanf("%ld", &num);

	int result = fun(num);

	if (1 == result)
	{
		printf("这个数是回文数！\n");
	}
	else if (0 == result)
	{
		printf("这个数不是回文数！\n");
	}

	system("pause");
	return 0;

}