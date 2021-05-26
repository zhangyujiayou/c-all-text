#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//c语言是一门结构化的程序设计语言
//1：顺序结构
//2：选择结构--分支语句
//3：循环结构--循环语句
//int main()
//{
//	int a = 0;
//	;//是语句--空语句
//	return 0;
//}


//if语句
//if（表达式）；
//语句；

//if语句
//if（表达式）
//语句；
//else
//语句；

//多语句表达式
//if (表达式1)；
//语句1；
//else if (表达式2)；
//语句2；
//else
//语句3；

int main()
{
	int age = 5;
	if (age < 18)
	{
		printf("未成年\n");
		printf("不能谈恋爱\n");
	}
	else
	{
		if (age >= 18 && age < 28)
		    printf("青年\n");
		else if (age >= 28 && age < 50)
			printf("壮年\n");
		else if (age >= 50 && age < 90)
			printf("老年\n");
		else if (age >= 90)
			printf("老不死\n");
	};
	return 0;
}
//由上面可以看出if else 控制多条语句时，多条语句需要用大括号括起来

//C语言表示真假，0表示假，非0表示真；
//注意---else是和离得最近的没有进行匹配的if进行匹配的 
//列如将一个变量的类型去判断是不是一个常量时好的代码的书写风格是
//5==num1