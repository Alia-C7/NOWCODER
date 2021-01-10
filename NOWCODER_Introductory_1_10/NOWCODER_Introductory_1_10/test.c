#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//想知道一个n阶方矩是否为上三角矩阵
//上三角矩阵即主对角线以下的元素都为0的矩阵
//主对角线为从矩阵的左上角至右下角的连线
//输入描述:
//第一行包含一个整数n，表示一个方阵包含n行n列，用空格分隔(2≤n≤10)
//从2到n + 1行，每行输入n个整数，用空格分隔，共输入n*n个数
//输出描述 :一行，如果输入方阵是上三角矩阵输出"YES"并换行，否则输出"NO"并换行
//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int k = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			k++;
//			if (arr[i][j] == 0)
//			{
//				count++;
//			}
//		}
//	}
//	if (count == k)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//给定n个整数和一个整数x，从n个整数中判断x出现几次
//输入描述:
//共3行
//第一行，一个整数，表示n（1 <= n <= 100）
//第二行，共输入n个整数，两个整数之间用空格分隔
//第三行，输入一个整数，表示要查找的整数x
//输出描述:一行，表示整数x出现的次数
//int main()
//{
//	int arr[100] = { 0 };
//	int n = 0;
//	int i = 0;
//	int x = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//自定义函数，根据以下公式计算m的值
//m=max3(a+b,b,c)/(max3(a,b+c,c)+max3(a,b,b+c))
//输入三个整数，用空格隔开，分别表示a, b, c
//输出一行，一个浮点数，小数点保留2位，为计算后m的值
//int max3(int x, int y, int z)
//{
//	if (x < y)
//	{
//		int tmp = x;
//		x = y;
//		y = tmp;
//	}
//	if (y < z)
//	{
//		int tmp = y;
//		y = z;
//		z = tmp;
//	}
//	if (x < y)
//	{
//		int tmp = x;
//		x = y;
//		y = tmp;
//	}
//	return x;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	double m = 0.0;
//	scanf("%d %d %d", &a, &b, &c);
//	m = (max3(a + b, b, c)*1.0) / (max3(a, b + c, c) + max3(a, b, b + c));
//	printf("%.2lf\n", m);
//	return 0;
//}