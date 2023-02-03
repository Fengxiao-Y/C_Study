# define _CRT_SECURE_NO_WARNINGS 1
//使用scanf，必须放在第一行
#include <stdio.h>
int main()
{
	//printf("第一个C语言程序\n");
<<<<<<< HEAD
	//代码管理踩坑
=======
>>>>>>> baa4187998938bb543c17bc6fb8311441bdd24d1
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8

	//%d - 整型
<<<<<<< HEAD
	//%f - float
	//%lf - double
=======
		//%f - float
		//%lf - double
>>>>>>> baa4187998938bb543c17bc6fb8311441bdd24d1
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);

	//scanf_s函数 -VS 编译提供的，不是C语言标准规定的
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}