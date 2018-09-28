#include <stdio.h>
#include <stdlib.h>

//1. 在屏幕上输出菱形

//2. 求0-999之间的“水仙花数”，153 = 1^3 + 5^3 + 3^3.
int main()
{
	int n, i, j, k;
	printf("0-999之间的“水仙花数”有：");
	for (n = 100; n <= 999; n++)
	{
		i = n / 100;
		j = n / 10 - i * 10;
		k = n % 10;
		if (n == i*i*i + j*j*j + k*k*k) printf("%d ", n);
	}
	printf("\n");
	system("pause");
	return 0;
}