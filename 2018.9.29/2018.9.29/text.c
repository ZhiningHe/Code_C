#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ѡ������
//
//int main()
//{
//	int arr[] = { 3,6,5,23,4,2,7,8 };
//	int i, j, p = 0;
//    int len = sizeof(arr) / sizeof(arr[0]) ;
//
//	for (i = 0; i < len - 1; i++)
//	{
//		int min = arr[i];
//		for (j = i + 1; j < len ; j++)
//		{
//		
//			if (arr[j] < min)
//			{
//				p = min;  min = arr[j];  arr[j] = p;
//			}
//		}
//	 arr[i] = min;
//	}
//		printf("����֮��������ǣ�\n");
//		for (i = 0; i < len; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	system("pause");
//	return 0;
//}

//��������ð��
// 
//int main()
//{
//	int arr[] = { 2,5,3,1,6,7,4,3,9,0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0, j = 0, p = 0;
//
//	for (i = 0; i < len-1; i++ )   //ɨ��len-1��
//	{
//		for (j = 0; j < len-1-i; j++)   //ÿ�αȽϵ���㲻ͬ
//		{
//			if (arr[j] > arr[j + 1])   //�Ƚ�����������
//			{
//				p = arr[j];   arr[j] = arr[j + 1];   arr[j + 1] = p;
//			}
//
//		}
//
//	}
//
//	printf("����֮��������ǣ�\n");
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	system("pause");
//	return 0;
//}

//��������ð��
//
//int main()
//{
//	int arr[] = { 2,5,3,1,6,7,4,3,9,0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0, j = 0, p = 0;
//
//	for (i = len-1; i >= 0; i--)   //ɨ��len-1��
//	{
//		for (j = len - 1 - i; j >= 0; j--)   //ÿ�αȽϵ���㲻ͬ
//		{
//			if (arr[j] < arr[j - 1])   //�Ƚ�����������
//			{
//				p = arr[j];   arr[j] = arr[j - 1];   arr[j - 1] = p;
//			}
//
//		}
//
//	}
//
//	printf("����֮��������ǣ�\n");
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	system("pause");
//	return 0;
//}

//��ָ��ʵ��strcmp��������

//int my_strcmp(char *a, char *b);
//
//int main()
//{
//	char str1[] = "visual";
//	char str2[] = "studio";
//	char *p1 = str1, *p2 = str2;
//
//	printf("%d", my_strcmp(str1, str2));
//	system("pause");
//	return 0;
//}
//
//
//int my_strcmp(char *a, char *b)
//{
//	while (*a != '\0' && *b != '\0')
//	{
//		int ret = *a - *b;
//		if (0 == ret)
//		{
//			*a++; *b++;
//		}
//		else
//		{
//			return ret;
//			break;
//		}
//		return ret;
//	}
//
//}