#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算一下1!+2!+3!+...+n!
//输入描述:一行，一个整数n
//输出描述:一行，一个整数，表示1!+ 2!+ 3!+ ... + n!的结果
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ans = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ans *= i;
//		sum += ans;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//想知道班级中谁的数学成绩最高
//共n+1行
//第一行输入一个数n，代表n个同学。
//第二行输入n个数，用空格相隔，代表班级中每个人的数学成绩
//一个整数，代表班级中最高的数学成绩
//int main()
//{
//	int arr[10] = { 0 };
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//统计一下班级里一共有多少人需要被请家长
//三个成绩（语文，数学，外语）平均分低于60的将被请家长
//共n+1行
//第一行，输入一个数n，代表n个同学
//在n行中每行输入三个整数代表班级中一个同学的三科成绩（语文，数学，外语），用空格分隔
//一行，一个整数，代表班级中需要被请家长的人数
//int main()
//{
//	int arr[10][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int sum = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			sum += arr[i][j];
//		}
//		if (sum / 3 < 60)
//		{
//			count++;
//		}
//		sum = 0;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//要求把序列去重后按从小到大排序
//第一行包含一个正整数n，表示序列有n个数
//接下来有n行，每行一个正整数k，为序列中每一个元素的值(1 ≤ n ≤ 105，1 ≤ k ≤ n)
//输出一行，为去重排序后的序列，每个数后面有一个空格
//不会

//要走n阶台阶，每次可以选择走一阶或者走两阶，一共有多少种走法？
//输入包含一个整数n (1 ≤ n ≤ 30)
//输出一个整数，可以走的方法数
//不会

//前面有n个人在等电梯
//电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）
//请计算还需要多少分钟才能乘电梯到达楼上
//输入包含一个整数n 
//输出一个整数，即小乐乐到达楼上需要的时间
//int main()
//{
//	int n = 0;
//	int time = 0;
//	scanf("%d", &n);
//	if (n % 12 != 0 && n / 12 !=0)
//	{
//		time = (n / 12) * 4 + 2;
//	}
//	else if (n < 12)
//	{
//		time = 2;
//	}
//	else
//		time = (n / 12) * 4 + 2;
//	printf("%d\n", time);
//	return 0;
//}

//知道现在的时刻，以及睡觉的时长，想设定一个闹钟起床(只考虑时和分，不考虑日期)
//输入现在的时刻以及要睡的时长k（单位：minute），中间用空格分开
//输入格式：hour:minute k(如hour或minute的值为1，输入为1，而不是01)
//(0 ≤ hour ≤ 23，0 ≤ minute ≤ 59，1 ≤ k ≤ 109)
//对于每组输入，输出闹钟应该设定的时刻
//输出格式为标准时刻表示法（即时和分都是由两位表示，位数不够用前导0补齐）
//int main()
//{
//	int hour = 0;
//	int minute = 0;
//	int k = 0;
//	int h = 0;
//	int m = 0;
//	scanf("%d:%d %d", &hour, &minute, &k);
//	m = minute + k;
//	h = (hour + m / 60) % 24;
//	m = m % 60;
//	printf("%02d:%02d\n", h, m);
//	return 0;
//}