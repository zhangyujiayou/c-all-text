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


