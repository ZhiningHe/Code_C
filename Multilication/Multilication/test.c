#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int length(int num)//�����ֵ��λ��
{
	int i = 0;
	while (num)
	{
		num /= 10;
		i++;
	}
	return i;
}

void Multiplication(int a, int b, int an, int bn)  //���ӳ˷�
{
	int n = 0; int i = an - 1;
	int arr[10][5] = { 0 }; //�������ÿһλ��˵Ľ��
	int num[20] = { 0 };//��������Խ��ߵĺ�

	while (a)		//�������Ӿ���
	{
		int c = a % 10 * b;
		int lc = length(c);
		for (int j = lc - 1; j >= 0; j--)
		{
			arr[i][j] = c % 10;
			c /= 10;
		}
		i--;
		a /= 10;
	}

	printf("���Ӿ���Ϊ��\n");
	for (int i = 0; i < an; i++)		//������Ӿ���
	{
		for (int j = 0; j <= bn; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = an - 1, j = bn - 1; i >= 0; i--) //���ұ�һ��Ϊ�����Խ���Ԫ�غ�
	{
		while (i < an)
		{
			num[n] += arr[i][j];
			i++; n++;
		}
	}
	for (int i = 0, j = bn - 1; j >= 0; j--)//���ϱ�һ��Ϊ�����Խ���Ԫ�غ�
	{
		while (i < an)
		{
			num[n] += arr[i][j];
			i++; n++;
		}
	}

	for (int i = 0, j = n; i>j; i++, j--)//��������
	{
		int Tmp = num[i];
		num[i] = num[j];
		num[j] = Tmp;
	}

	printf("�������ǣ�\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d", num[i]);
	}
	printf("\n");
}

int main()
{
	//int a = 58778853425466; int b = 247375829759213;
	int a = 0, b = 0, an = 0, bn = 0;
	printf("����ϳ���һ�����������ĳ���,�ÿո�ֿ���\n");
	scanf("%d %d", &a, &an);
	printf("������һ��������\n");
	scanf("%d %d", &b, &bn);
	Multiplication(a, b, an, bn);
	system("pause");
	return 0;
}






