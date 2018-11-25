#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<assert.h>


//2.实现一个通讯录；
//通讯录可以用来存储1000个人的信息，每个人的信息包括：
//姓名、性别、年龄、电话、住址
//
//提供方法：
//1.	添加联系人信息
//2.	删除指定联系人信息
//3.	查找指定联系人信息
//4.	修改指定联系人信息
//5.	显示所有联系人信息
//6.	清空所有联系人
//7.	以名字排序所有联系人
//8.    保存联系人到文件
//9.    加载联系人
typedef struct friends
{
	char name[5];
	char sex;
	short age;
	int number;
	char address[20];
}friends;

int Init(friends (*arr)[1000],int num) //添加联系人，num个
{
	assert(arr);
	int i = 0;
	while (*arr)
	{
		arr++;
		i++;
	}
	if (i == 1000)
	{
		printf("通讯录已存储满！\n");
		return -1;
	}
	for (int i = 0; i < num; i++)
	{
		printf("输入要添加的联系人姓名，性别，年龄，电话号码，家庭住址:\n");
		scanf("%c%c%d%d%c", &((*(arr + i))->name), &((*(arr + i))->sex), &((*(arr + i))->age), \
			&((*(arr + i))->number), &((*(arr + i))->address));
	}
	printf("<添加成功！\n");
	return 0;
}

int Find(friends(*arr)[1000], char find_name)
{
	assert(arr);
	int i = 0; int flag = 0;
	while (*arr)
	{
		int ret = strcmp((*arr)->name, find_name);
		if (!ret)
		{
			flag = i;
			break;
		}
		arr++; i++;
	}
	return flag;	//返回find_name的下标,不存在返回0；
}

void Delete(friends(*arr)[1000], char delete_name)
{
	int ret = Find(arr, delete_name);
	if (!ret)
	{
		printf("联系人不存在！\n");
	}
	int i = ret;
	while (i--)
	{
		arr++;
	}
	while (*(++arr))
	{
		*(arr - 1) = *arr;
	}
	printf("删除成功！\n");
}

int main()
{
	friends arr[1000] = { 0 };
	Init(arr,2);

	system("pause");
	return 0;
}