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
	while (arr[i])
	{
		if (i == 1000)
		{
			printf("通讯录已存储满！\n");
			return -1;
		}
		i++;
	}


	for (int j = 0; j < num; j++)
	{
		printf("输入要添加的联系人姓名，性别，年龄，电话号码，家庭住址:\n");
		scanf("%c%c%d%d%c", arr[i++]->name, arr[i++]->sex,arr[i++]->age,arr[i++]->number,arr[i++]->address);
		printf("<添加成功！\n");
	}

	return 0;
}

int Find(friends(*arr)[1000], char find_name)
{
	assert(arr);

}

void Delete(friends(*arr)[1000], char delete_name)
{

}

int main()
{
	friends arr[1000] = { 0 };
	Init(arr,2);

	system("pause");
	return 0;
}