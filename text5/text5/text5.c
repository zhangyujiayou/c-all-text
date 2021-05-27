#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int ch = 0;
//	//EOF-end of file 文件结束标志
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}



//int ret = 0;
//int ch = 0;
//char password[20] = { 0 };
//int main()
//{
//	printf("请输入密码：");
//	scanf("%s", password);//输入密码，并且放在password数组中,并且scanf只会读走输入缓存器中空格前面的东西--ep ：输入1234 ABCD -- 则只会读走1234 输入缓存器中还会留下空格+ABCD
//	//getchar();//将之前的一个输入缓存器中的因为scanf函数而留下的'\n'字符读走
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认Y/N：");
//	ret = getchar();//getchar()类似于scanf函数
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//	return 0;
//}
////getchar()的用法，利用getchar去读取/读空（利用while循环）输入缓存器中的数据。常用的一种用法。或者去读取当前的用户键入的数据。


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;//continue的用法是终止本次循环。不继续continue以下的内容。
//		putchar(ch);       //这个main函数的意思就是只能输出0~9之间的数字
//	}
//	return 0;
//}


//for(表达式1；表达式2；表达式3)
//语句;
//表达式1为初始化部分，表达式2为条件判断部分，用于判断循环什么时候终止，表达式3为调整部分。


////利用for循环打印一到十
//int main()
//{
//	int a = 1;
//  //初始化，条件判断，调整 
//	for (a = 1; a < 11; a++)
//	{
//		printf("%d ", a);
//	}
//	return 0;
//}

//for循环的变种--for(;;)--for循环的三个部分都是可以进行省略的，但是！！建议不要省略.
//for循环的变体2
//int x, y;
//int main()
//{
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//		printf("hehe\n");
//		return 0;
//}//分析，因为条件是要同时满足的所以只能打印2个hehe。

//请问下面这个for循环循环多少次。
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}//这个是一道很坑的题目，中间的不是判断语句而是赋值语句，c语言中0为假，非0为真。
   //所以k=0表示是假，所以压根不会进入循环语句。所以是0次循环。

//do....while()循环。
//do
//循环语句;(多条循环语句需要用花括号（{}）括起来)
//while();
//int main()
//{
//	    int i = 1;
//		do
//		{
//			printf("%d ", i);
//			i++;
//		} 
//		while (i < 11);
//		return 0;
//
//}
//

//n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i < n + 1; i++)//产生1到n这些数字
//		ret = ret*i;//将其相乘就是阶乘的核心算法
//	printf("%d\n",ret);
//	return 0;
//}

//计算1！+2！+3+.....+n!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n<=3; n++)
//	{
//		
//		int ret = 1;
//		for (i = 1; i <= n; i++)//产生1到n这些数字
//		{
//			ret = ret*i;//将其相乘就是阶乘的核心算法
//		}//n的阶乘
//		sum = sum+ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//在好好理解理解。有点晕，需要再看。

