#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//将三个数从大到小输出
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d",&a,&b,&c);
	if (a < b)
	{
		int mid = a;
			a = b;
		    b = mid;
	}
	if (a < c)
	{
		int mid = a;
		a = c;
		c = mid;
	}
	if (b < c)
	{
		int mid = b;
		b = c;
		c = mid;
	}

	printf("%d %d %d\n", a, b, c);
	
	return 0;
}
//特别的要注意，if（）语句的用法，if（）语句是条件选择语句
//有if（）else语句，并且if（）else语句是一个整体。
//如果有if()else语句的话，这个两个关键词一定是成对出现的不可以分开来使用。
//还有一种就是很多个if（）else语句的嵌套。要小心的去理解。
//遇到if语句的时候就开始判断是不是满足括号里面的条件内容。
//如果满足括号里面内容的话，就执行下面的语句，如果不满足括号里面的内容，就跳过这个部分，继续向下执行。

////打印1-100内3的倍数
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}
	return 0;

}

//求两个数的最大公约数
//思路：使用辗转相除法
int main()
{
	int m = 24;
	int n = 18;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (m%n)
	{
		r = m%n;
		m = n;
		n = r;	
	}
	printf("最大公约是：%d\n", n);
	return 0;
}

//打印1000—2000年之间所有的闰年
//判断是闰年的规则是1.能被4整除，但是不能被100整除的年份。
//                  2.能被400整除的年份。

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
	/*	if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else
		if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}*/
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n一共有%d个闰年\n", count);


	return 0;
}

//判断100-200之间的素数。
//使用试除法。
//首先素数的定义是，不能被1或者本身（i）以外的数整除的数就是素数。
//那么就是判断能不能被2到本身（i）减一的数整除。
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)//产生100-200之间的数i。
	{
		int j = 0;
		for (j = 2; j < i ; j++)//产生2到本身（i）减一的数j
		{
			if (i % j == 0)//被整除了，就不是素数
			{
				break;//不是素数就立马跳出来
			}
		}//1：break调到这里，2：i变成200=时完成循环会跳到这里。
		if (j == i)
		printf("%d ", i);//把素数打印出来,问题来了，那么什么时候是素数呢，回答是只有一直试着除下去，直到最后一个i-1也除不尽就是素数，那么输出素数时的条件就是j=i；
	}
	return 0;
}
//在理解理解吧。没想明白。参考文章《素数求解的n中境界》

//计算1-100中一种出现了多少个9的个数。
//00-89；里面有9个9
//90，91，92，93，94，95，96，97，98，99，100里面有11个9。所以一共有20个9。
int main()
{
	int i = 0;
	int count = 0;
	for (i = 0; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("count=%d\n", count);
	return 0;
}


//分数求和的问题。
//1\1-1\2+1\3-1\4+.....-1\100=?
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*(1.0 / i);
		flag = -flag;
	}
	printf("sum=%lf\n", sum);
	return 0;
}



//输出10个数组里面最大的数
int main()
{
	int max = 0;
	int sz = 0;
	int i = 0;
	int arr1[] = { -1, -2, 3, -4, -5, 8, -7, -8, -9, 9 };
	max = arr1[0];
	sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 1; i <= sz - 1; i++)
	{
		if (arr1[i]>arr1[0])
			max = arr1[i];
	}
	printf("%d\n", max);

	return 0;
}
////思路就是假设第一个就是最大的那个数，然后将后面数组里面的元素一一的比较如果比第一个数大的话，就将最大值替换为大的那个数，然后循环下去。

//在屏幕上输出一个乘法口诀表
//1*1=1
//2*1=2；2*2=4；
//3*1=3；3*2=6；3*3=9；
//。。。。
//9*1=9；9*2=18；9*3=27。。。。。9*9=81；
int main()
{
	int i = 0;//定义一个行
	for (i = 1; i <= 9; i++)//打印一行的数据
	{
		//这里的循环是打印一行，将打印的每一行然后循环9次。      
		int m = 0;
		int j = 1;//定义一个列
		for (j = 1; j <= i; j++)
		{
			m = i*j;//计算乘积
			printf("%d*%d=%-2d；", i, j, m);
		}
		printf("\n");
	}
}
//尤其是有关两个for（）循环进行嵌套的时候，其实所有的情况就是每个循环次数的乘积。

//一个游戏，猜数字的游戏
//注意switch语句的特点，它是从入口开始没有遇见break之前就不停的像下面运行，直到遇到break就不运行下面的语句了。直接跳出switch循环。
void game()
{   
	//游戏的内内部具体内容
    //猜数字你猜我回答小游戏
	//1.首先需要生成一个随机数，生成的随机数这里的我还不是特别的懂。有空再看看。
	int ret = 0;
	ret=rand()%100+1;//生成一个随机数（1到100之间的随机数）并且赋值给ret
	//2.猜数字
	while (1)
	{
		int guess = 0;
		printf("请猜数字：");//如果这里有一个bug就是呢，如果把ret=rand()%100+1;放入while的循环里面的话那么就会一直猜不到数字了，为什么呢？
		scanf("%d", &guess);//因为看好了，要是ret=rand()%100+1；在上面的话，就是说可以猜n次直到猜中了为止，
		                    //你要猜一猜的那个数字是不会变得。
		if (guess>ret)      //要是ret=rand()%100+1；在下面的话，也就是下循环的里面，
			                //这个样子的话只要猜一猜不中就会重新进入循环，一开始猜一猜的数字也会发生一个变换。
							//除非你一次就猜一猜猜中了，不然的话，永远猜一猜猜不中。
			printf("猜大了\n");
		else if (guess<ret)
			printf("猜小了\n");// 下面的这个关于if 。。。。else if 。。。。else if 。。。。else的语句呢
		                      //只会执行里面的对应条件下的语句，并且只会执行一次。只要满足了一个条件，
		                      //执行了一个语句以后，就不会再执行这个选择条件语句了。会跳出这个选择条件的语句。
		else
		{
			printf("恭喜，猜中了\n");
			break;
		}
	}
	
}


void init()
{
	printf("##猜数字你猜我回答小游戏##\n");
	printf("###1.play###0.exit########\n");
	printf("##########################\n");
}
int main()
{
	int n = 0;
	srand((unsigned int)time(NULL));
	do
	{
		init();
		printf("请输入->");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();//运行一次游戏
			break;//游戏结束就再玩一次
		case 0:
			printf("游戏已退出\n");
			break;//游戏推出就跳出循环
		default:
			printf("输入错误，请重新输入\n");
			break;//游戏推出就跳出循环
		}
	} while (n);
	return 0;
}
//这个程序的随机数生成还有问题，其他的没有问题。关于随机数生成的部分还是要再看看书。


//写一个我是猪，不然就关机的恶搞小程序。
int main()
{
	char arr1[30] = { 0 };
	system("shutdown -s -t 60");//system这个函数是调用系统命令的函数。需要使用是需要加头文件#include<stdlib.h>
again:                        //shutdown -s -t 60   这个系统命令的意思是关机，设置，延时60秒。
	printf("请注意，你的PC将在60秒后关机，除非你输入：“我是猪”，则关机命令会立马取消\n请输入：");
		scanf("%s", arr1);
		if (strcmp(arr1, "我是猪") == 0)
		{
			system("shutdown -a");//shutdown -a   这个系统命令的意思是，关机，取消
			printf("您的关机命令已取消，请放心使用\n");
		}
		else
			goto again;

	return 0;
}

