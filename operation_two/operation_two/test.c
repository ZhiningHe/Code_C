#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//unsigned int reverse_bit(unsigned int value)
//{
//	int arr[40] = { 0 }; unsigned int num = 0;
//	printf("%d��ת������֮��Ķ����ƣ�\n",value);
//	for (int i = 0; i < 32; i++)//��ת������֮��Ķ�����
//	{
//		arr[i] = (value >> i) & 1;
//		printf("%d ", arr[i]);
//	}
//	for (int i = 0; i < 32; i++)//ʮ����ת������
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
//	printf("\nת��Ϊʮ����Ϊ��\n");
//	printf("%d", num);
//
//	system("pause");
//	return 0;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//���ã�a+b��/2���ֵ
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
//	printf("%d �� %d ��ƽ��ֵΪ %f", a, b, mean(a, b));
//
//	system("pause");
//	return 0;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//ֻ��һ������һ�ε���
//int main()
//{
//	int arr[] = { 2, 4, 2, 5, 4, 6, 5, 8, 6 };
//	int ret = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 1; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("����һ�ε���Ϊ��%d", ret);
//
//	system("pause");
//	return 0;
//}

//��������һ�ε���
//int find(int arr[], int sz, int *pnum1, int*pnum2)
//{
//	int ret = 0;
//	for (int i = 1; i < sz; i++)
//	{
//		ret ^= arr[i];//retΪnum1��num2���Ľ��
//	}
//	int pos = 0;
//	while (((ret >> pos) & 1) != 1)//�ҳ���ͬ�ĵ�posλ
//	{
//		pos++;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> pos) & 1 == 1)//�ֳ�����
//		{
//			*pnum1 ^= arr[i];//��һ����biteλ����1��
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
//	printf("����һ�ε���Ϊ��%d,%d", num1,num2);
//
//	system("pause");
//	return 0;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//�����ʵ���
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
//	reverse(str, 0, length);//�Ȱ��������鵹��
//	for (i = 0; i < length; i++)
//	{
//		if (str[i] == ' ')
//		{
//			reverse(str, j, i);//ÿ�����ʵ��û���
//			j = i + 1;
//		}
//	}
//	for (i = 0; i < length; i++)//�������
//	{
//		printf("%c", str[i]);
//	}
//	system("pause");
//	return 0;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~