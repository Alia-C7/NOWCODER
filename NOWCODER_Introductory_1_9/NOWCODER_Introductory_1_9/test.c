#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����һ��1!+2!+3!+...+n!
//��������:һ�У�һ������n
//�������:һ�У�һ����������ʾ1!+ 2!+ 3!+ ... + n!�Ľ��
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

//��֪���༶��˭����ѧ�ɼ����
//��n+1��
//��һ������һ����n������n��ͬѧ��
//�ڶ�������n�������ÿո�����������༶��ÿ���˵���ѧ�ɼ�
//һ�������������༶����ߵ���ѧ�ɼ�
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

//ͳ��һ�°༶��һ���ж�������Ҫ����ҳ�
//�����ɼ������ģ���ѧ�����ƽ���ֵ���60�Ľ�����ҳ�
//��n+1��
//��һ�У�����һ����n������n��ͬѧ
//��n����ÿ�������������������༶��һ��ͬѧ�����Ƴɼ������ģ���ѧ��������ÿո�ָ�
//һ�У�һ�������������༶����Ҫ����ҳ�������
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

//Ҫ�������ȥ�غ󰴴�С��������
//��һ�а���һ��������n����ʾ������n����
//��������n�У�ÿ��һ��������k��Ϊ������ÿһ��Ԫ�ص�ֵ(1 �� n �� 105��1 �� k �� n)
//���һ�У�Ϊȥ�����������У�ÿ����������һ���ո�
//����

//Ҫ��n��̨�ף�ÿ�ο���ѡ����һ�׻��������ף�һ���ж������߷���
//�������һ������n (1 �� n �� 30)
//���һ�������������ߵķ�����
//����

//ǰ����n�����ڵȵ���
//����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ�
//����㻹��Ҫ���ٷ��Ӳ��ܳ˵��ݵ���¥��
//�������һ������n 
//���һ����������С���ֵ���¥����Ҫ��ʱ��
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

//֪�����ڵ�ʱ�̣��Լ�˯����ʱ�������趨һ��������(ֻ����ʱ�ͷ֣�����������)
//�������ڵ�ʱ���Լ�Ҫ˯��ʱ��k����λ��minute�����м��ÿո�ֿ�
//�����ʽ��hour:minute k(��hour��minute��ֵΪ1������Ϊ1��������01)
//(0 �� hour �� 23��0 �� minute �� 59��1 �� k �� 109)
//����ÿ�����룬�������Ӧ���趨��ʱ��
//�����ʽΪ��׼ʱ�̱�ʾ������ʱ�ͷֶ�������λ��ʾ��λ��������ǰ��0���룩
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