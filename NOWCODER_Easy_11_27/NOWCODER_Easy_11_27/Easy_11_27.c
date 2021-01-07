#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//将2~n之间的正整数放在数组内存储，将数组中2之后的所有能被2整除的数清0，再将3之后的所有能被3整除的数清0 ，以此类推，直到n为止。数组中不为0 的数即为素数
//多组输入，每行输入一个正整数（不大于100）
//针对每行输入的整数n，输出两行，第一行，输出n之内（包括n）的素数，用空格分隔
//第二行，输出数组中2之后0 的个数 每行输出后换行
//int main()
//{
//	int n = 0;
//	int arr[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n - 2; i++)
//		{
//			arr[i] = i + 2;
//		}
//
//		for (j = 2; j <= n; j++)
//		{
//			for (i = 0; i < n - 2;i++)
//			{
//				if (arr[i] % j == 0 && arr[i] > j)
//				{
//					arr[i] = 0;
//				}
//			}
//		}
//
//		for (i = 0; i < n - 2; i++)
//		{
//			if (arr[i] == 0)
//				count++;
//		}
//
//		for (j = 0; j < n - 2; j++)
//		{
//			if (arr[j] != 0)
//			{
//				printf("%d ", arr[j]);
//			}
//		}
//		printf("\n%d\n", count);
//		count = 0;
//	}
//	return 0;
//}


//输入描述:
//第一行输入一个整数(0≤N≤50)
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数
//第三行输入想要进行插入的一个整数
//输出为一行，N + 1个有序排列的整数
//int main()
//{
//	int arr[] = { 0 };
//	int sz = 0;
//	int i = 0;
//	int num = 0;
//	scanf("%d", &sz);
//	int arr1[] = { 0 };
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &num);
//	for (i = 0; i < sz ; i++)
//	{
//		arr1[i] = arr[i];
//		if ()
//	}
//
//	return 0;
//}

//一行，输入7个整数（0~100），代表7个成绩，用空格分隔
//一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行
//int main()
//{
//	int arr[7] = { 0 };
//	
//	int max = 0;
//	int min = 0;
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i<7; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	min = arr[0];
//	for (i = 0; i<7; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	for (i = 0; i<7; i++)
//	{
//		sum = sum + arr[i];
//	}
//	sum = sum - max - min;
//	printf("%.2lf\n", sum / 5.0);
//	
//	return 0;
//}

//多组输入，一个整数（3~20），表示数字三角形边的长度，即数字的数量，也表示输出行数
//针对每行输入，输出用数字组成的对应长度的数字三角形，每个数字后面有一个空格
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		for (i = 1; i <= input; i++)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//访问网站，得到HTTP状态码,常见HTTP状态码：200（OK，请求已成功），202（Accepted，服务器已接受请求，但尚未处理。）400（Bad Request，请求参数有误），403（Forbidden，被禁止），404（Not Found，请求失败），500（Internal Server Error，服务器内部错误），502（Bad Gateway，错误网关）
//多组输入，一行，一个整数表示HTTP状态码
//针对每组输入的HTTP状态，输出该状态码对应的含义，具体对应如下：
//200 - OK
//202 - Accepted
//400 - Bad Request
//403 - Forbidden
//404 - Not Found
//500 - Internal Server Error
//502 - Bad Gateway

//int main()
//{
//	int input = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		switch (input){
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		}
//	}
//	return 0;
//}


//多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“*”的数量
//针对每行输入，输出用“*”组成的“空心”正方形，每个“*”后面有一个空格

//多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度
//针对每行输入，输出用“*”组成的X形图案
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		for (i = 0; i < input; i++)
//		{
//			for (j = 0; j < input - i - 1; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (k = 0; k <= i; k++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//多组输入，一个整数（2~20），表示输出的行数，也表示组成正斜线的“*”的数量
//针对每行输入，输出用“*”组成的正斜线
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		for (i = 0; i < input; i++)
//		{
//			for (j = 0; j < input - i - 1; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (k = 0; k <= i; k++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//多组输入，一个整数（2~20）
//针对每行输入，输出用“*”组成的箭形
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		for (i = 0; i < input; i++)
//		{
//			for (j = 0; j < 2 * input - 2 * i; j++)
//			{
//				printf(" ");
//			}
//			for (k = 0; k <= i; k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//
//		for (i = 0; i <= input; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//		for (i = 0; i < input; i++)
//		{
//			for (j = 0; j < 2 + 2 * i; j++)
//			{
//				printf(" ");
//			}
//			for (k = 0; k < input - i; k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//多组输入，一个整数（2~20）
//针对每行输入，输出用“*”组成的菱形，每个“*”后面有一个空格

