#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 1


//��������Ϸ
//
//void menu()
//{
//	printf("###############################\n");
//	printf("#######    * 1. play   ########\n");
//	printf("#######    * 0. exit   ########\n");
//	printf("###############################\n");
//}
//
//
//void game()
//{
//	int ture = rand() % 100 + 1;
//	int in_put = 0;
//	int ret = 1;
//
//	do
//	{
//		printf("������֣�");
//		scanf_s("%d", &in_put);
//		if (in_put > ture)
//			printf("�´��ˣ�\n");
//		else if (in_put < ture)
//			printf("��С�ˣ�\n");
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//
//	} while (ret);
//}
//
//
//int main()
//{   int in_put = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//	   menu();
//	   printf("��ѡ��");
//	   scanf_s("%d", &in_put);
//
//	   switch (in_put)
//	   {
//	   case 1:
//		  game(); break;
//	   case 0:
//		   break;
//	   default:
//		   printf("��������������롣");
//		   break;
//	   }
//	
//
//	} while (in_put);
//
//	return 0;
//}


//���ַ�����
//
//int search( int arr[], int key, int left,int  right)
//{
//	while (left <= right)
//	{
//		int mid = left + (right - left);
//		if (key < arr[mid])
//			right = mid - 1;
//		else if (key > arr[mid])
//			left = mid + 1;
//		else
//		
//			return mid;
//	
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 0,2,3,5,7,9,12,34,55,56,88}; int key = 34;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = search (arr,key,left,right);
//	if (ret == -1)
//		printf("���Ҳ�����");
//	else
//		printf("�ҵ��ˣ����������±�Ϊ%d\n",ret);
//	system("pause");
//	return 0;
//	
//}


//ģ���½ϵͳ
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		char a = getchar();
//		if (0 == strcmp(a, "haha123"))
//		{
//			printf("��ӭ��½��"); break;
//		}
//		else
//		{
//			printf("��������ȷ�����룺\n");
//			printf("����%d�λ���!\n", 3 - i);
//		}
//
//	}
//	return 0;
//
//}


//��Сдת����
//int main()
//{
//	char a = 1;
//	do
//	{char a = getchar();
//		if (a < 'z' && a > 'a')
//			printf("%c", a - 32);
//		else if (a < 'Z' && a > 'A')
//			printf("%c", a + 32);
//		else
//			break;
//	} while (a);
//	system("pause");
//	return 0;
//}

//���ӳ���
//
//int main()
//{
//	int day, n1, n2;
//	n2 = 1; day = 9;
//while(day >0)
//	{
//		n1 = (n2 + 1) * 2;
//		n2 = n1;
//		day--;
//	}
//	printf("���ӵ�һ��ժ��%d��\n", n1);
//	system("pause");
//		return 0;
//
//}