#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//二进制转化十进制
int main()
{
	char str[8] = { 0 }, *p = str;
	int n;
	gets(p);
	n = *p - '0';  //字符转数值

		while (*++p != '\0')
		{
			n = n * 8 + *p - '0';
		}

	printf("转化为十进制是：");
	printf("%d\n", n);
	system("pause");
	return 0;
}




