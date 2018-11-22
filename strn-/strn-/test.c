#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<assert.h>

//1.模拟实现strncpy
char *my_strncpy(char *strDest, const char *strSource, size_t count)
{
	assert(strDest);
	assert(strSource);
	char* ret = strDest;
	while (count--)
	{
		*strDest++ = *strSource++;
	}
	return ret;
}

//2.模拟实现strncat

char *strncat(char *strDest, const char *strSource, size_t count)
{
	assert(strDest);
	assert(strSource);
	char* ret = strDest;

	while (*strDest)
	{
		strDest++;
	}
	while (count--)
	{
		*strDest++ = *strSource++;
	}
	return ret;
}

//3.模拟实现strncmp
int strncmp(const char *string1, const char *string2, size_t count)
{
	assert(string1);
	assert(string2);
	while (count--)
	{
		while (*string1 == *string2)
		{
			string1++; string2++;
		}
		if (*string1 < *string2)
		{
			return -1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int strncmp(const char *string1, const char *string2, size_t count)
{
	assert(string1);
	assert(string2);
	int ret = 0;
	while (count--)
	{
		while (!(ret = *(unsigned char*)string1 - *(unsigned char*)string2)&& *string1)//ret = 0即相等
		{
			++string1; ++string2;
		}
		if (ret < 0 )
		{
			return -1;
		}
		else
		{
			return 1;
		}
	}
	return ret;
}