#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

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

//写一个代码，在arr数组（有序数组）中找到7
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 7;
//	int se = 0;
//	int i = 0;
//	//首先计算出数组的元素个数
//	se = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < se; i++)
//	{
//		if (3 == arr[i])
//		{
//		   printf("找到了,下标是%d\n",i);
//		   break;
//	    }
//	}
//	if (i == se)
//		printf("没有找到\n");
//	return 0;
//}


//二分数查找法查找元素的方法。
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 6;
//	int se = sizeof(arr) / sizeof(arr[0]);//计算元素的个数
//	int left = 0;//左下标
//	int right = se-1;//右下标
//	
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{	
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//满足一个条件去打印一串字符
//welcome to bit!!!!!!!
//w###################!
//we#################!!
//wel###############!!!
//........
//........
//welcome to bit!!!!!!!


//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;//左下标
//	int se = strlen(arr1);//统计的字节个数
//	int right = se - 1;//右下标
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//Sleep--延时函数，括号里面表示延迟的时间，单位是ms，这个需要注意，S是大写，并且需要添加头函数#include<windows.h>
//		system("cls");//system--执行系统命令的一个函数，cls--清屏指令，需要打招呼添加头函数#include<stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//编写代码实现，模拟用户的登录场景，并且只能登入3次。
//只允许输入3次密码，如果密码正确就提示登入成功，如果3次均输入错误，则退出程序。
//int main()
//{
//	char password[] = { 0 };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登入成功\n");
//			break;
//		}
//		else
//			printf("登入失败，请重新输入\n");
//		    
//	}
//	if (i==3)
//		printf("三次输入都错误，请稍后再试\n");
//	return 0;
//}