//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		for (i = 0; i < input; i++)
//		{
//			for (j = 0; j < input-i; j++)
//			{
//				printf(" ");
//			}
//			for (k = 0; k <= i; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//
//		for (i = 0; i <= input; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//
//		for (i = 0; i < input; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			for (k = 0; k < input - i; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//多组输入，一个整数（2~20），表示翻转金字塔边的长度，即“*”的数量，也表示输出行数
//针对每行输入，输出用“*”组成的金字塔，每个“*”后面有一个空格
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		for (i = 0; i < input; i++)
//		{
//			for (j = i; j > 0; j--)
//			{
//				printf(" ");
//			}
//			for (k = input - i ; k > 0; k--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//多组输入，一个整数（2~20），表示金字塔边的长度，即“*”的数量，，也表示输出行数
//针对每行输入，输出用“*”组成的金字塔，每个“*”后面有一个空格
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		for (i = 0; i < input; i++)
//		{
//			for (j = input - i - 1; j > 0; j--)
//			{
//				printf(" ");
//			}
//			for (k = 0; k <= i; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“*”的数量，也表示输出行数
//针对每行输入，输出用“*”组成的对应长度的直角三角形，每个“*”后面有一个空格
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		for (i = 0; i < input; i++)
//		{
//			for (j = input * 2 - (i + 1) * 2; j > 0; j--)
//			{
//				printf(" ");
//			}
//			for (k = 0; k <= i; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//多组输入，一个整数（2~20），表示翻转直角三角形直角边的长度，即“*”的数量，也表示输出行数
//针对每行输入，输出用“*”组成的对应长度的翻转直角三角形，每个“*”后面有一个空格
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		for (i = input; i > 0; i--)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“*”的数量，也表示输出行数
//针对每行输入，输出用“*”组成的对应长度的直角三角形，每个“*”后面有一个空格
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		for (i = 0; i < input; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//多组输入，一个整数（1~20），表示正方形的长度，也表示输出行数
//针对每行输入，输出用“*”组成的对应边长的正方形，每个“*”后面有一个空格
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		for (i = 0; i < input; i++)
//		{
//			for (j = 0; j < input; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//实现两个数的“加减乘除”运算，用户从键盘输入算式“操作数1运算符操作数2”，计算并输出表达式的值，如果输入的运算符号不包括在（+、-、*、/）范围内，输出“Invalid operation!”。当运算符为除法运算，即“/”时。如果操作数2等于0.0，则输出“Wrong!Division by zero!”
//多组输入，一行，操作数1运算符操作数2（其中运算符号包括四种： + 、 - 、*、 / ）
//针对每组输入，输出为一行
//如果操作数和运算符号均合法，则输出一个表达式，操作数1运算符操作数2 = 运算结果，各数小数点后均保留4位，数和符号之间没有空格
//如果输入的运算符号不包括在（ + 、 - 、*、 / ）范围内，输出“Invalid operation!”。当运算符为除法运算，即“ / ”时
//如果操作数2等于0.0，则输出“Wrong!Division by zero!”
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	char c = 0;
//	double d = 0.0;
//	while (scanf("%lf%c%lf", &a, &c, &b) != EOF)
//	{
//		switch (c){
//		case '+':
//		{
//			d = a + b;
//			printf("%.4lf+%.4lf=%.4lf\n", a, b, d);
//			break;
//		}
//		case '-':
//		{
//			d = a - b;
//			printf("%.4lf-%.4lf=%.4lf\n", a, b, d);
//			break;
//		}
//		case '*':
//		{
//			d = a * b;
//			printf("%.4lf*%.4lf=%.4lf\n", a, b, d);
//			break;
//		}
//		case '/':
//		{
//			if (b == 0.0)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else
//			{
//				d = a / b;
//				printf("%.4lf/%.4lf=%.4lf\n", a, b, a/b);
//			}
//			break;
//		}
//		default:
//			printf("Invalid operation!\n");
//			break;
//		}
//	}
//	return 0;
//}

//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int d[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		day = d[month - 1];
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			if (month == 2)
//				day++;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}

//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，当a = 0时，输出“Not quadratic equation”，当a ≠ 0时，根据△ = b2 - 4*a*c的三种情况计算并输出方程的根
//多组输入，一行，包含三个浮点数a, b, c，以一个空格分隔，表示一元二次方程ax2 + bx + c = 0的系数
//针对每组输入，输出一行，输出一元二次方程ax2 + bx + c = 0的根的情况
//如果a = 0，输出“Not quadratic equation”；
//如果a ≠  0，分三种情况：
//△ = 0，则两个实根相等，输出形式为：x1 = x2 = ...
//△  > 0，则两个实根不等，输出形式为：x1 = ...; x2 = ...，其中x1 <= x2
//△  < 0，则有两个虚根，则输出：x1 = 实部 - 虚部i; x2 = 实部 + 虚部i，即x1的虚部系数小于等于x2的虚部系数，实部为0时不可省略。实部 = -b / (2 * a), 虚部 = sqrt(-△) / (2 * a)
//所有实数部分要求精确到小数点后2位，数字、符号之间没有空格
//#include <math.h>
//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	float dt = 0;
//	float x1 = 0;
//	float x2 = 0; 
//	float m = 0;
//	float n = 0;
//	while (scanf("%f %f %f", &a, &b, &c) != EOF)
//	{
//		if (a == 0.0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			dt = b*b - 4 * a*c;
//			if (dt == 0)
//			{
//				x1 = -b / (2 * a);
//				x2 = -b / (2 * a);
//				printf("x1=x2=%.2f\n", x1);
//			}
//			else if(dt > 0)
//			{
//				x1 = (-b - sqrt(dt)) / (2 * a);
//				x2 = (-b + sqrt(dt)) / (2 * a);
//				printf("x1=%.2f;x2=%.2f\n", x1,x2);
//			}
//			else
//			{
//				m = (-b / (2 * a));
//				n = (sqrt(-dt) / (2 * a));
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", m, n, m, n);
//			}
//		}
//	}
//	return 0;
//}

//多组输入，每一行包括两个整数，用空格隔开，分别为体重（公斤）和身高（厘米）
//针对每行输入，输出为一行，人体胖瘦程度，即分类
//BMI=weight(kg)/high*high(m)
//int main()
//{
//	int weight = 0;
//	int high = 0;
//	float BMI = 0.0;
//	while (scanf("%d %d", &weight, &high) != EOF)
//	{
//		BMI = weight / ((high / 100.0)*(high / 100.0));
//		if (BMI < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (BMI >= 18.5 &&  BMI <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (BMI > 23.9 && BMI <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else if (BMI > 27.9)
//		{
//			printf("Obese\n");
//		}
//	}
//	return 0;
//}

//假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.
//一行，字符序列，包含A或B，输入以字符0结束
//一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等
//int main()
//{
//	char a = 0;
//	int count_A = 0;
//	int count_B = 0;
//	while ((scanf("%c", &a)) != EOF)
//	{
//		if (a == 'A')
//		{
//			count_A++;
//		}
//		else if (a == 'B')
//		{
//			count_B++;
//		}
//		else if (a == '0')
//			break;
//	}
//	if (count_A > count_B)
//	{
//		printf("A\n");
//	}
//	else if (count_A < count_B)
//	{
//		printf("B\n");
//	}
//	else
//	{
//		printf("E\n");
//	}
//	return 0;
//}

//多组输入，每行输入包括三个整数表示的分数（0~100），用空格分隔
//针对每行输入，输出为一行，即三个分数中的最高分
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	while (scanf("%d %d %d", &a, &b, &c) 1= EOF)
//	{
//		if (a < b)
//		{
//			int tmp;
//			tmp = a;
//			a = b;
//			b = tmp;
//		}
//		if (b < c)
//		{
//			int tmp;
//			tmp = b;
//			b = c;
//			c = tmp;
//		}
//		if (a < b)
//		{
//			int tmp;
//			tmp = a;
//			a = b;
//			b = tmp;
//		}
//		printf("%d\n",a);
//	}
//	return 0;
//}

//多组输入，每一行输入一个字母
//针对每组输入，输出单独占一行，输出字母的对应形式
//int main()
//{
//	char a = 0;
//	while (scanf("%c", &a) != EOF)
//	{
//		getchar();
//		if (a <= 'z' && a >= 'a')
//		{
//			a = a - 32;
//		}
//		else if (a <= 'Z' && a >= 'A')
//		{
//			a = a + 32;
//		}
//		printf("%c\n", a);
//	}
//	return 0;
//}

//从键盘输入n个学生成绩（不超过40个），输出每组排在前五高的成绩
//两行，第一行输入一个整数，表示n个学生（ >= 5），第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔
//输出成绩最高的前五个，用空格分隔

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int arr[40] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 40-1; i > 0; i--)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//多组输入数据，每一行输入三个a，b，c(0<a, b, c<1000)，作为三角形的三个边，用空格分隔
//针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if ((a + b > c) && (c + b > a) && (a + c > b))
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b && b != c) || (a == c && b != c) || (c == b && b != a))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//				printf("Ordinary triangle!\n");
//
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}

