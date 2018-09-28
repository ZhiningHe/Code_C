#include <stdio.h>
#include <stdlib.h>
//#DEFINR_CRT_SECURE_NO_WARNINGS.

//1. 在屏幕上输出菱形
int main() 
{

}

//
//2. 求0-999之间的“水仙花数”，153 = 1^3 + 5^3 + 3^3.
//int main()
//{
//	int n, i, j, k;
//	printf("0-999之间的“水仙花数”有：");
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

//3. 求Sn = a + aa + aaa + aaaa + aaaaa的前五项和
//int main()
//{
//	int i,a = 0, sum = 0;
//	printf("输入一个数字a:");
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