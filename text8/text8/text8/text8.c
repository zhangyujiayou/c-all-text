#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"

int main()
{
	int sum = 0;
	int a = 10;
	int b = 20;
	sum = ADD(a, b);
	printf("%d\n", sum);
	return 0;
}