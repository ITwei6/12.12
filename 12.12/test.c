#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	double a, b, c, sum, aver;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	sum = a + b + c;
//	aver = (a + b + c) / 3;
//	printf("%.2lf %.2lf", sum, aver);
//
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	double BMI;
//	BMI = n / ((m / 100) * (m / 100));
//	printf("%.2lf", BMI);
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	double circumference, area;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > 0 && a <= 100000 && b > 0 && b < 100000 && c>0 && c < 100000)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			
//			circumference = (double)a + (double)b + (double)c;
//			double p = circumference / 2;
//			double x = 0.5;
//			area = pow( p*(p - a) * (p - b) * (p - c), x);
//		}
//	}
//	printf("circumference=%.2lf area=%.2lf", circumference, area);
//	return 0;
//}
//#define T 3.1415926
//int main()
//{
//	double r;
//	scanf("%lf", &r);
//	double V;
//	V = (double)(4 * T * r * r * r / 3);
//	printf("%.3lf", V);
//	
//
//
//
//	return 0;
//}
//int main()
//{
//	char ch;
//	ch = getchar();
//	getchar();
//	putchar(ch + 32);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//    //1.������Ϊgetchar���յ��ַ��ڵ�������ASCII��ֵ����ʾ�ġ�
//    //2.���getcahr���մ�����᷵��EOF��EOFʵ���Ͼ���-1��
//
//    //ch =getchar() ����ַ�����,����ch     putchar(ch)������ch��
//    char ch = 0;
//    while ((ch = getchar()) != EOF)//EOF��Ϊ-1������伴ֻҪ���������ַ����ɴ�ӡ
//    {
//        //��Ϊ�س�Ҳ��һ���ַ��������������һ���ַ����к�getchar���ȡ���еĻس���
//        //���еĻس�����ȡ������ֹ�س�����ȡ��������ǰ����ȡһ�����Ļس�
//        getchar();
//        putchar(ch + 32);
//        printf("\n");
//    }
//    return 0;
//}
////char ch = 0;
////while ((ch = getchar()) != EOF)//EOF��Ϊ-1������伴ֻҪ���������ַ����ɴ�ӡ
////{
int main()
{
	char ch = 0;
	while ((ch = getchar()) != EOF)//EOF��Ϊ-1������伴ֻҪ���������ַ����ɴ�ӡ
	{
		putchar(ch+32);
		printf("\n");
	}
	return 0;
}