#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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


//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��?
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�?
 //A˵�������ҡ�?
//B˵����C��?
//C˵����D��?
//D˵��C�ں�˵?
//��֪3����˵���滰��1����˵���Ǽٻ���?
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
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
//							printf("1��ʾ���֣�\n");
//							printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
//						}
//					}
//				}
//	system("pause");
//	return 0;
//}

//���������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, n = 0, a[17][17] = { 0 };

	while (n<1 || n>16)

	{
		printf("��������������ε�����:");

		scanf("%d", &n);

	}

	for (i = 0; i<n; i++)

		a[i][0] = 1; /*��һ��ȫ��Ϊһ*/

	for (i = 1; i<n; i++)

		for (j = 1; j <= i; j++)

			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];/*ÿ��������������֮��*/


	for (i = 0; i<n; i++) /*����������*/

	{
		for (j = 0; j <= i; j++)

			printf("%5d", a[i][j]);

		printf("\n");

	}
	system("pause");
	return 0;
}
