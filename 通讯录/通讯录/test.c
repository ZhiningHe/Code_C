#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<assert.h>


//2.ʵ��һ��ͨѶ¼��
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
//�������Ա����䡢�绰��סַ
//
//�ṩ������
//1.	�����ϵ����Ϣ
//2.	ɾ��ָ����ϵ����Ϣ
//3.	����ָ����ϵ����Ϣ
//4.	�޸�ָ����ϵ����Ϣ
//5.	��ʾ������ϵ����Ϣ
//6.	���������ϵ��
//7.	����������������ϵ��
//8.    ������ϵ�˵��ļ�
//9.    ������ϵ��
typedef struct friends
{
	char name[5];
	char sex;
	short age;
	int number;
	char address[20];
}friends;

int Init(friends (*arr)[1000],int num) //�����ϵ�ˣ�num��
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
		printf("ͨѶ¼�Ѵ洢����\n");
		return -1;
	}
	for (int i = 0; i < num; i++)
	{
		printf("����Ҫ��ӵ���ϵ���������Ա����䣬�绰���룬��ͥסַ:\n");
		scanf("%c%c%d%d%c", &((*(arr + i))->name), &((*(arr + i))->sex), &((*(arr + i))->age), \
			&((*(arr + i))->number), &((*(arr + i))->address));
	}
	printf("<��ӳɹ���\n");
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
	return flag;	//����find_name���±�,�����ڷ���0��
}

void Delete(friends(*arr)[1000], char delete_name)
{
	int ret = Find(arr, delete_name);
	if (!ret)
	{
		printf("��ϵ�˲����ڣ�\n");
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
	printf("ɾ���ɹ���\n");
}

int main()
{
	friends arr[1000] = { 0 };
	Init(arr,2);

	system("pause");
	return 0;
}