#define _CRT_SECURE_NO_WARNINGS
#define assert
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* p1, const void* p2)//�ȽϺ���
{
	return (*(int *)p1 > *(int *)p2);
	//p1>p2����1�� p1<=p2����0
}

void exchange(void* p1, void* p2, int size)//��������
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void my_qsort(void* arr, int count, int size, int(*cmp)(void*, void*))  //ģ��ʵ��qsort
{
	int i = 0; int j = 0;
	for (i=0; i < count-1;i++)//ð�ݷ�
	{
		for (j=0; j < count-1-i; j++)
		{
			if (cmp((char*)arr + j*size, ((char*)arr + (j + 1)*size))>0) //ǰ>��
			{
				exchange((char*)arr + j*size, ((char*)arr + (j + 1)*size),size);//ǰ�󽻻�
			}
		}
	}
}

int main()
{
	int arr[] = { 2, 5, 34, 6, 30, 4, 4, 5, 2, 9 };
	//char arr[] = { 'A', 'a', 'c', 'B', 'j', 'g', 'I' };
	my_qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}