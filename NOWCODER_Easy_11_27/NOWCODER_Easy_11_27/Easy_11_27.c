#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//��2~n֮������������������ڴ洢����������2֮��������ܱ�2����������0���ٽ�3֮��������ܱ�3����������0 ���Դ����ƣ�ֱ��nΪֹ�������в�Ϊ0 ������Ϊ����
//�������룬ÿ������һ����������������100��
//���ÿ�����������n��������У���һ�У����n֮�ڣ�����n�����������ÿո�ָ�
//�ڶ��У����������2֮��0 �ĸ��� ÿ���������
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


//��������:
//��һ������һ������(0��N��50)
//�ڶ�������N���������е������������ÿո�ָ���N������
//������������Ҫ���в����һ������
//���Ϊһ�У�N + 1���������е�����
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

//һ�У�����7��������0~100��������7���ɼ����ÿո�ָ�
//һ�У����ȥ����߷ֺ���ͷֵ�ƽ���ɼ���С�������2λ��ÿ���������
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

//�������룬һ��������3~20������ʾ���������αߵĳ��ȣ������ֵ�������Ҳ��ʾ�������
//���ÿ�����룬�����������ɵĶ�Ӧ���ȵ����������Σ�ÿ�����ֺ�����һ���ո�
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


//������վ���õ�HTTP״̬��,����HTTP״̬�룺200��OK�������ѳɹ�����202��Accepted���������ѽ������󣬵���δ������400��Bad Request������������󣩣�403��Forbidden������ֹ����404��Not Found������ʧ�ܣ���500��Internal Server Error���������ڲ����󣩣�502��Bad Gateway���������أ�
//�������룬һ�У�һ��������ʾHTTP״̬��
//���ÿ�������HTTP״̬�������״̬���Ӧ�ĺ��壬�����Ӧ���£�
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


//�������룬һ��������3~20������ʾ�����������Ҳ��ʾ��������αߵġ�*��������
//���ÿ�����룬����á�*����ɵġ����ġ������Σ�ÿ����*��������һ���ո�

//�������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ���
//���ÿ�����룬����á�*����ɵ�X��ͼ��
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

//�������룬һ��������2~20������ʾ�����������Ҳ��ʾ�����б�ߵġ�*��������
//���ÿ�����룬����á�*����ɵ���б��
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

//�������룬һ��������2~20��
//���ÿ�����룬����á�*����ɵļ���
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

//�������룬һ��������2~20��
//���ÿ�����룬����á�*����ɵ����Σ�ÿ����*��������һ���ո�

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

//�������룬һ��������2~20������ʾ��ת�������ߵĳ��ȣ�����*����������Ҳ��ʾ�������
//���ÿ�����룬����á�*����ɵĽ�������ÿ����*��������һ���ո�
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

//�������룬һ��������2~20������ʾ�������ߵĳ��ȣ�����*������������Ҳ��ʾ�������
//���ÿ�����룬����á�*����ɵĽ�������ÿ����*��������һ���ո�
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

//�������룬һ��������2~20������ʾֱ��������ֱ�Ǳߵĳ��ȣ�����*����������Ҳ��ʾ�������
//���ÿ�����룬����á�*����ɵĶ�Ӧ���ȵ�ֱ�������Σ�ÿ����*��������һ���ո�
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

//�������룬һ��������2~20������ʾ��תֱ��������ֱ�Ǳߵĳ��ȣ�����*����������Ҳ��ʾ�������
//���ÿ�����룬����á�*����ɵĶ�Ӧ���ȵķ�תֱ�������Σ�ÿ����*��������һ���ո�
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

//�������룬һ��������2~20������ʾֱ��������ֱ�Ǳߵĳ��ȣ�����*����������Ҳ��ʾ�������
//���ÿ�����룬����á�*����ɵĶ�Ӧ���ȵ�ֱ�������Σ�ÿ����*��������һ���ո�
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

//�������룬һ��������1~20������ʾ�����εĳ��ȣ�Ҳ��ʾ�������
//���ÿ�����룬����á�*����ɵĶ�Ӧ�߳��������Σ�ÿ����*��������һ���ո�
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