//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）
//多组输入，每行输入包括一个字符
//针对每行输入，输出该字符是字母（YES）或不是（NO）

//int main()
//{
//	char a;
//	while (scanf("%c", &a) != EOF)
//	{
//		getchar();
//		if ((a <= 'z' && a >= 'a') || (a <= 'Z' && a >= 'A'))
//		{
//			printf("YES\n");
//		}
//		else
//			printf("NO\n");
//	}
//	return 0;
//}

//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）, （14和61）, （146和1), 如果所有拆分后的乘积之和等于自身，则是一个Lily Number
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//求出5位数中的所有 Lily Number

//int main()
//{
//	int i = 0;
//	int count = 0;
//	int sum = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		sum = (i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10);
//		if (sum == i)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求最终所花的钱数
//输入一行，四个数字，第一个数表示看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）
//输出一行，实际花的钱数（保留两位小数）

//int main()
//{
//	float a = 0;
//	int month = 0;
//	int date = 0;
//	int k = 0;
//	float price = 0;
//	scanf("%f %d %d %d",&a, &month, &date, &k);
//	if ((month == 11) && (date == 11))
//	{
//		if (k)
//		{
//			price = a * 0.7 - 50;
//		}
//		else
//			price = a * 0.7;
//	}
//
//	else if ((month == 12) && (date == 12))
//	{
//		if (k)
//		{
//			price = a * 0.8 - 50;
//		}
//		else
//			price = a * 0.8;
//	}
//	else
//		price = a;
//	if (price>0)
//	{
//		printf("%.2f\n", price);
//	}
//	else
//		printf("0.00\n");
//	return 0;
//}

