#include<stdio.h>

void symmetry(int arr1[5][5],int row,int col)//¶Ô³Æ¾ØÕóÑ¹Ëõ
{
	int k = 0; int h = 1;
	int arr0[] = { 0 };
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr1[i][j])
			{
				arr0[k] = j*(j - 1) / 2 + i;//ÉÏÈı½Ç
			}
		}
	}
		for (int j = 0; j < k; j++)
		{
			printf("%d ", arr0[j]);
		}
		printf("\n");
}






int main()
{
	int arr1[5][5] = { 1,2,3,4,5,0,6,7,8,9,0,0,10,11,12,0,0,0,13,14,0,0,0,0,15 };//¶Ô³Æ¾ØÕó
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	symmetry(arr1[5][5], 5, 5);

	system("pause");
	return 0;
}