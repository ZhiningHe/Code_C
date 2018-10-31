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
		while(arr[left]%2 == 1)//从左开始，若是奇数则往后移
		{
			left++;
		}
		while ((arr[right] )%2 == 0)//从右开始，若是偶数则前移
		{
			right--;
		}
		int Tmp = arr[left];//若是不满足，则互换
		arr[left] = arr[right];
		arr[right] = Tmp;
	}
	if ((arr[left] % 2 == 1) &&(arr[right] %2 == 0))//最后一结束循环时，可能right已经<left但是还是交换了
	{//所以再进行一次判断，此时left在right之后，条件变为反的
		int Tmp = arr[left];//若是不满足，则互换
		arr[left] = arr[right];
		arr[right] = Tmp;
	}

	printf("排序后的数组为：\n");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	system("pause");
	return 0;
}