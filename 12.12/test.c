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
//    //1.这是因为getchar接收的字符在电脑上以ASCII码值来表示的。
//    //2.如果getcahr接收错误则会返回EOF而EOF实际上就是-1；
//
//    //ch =getchar() 这叫字符输入,输入ch     putchar(ch)这叫输出ch；
//    char ch = 0;
//    while ((ch = getchar()) != EOF)//EOF意为-1。本语句即只要输入项是字符即可打印
//    {
//        //因为回车也算一个字符，所以在输入第一个字符换行后，getchar会读取换行的回车键
//        //换行的回车被读取，若防止回车被读取，可在其前面多读取一次消耗回车
//        getchar();
//        putchar(ch + 32);
//        printf("\n");
//    }
//    return 0;
//}
////char ch = 0;
////while ((ch = getchar()) != EOF)//EOF意为-1。本语句即只要输入项是字符即可打印
////{
int main()
{
	char ch = 0;
	while ((ch = getchar()) != EOF)//EOF意为-1。本语句即只要输入项是字符即可打印
	{
		putchar(ch+32);
		printf("\n");
	}
	return 0;
}