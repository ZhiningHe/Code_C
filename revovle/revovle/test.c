#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* left_revolve(char str[], int k)
{
	int i = 0, j = 0;
	int len = strlen(str);
	k %= len;		//����len����ԭ�����ַ���
	for (i = 1; i <= k; i++)
	{
		char Tmp = str[0];
		for (j = 0; j <= len - 1; j++)
		{
			str[j] = str[j + 1];
		}
		str[len - 1] = Tmp;
	}
	return str;
}

int is_revolve(char str1[], char str2[])
{
	int len = strlen(str1);
	while (strlen(str1) == strlen(str2) )
	{
		for (int i = 0; i < len; i++)			//����
		{
			if (strcmp(str1, str2) == 0)
			{
				return 1;
			}
			char Tmp = str1[0];
			for (int j = 0; j < len - 1; j++)
			{
				str1[j] = str1[j + 1];
			}
			str1[len - 1] = Tmp;
		}

		for (int i = 0; i < len;i++)			//����
		{
			if (strcmp(str1, str2) == 0)
			{
				return 1;
			}
			char Tmp = str1[len - 1];
			for (int j = 0; j < len - 1; j++)
			{
				str1[j + 1] = str1[j];
			}
			str1[0] = Tmp;
		}
		return 0;
	}
}

int main()
{
	char str[10] = { 0 };
	char str1[10] = { 0 };
	char str2[10] = { 0 };

	//int k = 0;
	//printf("����ԭ�ַ�:\n");
	//gets(str);
	//printf("�������Σ�\n");
	//scanf("%d", &k);
	//printf("��ת֮��:%s\n", left_revolve(str, k));

	printf("�����ַ���str1��\n");
	gets(str1);
	printf("�����ַ���str2��\n");
	gets(str2);
	int ret = is_revolve(str1, str2);
	if (ret == 1)
	{
		printf("str2 %s �� str1 %s ����ת����ַ���\n", str2, str1);
	}
	else
	{
		printf("str2 %s ���� str1 %s ����ת����ַ���\n", str2, str1);
	}

	system("pause");
	return 0;
}