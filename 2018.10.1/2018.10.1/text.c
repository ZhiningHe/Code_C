#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



//�ݹ���׳�

//static int f(int n) 
//	{
//		if (n == 1)   // �ݹ���ֹ���� 
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

//�жϻ�����

int fun(long n)
{
	int len = 0; int ret = 1; 
	int i = 0, j = 0, k = 0;
	int left, right;
	while (n == 0)  //��n��λ��
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
	printf("����һ��С��6λ�����֣�\n");
	scanf("%ld", &num);

	int result = fun(num);

	if (1 == result)
	{
		printf("������ǻ�������\n");
	}
	else if (0 == result)
	{
		printf("��������ǻ�������\n");
	}

	system("pause");
	return 0;

}