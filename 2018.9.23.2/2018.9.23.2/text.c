#include <stdio.h>
#include <stdlib.h>
//#DEFINR_CRT_SECURE_NO_WARNINGS.

//1. ����Ļ���������
int main() 
{

}

//
//2. ��0-999֮��ġ�ˮ�ɻ�������153 = 1^3 + 5^3 + 3^3.
//int main()
//{
//	int n, i, j, k;
//	printf("0-999֮��ġ�ˮ�ɻ������У�");
//	for (n = 100; n <= 999; n++)
//	{
//		i = n / 100;
//		j = n / 10 - i * 10;
//		k = n % 10;
//		if (n == i*i*i + j*j*j + k*k*k) printf("%d ", n);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//3. ��Sn = a + aa + aaa + aaaa + aaaaa��ǰ�����
//int main()
//{
//	int i,a = 0, sum = 0;
//	printf("����һ������a:");
//	scanf("%d",&a);
//	a = a * 1000 + a * 100 + a * 10 + a;
//	for (i = 0; i < 5; i++)
//	{
//		sum += a;
//		a /= 10;
//	}
//	printf("Sn = %d", sum);
//	return 0;
//}