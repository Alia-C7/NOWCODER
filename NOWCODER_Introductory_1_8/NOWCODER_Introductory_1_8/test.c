#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//从1加到n的值
//输入一个正整数n 
//输出一个值，为求和结果  
//int main()
//{
//	long int n = 0;
//	long int sum = 0;
//	long int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%ld\n", sum);
//	return 0;
//}

//一个数表示为六进制后的结果
//输入一个正整数n 
//输出一行，为正整数n表示为六进制的结果
//int main()
//{
//	int n = 0;
//	int arr[40] = { 0 };
//	int m = 0;
//	int i = 0;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		arr[m] = n % 6;
//		n = n / 6;
//		m++;
//	}
//	for (i = m - 1; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//在九宫格中，只要任意行、列，或者任意对角线上面出现三个连续相同的棋子，就能获胜
//请根据棋盘状态，判断当前输赢
//三行三列的字符元素，代表棋盘状态，字符元素用空格分开，代表当前棋盘
//其中元素为K代表KiKi玩家的棋子，为O表示没有棋子，为B代表BoBo玩家的棋子
//如果KiKi获胜，输出“KiKi wins!”
//如果BoBo获胜，输出“BoBo wins!”
//如果没有获胜，输出“No winner!”

//注意字符读取 怎样处理空格

//int main()
//{
//	char arr[3][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			arr[i][j] = getchar();
//			getchar(); // 处理空格
//		}
//	}
//	
//	if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][2] == 'K' || arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][2] == 'K' || arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][2] == 'K'
//		|| arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[2][0] == 'K' || arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[2][1] == 'K' || arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[2][2] == 'K'
//		|| arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == 'K' || arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] == 'K'
//		)
//	{
//		printf("KiKi wins!\n");
//	}
//	else if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][2] == 'B' || arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][2] == 'B' || arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][2] == 'B'
//		|| arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[2][0] == 'B' || arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[2][1] == 'B' || arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[2][2] == 'B'
//		|| arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == 'B' || arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] == 'B'
//		)
//	{
//		printf("BoBo wins!\n");
//	}
//	else
//	{
//		printf("No winner!\n");
//	}
//	return 0;
//}

//想知道杨辉三角的前n行
//杨辉三角，本质上是二项式(a+b)的n次方展开后各项的系数排成的三角形
//其性质包括：每行的端点数为1， 一个数也为1；每个数等于它左上方和上方的两数之和
//第一行包含一个整数数n。 (1≤n≤30)
//包含n行，为杨辉三角的前n行，每个数输出域宽为5。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[30][30] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//				printf("%5d", 1);
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				printf("%5d", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}

//有一个矩阵，想知道经过k次行变换或列变换后得到的矩阵
//第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔(1≤n≤10,1≤m≤10)
//每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示第一个矩阵中的元素
//接下来一行输入k，表示要执行k次操作（1≤k≤5）
//接下来有k行，每行包括一个字符t和两个数a和b，中间用空格格分隔
//t代表需要执行的操作，当t为字符'r'时代表进行行变换，当t为字符'c'时代表进行列变换，a和b为需要互换的行或列（1≤a≤b≤n≤10，1≤a≤b≤m≤10)
//输出n行m列，为矩阵交换后的结果。每个数后面有一个空格

//要注意字符读取

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	int k = 0;
//	char t = 0;
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//			scanf("%d", &arr[i][j]);
//	}
//	scanf("%d", &k);
//	
//	while (k != 0)
//	{
//		scanf(" %c %d %d", &t, &a, &b); //%c前面有空格 吸收\n
//		if (t == 'r')
//		{
//			for (j = 0; j < m; j++)
//			{
//				int tmp = arr[a-1][j];
//				arr[a-1][j] = arr[b-1][j];
//				arr[b-1][j] = tmp;
//			}
//		}
//		else if (t == 'c')
//		{
//			for (i = 0; i < n; i++)
//			{
//				int tmp = arr[i][a-1];
//				arr[i][a-1] = arr[i][b-1];
//				arr[i][b-1] = tmp;
//			}
//		}
//		k--;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}