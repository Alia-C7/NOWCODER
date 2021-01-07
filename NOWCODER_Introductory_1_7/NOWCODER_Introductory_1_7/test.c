#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//有一个矩阵，想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵）
//第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)
//输入表示第一个矩阵中的元素
//输出m行n列，为矩阵转置后的结果。每个数后面有一个空格
//int main()
//{
//	int arr1[10][10] = { 0 };
//	int arr[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//			scanf("%d", &arr1[i][j]);
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//			arr[i][j] = arr1[j][i];
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}

//想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线
//第一行包含一个整数n，表示一个方阵包含n行n列，用空格分隔(1≤n≤10)
//如果输入方阵是上三角矩阵输出"YES"并换行，否则输出"NO"并换行
//int main()
//{
//	int n = 0;
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int m = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr[i][j]);
//	}
//	for (i = 1; i < n; i++)
//	{
//		m += i;
//	}
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] == 0)
//				count++;
//		}
//	}
//	if (count == m)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//得到两个n行m列的矩阵，想知道两个矩阵是否相等
//第一行包含两个整数n和m，表示两个矩阵包含n行m列，用空格分隔
//如果两个矩阵相等输出"Yes"并换行，否则输出"No"并换行
//int main()
//{
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int m = 0;
//	int count = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//				count++;
//		}
//	}
//	if (count == n*m)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//从n行m列的方阵队列中找到身高最高的人的位置
//第一行包含两个整数n和m，表示这个方阵队列包含n行m列
//一行，输出两个整数，用空格分隔，表示方阵中身高最高的人所在的行号和列号
//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	int x = 0;
//	int y = 0;
//	int max = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//			scanf("%d", &arr[i][j]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				x = i + 1;
//				y = j + 1;
//			}
//		}
//	}
//	printf("%d %d\n", x, y);
//	return 0;
//}

//得到一个n行m列的矩阵，想知道第x行第y列的值是多少
//输入描述:
//第一行包含两个数n和m，表示这个矩阵包含n行m列
//输出一个整数值，为想知道的值
//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &n,&m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d %d", &x, &y);
//	printf("%d\n", arr[x - 1][y - 1]);
//	return 0;
//}


//输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分
//五行，每行输入一个学生各5科成绩（浮点数表示，范围0.0~100.0），用空格分隔
//输出描述 :五行，按照输入顺序每行输出一个学生的5科成绩及总分（小数点保留1位），用空格分隔
//int main()
//{
//	double arr1[6] = { 0 };
//	double arr2[6] = { 0 };
//	double arr3[6] = { 0 };
//	double arr4[6] = { 0 };
//	double arr5[6] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%lf", &arr1[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%lf", &arr2[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%lf", &arr3[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%lf", &arr4[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%lf", &arr5[i]);
//	}
//		
//	arr1[5] = arr1[0] + arr1[1] + arr1[2] + arr1[3] + arr1[4];
//	arr2[5] = arr2[0] + arr2[1] + arr2[2] + arr2[3] + arr2[4];
//	arr3[5] = arr3[0] + arr3[1] + arr3[2] + arr3[3] + arr3[4];
//	arr4[5] = arr4[0] + arr4[1] + arr4[2] + arr4[3] + arr4[4];
//	arr5[5] = arr5[0] + arr5[1] + arr5[2] + arr5[3] + arr5[4];
//
//	for (i = 0; i < 6; i++)
//	{
//		printf("%.1lf ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 6; i++)
//	{
//		printf("%.1lf ", arr2[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 6; i++)
//	{
//		printf("%.1lf ", arr3[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 6; i++)
//	{
//		printf("%.1lf ", arr4[i]);
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%.1lf ", arr5[i]);
//	}
//	printf("\n");
//	return 0;
//}

//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出
//输入包含三行，
//第一行包含两个正整数n, m（1 ≤ n, m ≤ 100），用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数
//第二行包含n个整数（范围1~5000），用空格分隔
//第三行包含m个整数（范围1~5000），用空格分隔
//输出为一行，输出长度为n+m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int arr[200] = { 0 };
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = arr1[i];
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (i = n; i < n+m; i++)
//	{
//		arr[i] = arr2[i-n];
//	}
//
//	for (i = 1; i <= n + m; i++)
//	{
//		for (j = 0; j < n+m-i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//输入n个整数的序列，要求对这个序列进行去重操作。所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置
//输入包含两行，第一行包含一个正整数n（1 ≤ n ≤ 1000），表示第二行序列中数字的个数；第二行包含n个整数（范围1~5000），用空格分隔
//输出为一行，按照输入的顺序输出去重之后的数字，用空格分隔
//int main()
//{
//	int arr[1000] = { 0 };
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = i+1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//				arr[j] = 0;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i]>0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	printf("\n");
//	return 0;
//}
//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变
//输入描述:第一行输入一个整数(0≤N≤50)
//第二行输入N个整数，输入用空格分隔的N个整数
//第三行输入想要进行删除的一个整数
//输出为一行，删除指定数字之后的序列
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int i = 0;
//	int k = 0;
//	int j = 0;
//	int p = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &k);
//	for (j = 0; j < n; j++)
//	{
//		if (arr[j] == k)
//			arr[j] = 0;
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i]>0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序
//输入描述:
//第一行输入一个整数N(0≤N≤50)
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数
//第三行输入想要进行插入的一个整数
//输出描述 :
//输出为一行，N + 1个有序排列的整数
//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int j = 0;
//	scanf("%d", &n);//数组个数
//
//	for (i = 0; i < n; i++) //数组元素
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	scanf("%d", &k);//插入的数字
//
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > k)
//		{
//			for (j = n; j > i; j--)
//				arr[j] = arr[j - 1];
//			break;
//		}
//	}
//	arr[i] = k;
//
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序
//输入描述:
//第一行输入一个整数N(3≤N≤50)
//第二行输入N个整数，用空格分隔N个整数
//输出为一行，如果序列有序输出sorted，否则输出unsorted
//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ans = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	if (arr[0]>arr[1])
//	{
//		for (i = 1; i < n; i++)
//		{
//			for (j = 0; j < n - i; j++)
//			{
//				if (arr[j] < arr[j + 1])
//				{
//					ans = 1;
//				}
//			}
//		}
//		if (ans)
//		{
//			printf("unsorted\n");
//		}
//		else
//			printf("sorted\n");
//	}
//	else
//	{
//		for (i = 1; i < n; i++)
//		{
//			for (j = 0; j < n - i; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					ans = 1;
//				}
//			}
//		}
//		if (ans)
//		{
//			printf("unsorted\n");
//		}
//		else
//			printf("sorted\n");
//	}
//	return 0;
//}