//ʵ���������ġ��Ӽ��˳������㣬�û��Ӽ���������ʽ��������1�����������2�������㲢������ʽ��ֵ����������������Ų������ڣ�+��-��*��/����Χ�ڣ������Invalid operation!�����������Ϊ�������㣬����/��ʱ�����������2����0.0���������Wrong!Division by zero!��
//�������룬һ�У�������1�����������2������������Ű������֣� + �� - ��*�� / ��
//���ÿ�����룬���Ϊһ��
//�����������������ž��Ϸ��������һ�����ʽ��������1�����������2 = ������������С����������4λ�����ͷ���֮��û�пո�
//��������������Ų������ڣ� + �� - ��*�� / ����Χ�ڣ������Invalid operation!�����������Ϊ�������㣬���� / ��ʱ
//���������2����0.0���������Wrong!Division by zero!��
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

//�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ�
//���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж�����
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

//�Ӽ�������a, b, c��ֵ����̼��㲢���һԪ���η���ax2 + bx + c = 0�ĸ�����a = 0ʱ�������Not quadratic equation������a �� 0ʱ�����ݡ� = b2 - 4*a*c������������㲢������̵ĸ�
//�������룬һ�У���������������a, b, c����һ���ո�ָ�����ʾһԪ���η���ax2 + bx + c = 0��ϵ��
//���ÿ�����룬���һ�У����һԪ���η���ax2 + bx + c = 0�ĸ������
//���a = 0�������Not quadratic equation����
//���a ��  0�������������
//�� = 0��������ʵ����ȣ������ʽΪ��x1 = x2 = ...
//��  > 0��������ʵ�����ȣ������ʽΪ��x1 = ...; x2 = ...������x1 <= x2
//��  < 0����������������������x1 = ʵ�� - �鲿i; x2 = ʵ�� + �鲿i����x1���鲿ϵ��С�ڵ���x2���鲿ϵ����ʵ��Ϊ0ʱ����ʡ�ԡ�ʵ�� = -b / (2 * a), �鲿 = sqrt(-��) / (2 * a)
//����ʵ������Ҫ��ȷ��С�����2λ�����֡�����֮��û�пո�
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

//�������룬ÿһ�а��������������ÿո�������ֱ�Ϊ���أ��������ߣ����ף�
//���ÿ�����룬���Ϊһ�У��������ݳ̶ȣ�������
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

//������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.
//һ�У��ַ����У�����A��B���������ַ�0����
//һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ�����
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

//�������룬ÿ�������������������ʾ�ķ�����0~100�����ÿո�ָ�
//���ÿ�����룬���Ϊһ�У������������е���߷�
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

//�������룬ÿһ������һ����ĸ
//���ÿ�����룬�������ռһ�У������ĸ�Ķ�Ӧ��ʽ
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

//�Ӽ�������n��ѧ���ɼ���������40���������ÿ������ǰ��ߵĳɼ�
//���У���һ������һ����������ʾn��ѧ���� >= 5�����ڶ�������n��ѧ���ɼ���������ʾ����Χ0~100�����ÿո�ָ�
//����ɼ���ߵ�ǰ������ÿո�ָ�

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

//�����������ݣ�ÿһ����������a��b��c(0<a, b, c<1000)����Ϊ�����ε������ߣ��ÿո�ָ�
//���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!��
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

//�Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд��
//�������룬ÿ���������һ���ַ�
//���ÿ�����룬������ַ�����ĸ��YES�����ǣ�NO��

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

//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�����1461 ���Բ�ֳɣ�1��461��, ��14��61��, ��146��1), ������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//���5λ���е����� Lily Number

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

//��������ǡ�˫11����11��11�գ�������·���7�ۣ���˫12�� ��12��12�գ�������·���8�ۣ�������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã���������������Ǯ��
//����һ�У��ĸ����֣���һ������ʾ���е��·��۸񣬵ڶ��͵����������ֱ��ʾ������·ݡ���������ڡ����ĸ�������ʾ�Ƿ����Ż�ȯ�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ��
//���һ�У�ʵ�ʻ���Ǯ����������λС����

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

//����һ��ʮ��������a����һ���˽�����b�����a+b��ʮ���ƽ��
//����һ�У�һ��ʮ��������a����һ���˽�����b���м���һ���ո�
//���һ�У�a + b��ʮ���ƽ��
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

//����5��ѧ���ĳɼ����������������ǵ�ƽ���ɼ���������������һλС����
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

