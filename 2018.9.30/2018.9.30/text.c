#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//strlen函数

//int MyStrlen(char * a)
//{
//	int i = 0;
//	while (*a != '\0')
//	{
//		i++;
//		a++;
//	}
//
//	return i;
//}
//
//int main()
//{
//	char str[] = "ZhiningHe";
//	printf("%d\n", MyStrlen(str));
//
//	return 0;
//}

//strcat函数

//char *MyStrcat(char *p, char *q)
//{
//	char *a, *b;
//
//	a = p;
//	b = q;
//
//	while (*a != '\0')//把*a指针移到最后
//	{
//		a++;
//	}
//	while (*b != '\0')
//	{
//		*a = *b;
//		a++;
//		b++;
//	}
//	*a = *b;
//
//	return p;
//}
//
//int main()
//{
//	char s1[100] = "Zhining ";
//	char s2[] = "He  ";
//
//	puts(MyStrcat(s1, s2));
//	strcat(s1,s2);
//	puts(s1);
//
//	return 0;
//}