//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差
//输入描述;两行，第一行为n，表示n个成绩，不会大于10000
//第二行为n个成绩（整数表示)，以空格隔开
//输出描述 :一行，输出n个成绩中最高分数和最低分数的差
//int main()
//{
//	int arr[10000] = { 0 };
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	int ans = 0;
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
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	ans = max - min;
//	printf("%d\n", ans);
//	return 0;
//}

//输入描述:
//第一行输入一个整数N(0≤N≤50)，第二行输入用空格分隔的N个整数
//输出为一行，为第二行输入的“N个整数之和”的计算结果
//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//输入10个整数，分别统计输出正数、负数的个数
//输入10个整数，用空格分隔
//输出描述 :两行，第一行正数个数，第二行负数个数，具体格式见样例。
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>0)
//		{
//			count1++;
//		}
//		else if (arr[i] < 0)
//		{
//			count2++;
//		}
//	}
//	printf("positive:%d\n", count1);
//	printf("negative:%d\n", count2);
//	return 0;
//}

//输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数
//输入描述:一行，输入10个整数，用空格分隔
//输出描述 :一行，逆序输出输入的10个整数，用空格分隔。
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//根据所挂学分，判断学习情况，10分以上：很危险(Danger++)，4~9分：危险(Danger)，0~3:Good
//输入描述:一行，一个整数（0~30），表示挂的科目累计的学分
//输出描述:一行，根据输入的挂科学分，输出相应学习情况（Danger++，Danger，Good）
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	if (input >= 10)
//	{
//		printf("Danger++\n");
//	}
//	else if (input >= 4 && input <= 9)
//	{
//		printf("Danger\n");
//	}
//	else
//	{
//		printf("Good\n");
//	}
//	return 0;
//}

//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和
//第一行为N M(N : 矩阵行数；M : 矩阵列数, 且M, N <= 10)，接下来的N行为矩阵各行
//一行，其中大于零的元素之和
//int main()
//{
//	int sum = 0;
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr[i][j]>0)
//				sum = sum + arr[i][j];
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//用户登录网站，通常需要注册，一般需要输入两遍密码。请编程判断输入的两次密码是否一致，一致输出“same”，不一致输出“different”
//每行有两个用空格分开的字符串，第一个为密码，第二个为重复密码
//每组输出一个字符串（“same”或“different”）
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[10] = { 0 };
//	scanf("%s %s", arr1, arr2);
//	if (!strcmp(arr1, arr2))
//	{
//		printf("same\n");
//	}
//	else
//		printf("different\n");
//}

//今年是2019年，1~2019中有多少个包含数字9的数。包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		n = i;
//		while (n != 0)
//		{
//			int d = 0;
//			d = n % 10;
//			if (d == 9)
//			{
//				count++;
//				break;
//			}
//			n = n / 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//用户名：admin，密码：admin
//多组测试数据，每行有两个用空格分开的字符串，第一个为用户名，第二个位密码
//针对每组输入测试数据，输出为一行，一个字符串（“Login Success!”或“Login Fail!”）
//int main()
//{
//	char a[10] = {0};
//	char b[10] = {0};
//	while (~scanf("%s %s", a, b))
//	{
//		if (strcmp(a, "admin") == 0 && strcmp(b, "admin") == 0)
//		{
//			printf("Login Success!\n");
//		}
//		else
//			printf("Login Fail!\n");
//	}
//}

//第一行包含两个整数m和n，表示图像的行数和列数，用单个空格隔开。1≤m≤100, 1≤n≤100。之后m行，每行n个整数0或1，表示第一幅黑白图像上各像素点的颜色，相邻两个数用单个空格隔开。之后m行，每行n个整数0或1，表示第二幅黑白图像上各像素点的颜色，相邻两个数用单个空格隔开
//一个实数，表示相似度(以百分比的形式给出)，精确到小数点后两位
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int j = 0;
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	int k = 0;
//	double rate = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				k ++;
//			}
//		}
//	}
//	rate = (k*1.0) / (m*n)*100.0;
//	printf("%.2lf\n", rate);
//	return 0;
//}