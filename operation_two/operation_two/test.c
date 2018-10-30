#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//unsigned int reverse_bit(unsigned int value)
//{
//	int arr[40] = { 0 }; unsigned int num = 0;
//	printf("%d翻转二进制之后的二进制：\n",value);
//	for (int i = 0; i < 32; i++)//翻转二进制之后的二进制
//	{
//		arr[i] = (value >> i) & 1;
//		printf("%d ", arr[i]);
//	}
//	for (int i = 0; i < 32; i++)//十进制转二进制
//	{
//		num = 2 * num + arr[i];
//	}
//	return num;
//}
//
//int main()
//{
//	unsigned int value = 24;
//	int num = reverse_bit(value);
//	printf("\n转换为十进制为：\n");
//	printf("%d", num);
//
//	system("pause");
//	return 0;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//不用（a+b）/2求均值
//float mean(int a, int b)
//{
//	float c = 0.0;
//	c = a + (b - a) / 2.0;
//	return c;
//
//	//return a&b + ((a^b) >> 1);
//}
//
//int main()
//{
//	int a = 9, b = 14;
//	printf("%d 和 %d 的平均值为 %f", a, b, mean(a, b));
//
//	system("pause");
//	return 0;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//只有一个出现一次的数
//int main()
//{
//	int arr[] = { 2, 4, 2, 5, 4, 6, 5, 8, 6 };
//	int ret = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 1; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("出现一次的数为：%d", ret);
//
//	system("pause");
//	return 0;
//}

//两个出现一次的数
//int find(int arr[], int sz, int *pnum1, int*pnum2)
//{
//	int ret = 0;
//	for (int i = 1; i < sz; i++)
//	{
//		ret ^= arr[i];//ret为num1和num2异或的结果
//	}
//	int pos = 0;
//	while (((ret >> pos) & 1) != 1)//找出不同的第pos位
//	{
//		pos++;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> pos) & 1 == 1)//分成两组
//		{
//			*pnum1 ^= arr[i];//不一样的bite位上是1的
//		}
//		else
//		{
//			*pnum2 ^= arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 2, 4, 2, 5, 4, 5, 8, 6 };
//	int ret = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num1 = 0, num2 = 0;
//	find(arr, sz, &num1, &num2);
//	printf("出现一次的数为：%d,%d", num1,num2);
//
//	system("pause");
//	return 0;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//将单词倒置
//void reverse(char str[], int begin, int end)
//{
//	while (begin < end)
//	{
//		char temp = str[begin];
//		str[begin] = str[end];
//		str[end] = temp;
//		begin++; end--;
//	}
//}
//
//int main()
//{
//	int i = 0,j =0, length = 0;
//	char str[] = "student a am i";
//	while (str[length++]!='\0')
//		;
//	reverse(str, 0, length);//先把整个数组倒置
//	for (i = 0; i < length; i++)
//	{
//		if (str[i] == ' ')
//		{
//			reverse(str, j, i);//每个单词倒置回来
//			j = i + 1;
//		}
//	}
//	for (i = 0; i < length; i++)//输出数组
//	{
//		printf("%c", str[i]);
//	}
//	system("pause");
//	return 0;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~