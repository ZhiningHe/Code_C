#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//递归练习题

//递归实现斐波那契数
int fun(int n)
{
	if (1 == n || 2 == n)
	{
		return 1;
	}
	else
	{
		return fun(n - 1) + fun(n - 2);
	}
}

//递归实现n^k
int fun(int n, int k)
{
	if (0 == k)
	{
		return 1;
	}
	else
	{
		return n*fun(n, k - 1);
	}
}//先不考虑k>=0


//176  return 1+7+6=14
unsigned int fun(unsigned int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		return (n % 10) + fun(n / 10);
	}
}

//将字符串反向排序
int arr[20] = { 0 };
int fun(int *arr)
{
	int sz = strlen(arr);
	char tmp = arr[0];
	arr[0] = arr[sz-1];
	arr[sz-1] = '\0';
	if (strlen(arr+1) > 1)
	{
		fun(arr+1);
	}
	arr[sz-1] = tmp;
}

//实现strlen
int MyStrlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + MyStrlen(str);
	}
}

//n!
int fun(int n)
{
	if (n < 0)
		return -1;
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*fun(n - 1);
	}
}

//求整数的每一位
int fun(int n)
{
	if (n > 0||n<10)
	{
		fun(n / 10);
		return n%10;
	}
	
}