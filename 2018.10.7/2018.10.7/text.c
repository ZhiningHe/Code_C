#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 2

struct student
{
	char num[2];
	char name[8];
	int score[4];
}STU[N] = {0};

input(stu)
{
	struct student STU[N];     //声明结构体变量STU[N]
	int i = 0, j = 0;
	for (i = 0; i < N; i++)
	{
		printf("\n please input %d of %d", i + 1, N);
		printf("num:");
		scanf("%s", STU[i].num);
		printf("name:");
		scanf("%s", STU[i].name);
		for (j = 0; j < 3; j++)
		{
			printf("score %d.", j + 1);
			scanf("%d", &STU[i].score[j]);
		}
		printf("\n");
	}
}

output()
{
	struct student STU[N];
	int i = 0, j = 0;
	printf("\nNO.name.SCO1.SCO2.SCO3\n");
	for (i = 0; i < N; i++)
	{
		printf("%-6s%-10s", STU[i].num, STU[i].name);
		for (j = 0; j < 3; j++)
		{
			printf("%-8d", STU[i].score[j]);
			printf("\n");
		}
	}
}

int main()
{
	input();
	output();
	system("pause");
	return 0;
}