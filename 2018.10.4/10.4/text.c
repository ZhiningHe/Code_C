#include <stdio.h>
#include <stdlib.h>

//1. ���黥��
//int main()
//{
//	int num1[5] = { 0,2,3,4,5 };
//	int num2[5] = { 1,3,5,7,9 };
//	int i = 0, p = 0;
//	//���ԭ����
//	printf("num1:");
//	for (i = 0; i < 5; i++)
//		printf("%d",num1[i]);
//	printf("\n");
//	printf("num2:");
//	for (i = 0; i < 5; i++)
//		printf("%d", num2[i]);
//	printf("\n");
//	//���黥��
//	for (i = 0; i <= 4; i++)
//	{
//		p = 0;
//		p = num1[i];
//		num1[i] = num2[i];
//		num2[i] = p;
//	}	
//	//���������
//	printf("new_num1:");
//	for (i = 0; i < 5; i++)
//		printf("%d", num1[i]);
//	printf("\n");
//	printf("new_num2:");
//	for (i = 0; i < 5; i++)
//		printf("%d", num2[i]);
//	printf("\n");
//
//	system("pause");
//	return 0;
//}


//2. ����1/1-1/2+1/3��-1/100��ֵ
//int main()
//{
//	int i = 0, flag = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag *1.0 / i;
//		flag *= (-1);
//	}
//	printf("%lf\n",sum);
//	system("pause");
//	return 0;
//}

//3. 1-100��9���ֵĴ���
//int main()
//{
//	int i = 0, n = 0;
//	for (i = 9; i <= 100; i++)
//	{
//		if (9 == i / 10) n++;
//		if (9 == i % 10) n++;
//	}
//	printf("9������%d��\n", n);
//	system("pause");
//	return 0;
//}
//
