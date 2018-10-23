#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int Chongfu(int arr[]) 
//{
//	int count = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = i + 1; j < 5; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				return 0;
//			}
//			return 1;
//		}
//	}
//}
//
//int PanDuan(int arr[])
//{
//	if ((arr[1] == 2)+ (arr[0] == 3)==1
//		&& (arr[1] == 2) +  (arr[4] == 4)==1
//		&& (arr[1] == 1) + (arr[3] == 2)==1
//		&& (arr[2] == 5) + (arr[3] == 3)==1
//		&& (arr[4] == 4) + (arr[0] == 1)==1)
//	{
//		return 1;
//	}
//	return 0;
//}


//int main() 
//{
//	int arr[5] = { 0 };
//	for (arr[0] = 0; arr[0] < 5; arr[0]++)
//	{
//		for (arr[1] = 0; arr[1] < 5; arr[1]++)
//		{
//			for (arr[2] = 0; arr[2] < 5; arr[2]++)
//			{
//				for (arr[3] = 0; arr[3] < 5; arr[3]++)
//				{
//					for (arr[4] = 0; arr[4] < 5; arr[4]++)
//					{
//

//					}
//					if (PanDuan(arr) == 1)
//					{
//						if (Chongfu(arr) == 1)
//						{
//							printf("a=%d b=%d c=%d d=%d e=%d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//							break;
//						}
//					}
//				}
//			}
//
//			system("pause");
//			return 0;
//		}
//	}
//}

//int main()
//{
//	int a, b, c, d, e;
//	for (a = 0; a < 5; a++)
//	{
//		for (b = 0; b < 5; b++)
//		{
//			for (c = 0; c < 5; c++)
//			{
//				for (d = 0; d < 5; d++)
//				{
//					for (e = 0; e < 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1
//							&& (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1
//							&& (e == 4) + (a == 1) == 1)
//						{
//							if (a + b + c + d + e == 15 && a*b*c*d*e == 120)
//							{
//								printf("a = %d,b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//
//	}
//	system("pause");
//	return 0;
//
//}


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个?
//嫌疑犯的一个。以下为4个嫌疑犯的供词。?
 //A说：不是我。?
//B说：是C。?
//C说：是D。?
//D说：C在胡说?
//已知3个人说了真话，1个人说的是假话。?
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//int main() 
//{
//	int a, b, c, d;
//	for (a = 0; a < 2; a++)
//		for (b = 0; b < 2;b++)
//			for (c = 0; c < 2; c++)
//				for (d = 0; d < 2; d++)
//				{
//					if ((a == 0) + (c == 1) + (d == 1) + (d == 0) == 3)
//					{
//						if (a + b + c + d == 1)
//						{
//							printf("1表示凶手！\n");
//							printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
//						}
//					}
//				}
//	system("pause");
//	return 0;
//}

//杨辉三角形

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, n = 0, a[17][17] = { 0 };

	while (n<1 || n>16)

	{
		printf("请输入杨辉三角形的行数:");

		scanf("%d", &n);

	}

	for (i = 0; i<n; i++)

		a[i][0] = 1; /*第一列全置为一*/

	for (i = 1; i<n; i++)

		for (j = 1; j <= i; j++)

			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];/*每个数是上面两数之和*/


	for (i = 0; i<n; i++) /*输出杨辉三角*/

	{
		for (j = 0; j <= i; j++)

			printf("%5d", a[i][j]);

		printf("\n");

	}
	system("pause");
	return 0;
}