//输入一个十六进制数a，和一个八进制数b，输出a+b的十进制结果
//输入一行，一个十六进制数a，和一个八进制数b，中间间隔一个空格
//输出一行，a + b的十进制结果
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("0x%x 0%o", &a, &b);
//	c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）
//
//int main()
//{
//	int arr[5] = { 0 };
//	float average = 0.0;
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum = sum + arr[i];
//	}
//	average = sum / 5.0;
//	printf("%.1f\n", average);
//	return 0;
//}

//一箱酸奶，里面有n盒未打开的酸奶，每h分钟能喝光一盒酸奶,在喝光一盒酸奶之前不会喝另一个，经过m分钟后还有多少盒未打开的酸奶？
//多组输入，每组输入仅一行，包括n，h和m（均为整数） 输入数据保证m <= n * h
//针对每组输入，输出也仅一行，剩下的未打开的酸奶盒数

//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	int a = 0;
//	scanf("%d %d %d", &n, &h, &m);
//	if (m%h == 0)
//	{
//		a = n - m / h;
//	}
//	else
//		a = n - m / h - 1;
//	printf("%d\n", a);
//	return 0;
//}

//不使用累计乘法的基础上，通过移位运算（ << ）实现2的n次方的计算
//输入多组输入，每一行输入整数n（0 <= n < 31）
//针对每组输入输出对应的2的n次方的结果
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		a = 1 << a;// 如何使用移位操作？？
//		printf("%d\n",a);
//	}
//	return 0;
//}

//实现字母的大小写转换
//多组输入，每一行输入大写字母
//针对每组输入输出对应的小写字母
//
//int main()
//{
//	char a = '0';
//	while(scanf("%c",&a) != EOF)
//	{
//		getchar();//getchar如何吸收掉换行符？？
//		printf("%c\n", a + 32);
//	}
//	return  0;
//}
//给定一个球体的半径，计算其体积。其中球体体积公式为 V = 4 / 3 * πr3，其中 π = 3.1415926
//输入一行，用浮点数表示的球体的半径
//输出一行，球体的体积，小数点后保留3位