//һ�����̣�������n��δ�򿪵����̣�ÿh�����ܺȹ�һ������,�ںȹ�һ������֮ǰ�������һ��������m���Ӻ��ж��ٺ�δ�򿪵����̣�
//�������룬ÿ�������һ�У�����n��h��m����Ϊ������ �������ݱ�֤m <= n * h
//���ÿ�����룬���Ҳ��һ�У�ʣ�µ�δ�򿪵����̺���

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

//��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨 << ��ʵ��2��n�η��ļ���
//����������룬ÿһ����������n��0 <= n < 31��
//���ÿ�����������Ӧ��2��n�η��Ľ��
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		a = 1 << a;// ���ʹ����λ��������
//		printf("%d\n",a);
//	}
//	return 0;
//}

//ʵ����ĸ�Ĵ�Сдת��
//�������룬ÿһ�������д��ĸ
//���ÿ�����������Ӧ��Сд��ĸ
//
//int main()
//{
//	char a = '0';
//	while(scanf("%c",&a) != EOF)
//	{
//		getchar();//getchar������յ����з�����
//		printf("%c\n", a + 32);
//	}
//	return  0;
//}
//����һ������İ뾶��������������������������ʽΪ V = 4 / 3 * ��r3������ �� = 3.1415926
//����һ�У��ø�������ʾ������İ뾶
//���һ�У�����������С�������3λ

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

//���ݸ�����������3����a, b, c,���������ε��ܳ������
//����һ�У�������3���ߣ��ܹ��������Σ����м���һ���ո����
//���һ�У��������ܳ��������������λС�������м���һ���ո����
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

//�����������������������������
//����ֻ��һ�У����ո�ʽ����������������Χ���м��á�, ���ָ�
//��������������ʽ������м��á�, ���ָ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp;
//	scanf("a=%d,b=%d", &a, &b);//ע�� scanf��Ҫ��\n
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//һ�У������������ֱ��ʾ���أ��������ߣ����ף����м���һ���ո�ָ�
//һ�У�BMIָ����������λС����
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

//һ�У�һ���ַ�
//һ�У���������ַ���Ӧ��ASCII��
//int main()
//{
//	char a ;
//	scanf("%c",&a);
//	printf("%d\n", a);
//	return 0;
//}

//����ֻ��һ�У����ո�ʽ����������������Χ���м��á�, ���ָ�
//��������������ʽ������м��á�, ���ָ�
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
//����ֻ��һ�У��������ڰ��������գ�������֮�������û�зָ���
//���У���һ��Ϊ������ݣ��ڶ���Ϊ�����·ݣ�������Ϊ�������ڡ����ʱ����·ݻ�����Ϊ1λ������Ҫ��1λ��ǰ�油0
//ͨ��scanf������%m��ʽ���ƿ���ָ�������������������������������˿�Ƚ�ȡ�������ݣ�ͨ��printf������%0��ʽ���Ʒ��������ֵʱָ�����治ʹ�õĿ�λ���Զ���0
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

//ASCII��Ϊ��Ӧ�ַ������
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

//����ֻ��һ�У�һ���ַ�
//���ַ����ɵ������ν�����
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

//��������һ��ѧ����ѧ��,�Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ�������Ļ�������ѧ����ѧ�ţ�3�Ƴɼ�
//ѧ���Լ�3�Ƴɼ���֮����Ӣ�ķֺŸ���
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

//��һ��Ϊ��Hello world!��
//�ڶ���Ϊprintf(��Hello world!��)���ú�ķ���ֵ
//int main()
//{
//	int a = printf("Hello world!");
//	printf("\n");
//	printf("%d\n", a);
//	return 0;
//}

//ʮ����������ABCDEF��Ӧ��ʮ������������ռ���Ϊ15
//ʹ�ø�ʽ���ƴ���%md��������Ϊm��ʮ��������
//int main()
//{
//	int a = 0xABCDEF;
//	printf("%15d\n",a);
//	return 0;
//}

//ʮ��������1234��Ӧ�İ˽��ƺ�ʮ�����ƣ���ĸ��д�����ڰ˽���ǰ��ʾǰ��0����ʮ��������ǰ��ʾǰ��0X
//ʹ�ø�ʽ���ƴ���%o������%X���ֱ�����˽���������ʮ��������������ʹ�����η���#������ǰ����ʾ
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