#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[] = { 0, 3, 4, 3, 6, 5, 8, 7, 12, 34, 33, 5, 4, 7, 22, 45 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0, right = sz - 1;
	while (left <= right)
	{
		while(arr[left]%2 == 1)//����ʼ������������������
		{
			left++;
		}
		while ((arr[right] )%2 == 0)//���ҿ�ʼ������ż����ǰ��
		{
			right--;
		}
		int Tmp = arr[left];//���ǲ����㣬�򻥻�
		arr[left] = arr[right];
		arr[right] = Tmp;
	}
	if ((arr[left] % 2 == 1) &&(arr[right] %2 == 0))//���һ����ѭ��ʱ������right�Ѿ�<left���ǻ��ǽ�����
	{//�����ٽ���һ���жϣ���ʱleft��right֮��������Ϊ����
		int Tmp = arr[left];//���ǲ����㣬�򻥻�
		arr[left] = arr[right];
		arr[right] = Tmp;
	}

	printf("����������Ϊ��\n");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	system("pause");
	return 0;
}