# define _CRT_SECURE_NO_WARNINGS 1
//ʹ��scanf��������ڵ�һ��
#include <stdio.h>

int main()
{
	//printf("�Ǻ�\n");

	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8

	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n",sum);
	return 0;
}