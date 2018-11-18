#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define assert


//1.实现strcpy 
char* my_strcpy(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* tmp = dest;
	while ((*dest++ = *src++) != '\0')
		;
	return tmp;
}

//2.实现strcat
char* my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* tmp = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while ((*dest++ = *src++) != '\0')
		;
	return tmp;
}

//3.实现strstr
char* my_strstr(const char* dest, const char* src)
{
	assert(dest);
	assert(src);
	
	char* sub_str = (char*)src;//需要三个字符指针
	char* str = (char*)dest;
	char* pstr = NULL;

	while (*str)
	{
		pstr = str;
		sub_str = src;
		while (*pstr++ = *sub_str++)
			;
		if (*sub_str == '\0')	//找到子串
		{
			return pstr;
		}
		str++;		//找不到就从下一个字符开始
	}
}

//4.实现strchr


//5.实现strcmp
int * my_strcmp(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);

	char* p1 = (char*)str1;
	char* p2 = (char*)str2;

	while (*p1 && *p2)
	{
		if (*p1++ == *p2++)
		{
			return 0;
		}
		else if (*p1 > *p2)
		{
			return 1;
		}
		else if (*p1 > *p2)
		{
			return -1;
		}
	}
}

//6.实现memcpy
void* my_memcpy(void* dest, const void* src,int sz)
{
	assert(dest);
	assert(src);

	void *ret = dest;	//返回的字符串
	char *d = (char*)dest;
	char *s = (char*)src;

	while (sz--)
	{
		*d++ == *s++;
	}
	return ret;
}

//7.实现memmove
void* my_memcpy(void* dest, const void* src, int sz)
{
	void* ret = dest;
	char *d = (char*)dest;
	char *s = (char*)src;
	//分两种情况，向左和向右
	if (dest <= src || d >= s + sz)
	{
		while (sz--)
		{
			*d++ == *s++;
		}
	}
	else
	{
		d = d + sz;
		s = s + sz;
		while (sz--)
		{
			*d-- == *s--;
		}
	}
	return ret;
}
//memset
void * memset(void *dest, int c, size_t count)
{
	assert(dest);
	while (count--)
	{
		*(char*)dest = c;
		dest = (char*)dest+1;
	}
}