#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//������ת��ʮ����
int main()
{
	char str[8] = { 0 }, *p = str;
	int n;
	gets(p);
	n = *p - '0';  //�ַ�ת��ֵ

		while (*++p != '\0')
		{
			n = n * 8 + *p - '0';
		}

	printf("ת��Ϊʮ�����ǣ�");
	printf("%d\n", n);
	system("pause");
	return 0;
}




