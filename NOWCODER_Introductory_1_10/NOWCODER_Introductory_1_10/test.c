#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��֪��һ��n�׷����Ƿ�Ϊ�����Ǿ���
//�����Ǿ������Խ������µ�Ԫ�ض�Ϊ0�ľ���
//���Խ���Ϊ�Ӿ�������Ͻ������½ǵ�����
//��������:
//��һ�а���һ������n����ʾһ���������n��n�У��ÿո�ָ�(2��n��10)
//��2��n + 1�У�ÿ������n���������ÿո�ָ���������n*n����
//������� :һ�У�������뷽���������Ǿ������"YES"�����У��������"NO"������
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

//����n��������һ������x����n���������ж�x���ּ���
//��������:
//��3��
//��һ�У�һ����������ʾn��1 <= n <= 100��
//�ڶ��У�������n����������������֮���ÿո�ָ�
//�����У�����һ����������ʾҪ���ҵ�����x
//�������:һ�У���ʾ����x���ֵĴ���
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

//�Զ��庯�����������¹�ʽ����m��ֵ
//m=max3(a+b,b,c)/(max3(a,b+c,c)+max3(a,b,b+c))
//���������������ÿո�������ֱ��ʾa, b, c
//���һ�У�һ����������С���㱣��2λ��Ϊ�����m��ֵ
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