#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 1


//猜数字游戏
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
//		printf("请猜数字：");
//		scanf_s("%d", &in_put);
//		if (in_put > ture)
//			printf("猜大了！\n");
//		else if (in_put < ture)
//			printf("猜小了！\n");
//		else
//		{
//			printf("恭喜你，猜对了！\n");
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
//	   printf("请选择！");
//	   scanf_s("%d", &in_put);
//
//	   switch (in_put)
//	   {
//	   case 1:
//		  game(); break;
//	   case 0:
//		   break;
//	   default:
//		   printf("输入错误！重新输入。");
//		   break;
//	   }
//	
//
//	} while (in_put);
//
//	return 0;
//}


//二分法查找
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
//		printf("查找不到！");
//	else
//		printf("找到了！它的数组下标为%d\n",ret);
//	system("pause");
//	return 0;
//	
//}


//模拟登陆系统
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		char a = getchar();
//		if (0 == strcmp(a, "haha123"))
//		{
//			printf("欢迎登陆！"); break;
//		}
//		else
//		{
//			printf("请输入正确的密码：\n");
//			printf("还有%d次机会!\n", 3 - i);
//		}
//
//	}
//	return 0;
//
//}


//大小写转换器
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

//猴子吃桃
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
//	printf("猴子第一天摘了%d个\n", n1);
//	system("pause");
//		return 0;
//
//}