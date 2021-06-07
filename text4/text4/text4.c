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

//int main()
//{
//	int age = 5;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)
//		    printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else if (age >= 90)
//			printf("老不死\n");
//	};
//	return 0;
//}
//由上面可以看出if else 控制多条语句时，多条语句需要用大括号括起来

//C语言表示真假，0表示假，非0表示真；
//注意---else是和离得最近的没有进行匹配的if进行匹配的 
//列如将一个变量的类型去判断是不是一个常量时好的代码的书写风格是
//5==num1

//练习1：判断一个数是否为奇数（使用的核心思想是a%2==1？，也就是说看一个数除以2是不是余1）
//练习2：输出1-100之间（出现多少到多少之间的数--使用的是利用循环来实现）的奇数（就是奇数的判别加上将要判别的a做成一个循环）
//int main()
//{
//	int a = 1;
//	/*scanf("%d", &a);*/
//	for (a = 1; a < 101; a++)
//	{
//	if(1== a%2)
//		printf("%d是奇数\n",a);
//	}
//	return 0;
//} 


//switch(整型变量)
//{
//    case 1:函数式
//	  case 2:函数式
//    case 3:函数式
//	  case 4:函数式
//}
//整形变量里面是几就从几里面进去，一直向下执行，除非遇到break才会跳出switch语句
//如果输入的整形变量超过了给出的case的数量，那么就会不执行函数，超出了处理的范围就不进行任何的工作
//这个时候为了友好的提示输入人员，我们一般可以在末尾加上--default：函数式--在配上break进行友好的提示。

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)//n=1
//	{
//	case 1:
//		m++;//m=3
//	case 2:
//		n++;//n=2
//	case 3:
//		switch (n)
//		{//switch函数允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++, n++;//m=4,n=3
//			break;
//		}
//	case 4:
//		m++;//m=5，n=3
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);//m=5，n=3
//}


//break在while循环中的作用
//其实在循环中只要遇到break，就停止后期的所有循环，直接终止循环，所以：while中的break是用于永久终止循环的。


//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。


//int main()
//{
//	int ch = 0;
//	//ctrl+z,才能使getchar()接收到EOF
//	//EOF-end of file-> -1
//	while ((ch = getchar())!=EOF)//getchar()--接受键盘的字符
//		putchar(ch);//将ch这个字符在键盘上打印出来
//	return 0;
//}


//while（条件）
//语句；     ---表示只要满足这个条件就一直循环下去。区别于if语句，if（条件）意味着只要满足这个条件就执行一次if下面的语句。

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	int i = 0;
	scanf("%d%d", &num1, &num2);
	max = Max(num1, num2);
	for (i = 0; i < 100; i++)
	{
		printf("较大值为%d\n", max);
		printf("次数为%d\n", i);
	}
	return 0;
}