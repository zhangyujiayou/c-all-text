#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"

//int main()
//{
//	int sum = 0;
//	int a = 10;
//	int b = 20;
//	sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//递归函数的实现，比如输入一个1234，依次打印1  2  3  4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//   1  2   3  4
//	return 0;
//}

//练习2：编写函数不允许创建临时变量，求字符串的长度
//解法先来一个允许创建临时变量的，求字符串的长度吧。
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//以上的这个是用创建临时变量的方法的去解决的。
//下面的这个使用不创建临时变量的方法去解决。
//就是使用递归的方法，递归的核心思路，将大事化小。
//my_strlen("bit")
//1 + my_strlen("it")
//1 + 1 + my_strlen("t")
//1 + 1 + 1 + my_strlen("")
//1+1+1+0=3

//int my_strlen(char* arr)
//{   
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//
//}
//这里使用的就是递归，递归就是自己不停的调用自己，所以自己本身就是一个循环。所以里面的语句就不能使用循环，必须使用if（）条件语句。
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//实参的数组传递给形参的时候，传递过去的就是第一个元素的地址。所以要用指针来接收。
//	printf("len=%d\n", len);
//	return 0;
//}

//n！的复习计算的方式。
//首先利用循环的方式写出一个计算N!。
//int  F(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//接下来使用递归的方式去写这样的代码。
//int  F(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*F(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = F(n);//使用了一个计算N！的函数。
//	printf("%d\n", ret);
//	return 0;
//}

//描述第n个斐波那契数。
//首先先使用一种不好的递归的方法，效率不好的问题。
//int count = 0;
//int Fid(int	n)
//{
//	if (n == 37)//计算第37项在计算当中出现的次数
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fid(n - 1) + Fid(n - 2);
//}
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret = Fid(n);
//	printf("ret=%d\n", ret);
//	printf("count=%d\n", count);
//	return 0;
//}
//描述第n个斐波那契数。
//首先先使用一种不好的递归的方法，效率不好的方法。

//下面的这个方法是一个效率高的方法。使用的是利用循环的方法来实现的。
//也是计算第n个斐波那契数。
//int FID(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{ 
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//这里注意必须是--
//
//	}return c;
//
//}
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret = FID(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//汉诺塔的问题。利用递归的形式去实现。
//char A=  'A';
//char B = 'B';
//char C = 'C';
//void Hanoif(int n, char A, char B, char C)
//{
//
//	if (n == 1)
//	{
//		printf("将%c上的圆盘移动到%c上\n", A, C);
//	
//	}
//
//	else
//	{
//		Hanoif(n - 1, A, C, B);
//		printf("将%c上的圆盘移动到%c上\n", A, C);
//		Hanoif(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	//需要移动的圆盘的数量是n
//	int n = 0;
//	scanf("%d", &n);
//	Hanoif(n, A, B, C);
//	return 0;
//}
//
//int main()
//{
//	/*char arr[] = "abcdef";*/
//	//printf("%d\n", sizeof(arr));//sizeof()计算的是计算对象的字节的大小。
//	//printf("%d\n", strlen(arr));//strlen()计算的是字符串的长度。只能计算字符串的长度字符串的长度是不包括'\0'的。
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//需要遇到\0才能停止字符串的计算，所以是随机值。
//
//	return 0;//strlen是库函数，必须引用头文件，sizeof是操作符不需要引用头文件。
//}

//利用函数实现冒泡排序。
//写一个冒泡函数的具体实现。
//void bubble_sort(int arr[],int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		//接下来进行每一趟的冒泡排序
//		int k = 0;
//		for (k = 0; k < sz - 1 - j; k++)
//		{
//			if (arr[k]>arr[k + 1])
//			{
//				int tmp = 0;
//				tmp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 12,50,48,60,21,45,22,11,70,95 };//10个数
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素的个数
//	//实现冒泡，利用冒泡函数
//	bubble_sort(arr,sz);
//	//重新排序过后将排序之后的数，显示出来。
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\0");
//	return 0;
//}
//这种写法不是不可以但是有一个问题就是效率不高的问题。就是说如果原本就是排好续的程序还是会傻傻呼呼的进行比较。下面进行一个优化。


//优化以后的。
//void bubble_sort(int* arr, int sz)
//{
//	int j = 0;
//	int flag = 1;//假设一个标志位为1，就代表程序是有序的
//	for (j = 0; j < sz - 1; j++)
//	{
//		//接下来进行每一趟的冒泡排序
//		int k = 0;
//		for (k = 0; k < sz - 1 - j; k++)
//		{
//			if (arr[k]>arr[k + 1])
//			{
//				int tmp = 0;
//				tmp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tmp;
//				flag = 0;//将flag改为0。这里代表目前为止还不是完全有序的。所以进入到了这个if的条件里面。
//			}
//		}
//		if (flag == 1)
//		{
//			break;//表明验证了某一趟就是有序的之后就立马跳出这个n-1趟的这个循环。以达到高效率的一种情况。
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 12, 50, 48, 60, 21, 45, 22, 11, 70, 95,41,51,42,64 ,77,88,99,44,55,66,11,22,33,44,11,55,16,19};//10个数
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素的个数
//	//实现冒泡，利用冒泡函数
//	bubble_sort(arr, sz);
//	//重新排序过后将排序之后的数，显示出来。
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
 