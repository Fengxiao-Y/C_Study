# define _CRT_SECURE_NO_WARNINGS 1
<<<<<<< HEAD
//ʹ��scanf��������ڵ�һ��
=======
//使用scanf，必须放在第一行
>>>>>>> 6cfa77f4546f15cbb3a959d3b6ad34b3ed601e5c
#include <stdio.h>

int main()
{
<<<<<<< HEAD
	//printf("��һ��C���Գ���\n");
=======
	//printf("第一个C语言程序\n");。。。。
>>>>>>> 6cfa77f4546f15cbb3a959d3b6ad34b3ed601e5c

	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
<<<<<<< HEAD
	//%d - ����
=======
	//%d - 整型
>>>>>>> 6cfa77f4546f15cbb3a959d3b6ad34b3ed601e5c
    //%f - float
    //%lf - double
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
<<<<<<< HEAD
	//scanf_s���� -VS �����ṩ�ģ�����C���Ա�׼�涨��
	sum = a + b;
	printf("sum = %d\n",sum);
	return 0;
}
=======
	//scanf_s函数 -VS 编译提供的，不是C语言标准规定的
	sum = a + b;
	printf("sum = %d\n",sum);
	return 0;
}
>>>>>>> 6cfa77f4546f15cbb3a959d3b6ad34b3ed601e5c