//int main()
//{
//	double p = 3.1415926;
//	float r = 0.0;
//	double V = 0.0;
//	scanf("%f", &r);
//	V = (4 * p * r * r * r)/3;
//	printf("%.3f\n",V);
//	return 0;
//}

//根据给出的三角形3条边a, b, c,计算三角形的周长和面积
//输入一行，三角形3条边（能构成三角形），中间用一个空格隔开
//输出一行，三角形周长和面积（保留两位小数），中间用一个空格隔开
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	float circumference = 0.0;
//	float area = 0.0;
//	scanf("%d %d %d", &a, &b, &c);
//	circumference = (a + b + c)*1.0;
//	area = sqrt(circumference/2*(circumference/2 - a)*(circumference/2 - b)*(circumference/2 - c));
//	printf("circumference=%.2f area=%.2f\n", circumference, area);
//	return 0;
//}

//输入两个整数，交换两个数并输出
//输入只有一行，按照格式输入两个整数，范围，中间用“, ”分隔
//把两个整数按格式输出，中间用“, ”分隔
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp;
//	scanf("a=%d,b=%d", &a, &b);//注意 scanf不要加\n
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//一行，两个整数，分别表示体重（公斤），身高（厘米），中间用一个空格分隔
//一行，BMI指数（保留两位小数）
//int main()
//{
//	int high = 0;
//	int weight = 0;
//	int ret0 = 0;
//	int ret1 = 0;
//	float a = 0.0;
//	float BMI = 0.0;
//	scanf("%d %d", &weight,&high);
//	ret0 = high / 100;
//	ret1 = high % 100;
//	a = ret0 + ret1*0.01;
//	BMI = weight / (a*a)*1.0;
//	printf("%.2f\n", BMI);
//	return 0;
//}

//一行，一个字符
//一行，输出输入字符对应的ASCII码
//int main()
//{
//	char a ;
//	scanf("%c",&a);
//	printf("%d\n", a);
//	return 0;
//}

//输入只有一行，按照格式输入两个整数，范围，中间用“, ”分隔
//把两个整数按格式输出，中间用“, ”分隔
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	scanf("%d,%d",&a,&b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d\n", a,b);
//	return 0;
//}
//输入只有一行，出生日期包括年月日，年月日之间的数字没有分隔符
//三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0
//通过scanf函数的%m格式控制可以指定输入域宽，输入数据域宽（列数），按此宽度截取所需数据；通过printf函数的%0格式控制符，输出数值时指定左面不使用的空位置自动填0
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year,&month,&date);
//	printf("year=%4d\n",year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}

//ASCII码为对应字符并输出
//int main()
//{
//	int input[12] = {73,32,99,97,110,32,100,111,32,105,116,33};
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%c",input[i]);
//	}
//	printf("\n");
//	return 0;
//}

//输入只有一行，一个字符
//该字符构成的三角形金字塔
//int main()
//{
//	char input = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	scanf("%c",&input);
//	for (i = 1; i <= 5; i++)
//	{
//		for (k = 5 - i; k > 0; k--)
//			printf(" ");
//		for (j = 1; j <= i; j++)
//			printf("%c ", input);
//		printf("\n");
//	}
//	return 0;
//}

//依次输入一个学生的学号,以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩
//学号以及3科成绩，之间用英文分号隔开
//int main()
//{
//	float a = 0.0;
//	float b = 0.0;
//	float c = 0.0;
//	long d = 0;
//	scanf("%ld;%f,%f,%f",&d,&a,&b,&c);
//	printf("The each subject score of  No. %ld is %.2f, %.2f, %.2f.\n",d,a,b,c);
//	return 0;
//}

//第一行为“Hello world!”
//第二行为printf(“Hello world!”)调用后的返回值
//int main()
//{
//	int a = printf("Hello world!");
//	printf("\n");
//	printf("%d\n", a);
//	return 0;
//}

//十六进制整数ABCDEF对应的十进制整数，所占域宽为15
//使用格式控制串“%md”输出域宽为m的十进制整数
//int main()
//{
//	int a = 0xABCDEF;
//	printf("%15d\n",a);
//	return 0;
//}

//十进制整数1234对应的八进制和十六进制（字母大写），在八进制前显示前导0，在十六进制数前显示前导0X
//使用格式控制串“%o”、“%X”分别输出八进制整数和十六进制整数，并使用修饰符“#”控制前导显示
//int main()
//{
//	int a = 1234;
//	printf("0%o 0X%X\n",a,a);
//	return 0;
//}

//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//	return 0;
//}