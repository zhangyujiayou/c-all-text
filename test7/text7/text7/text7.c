#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int is_prime(int n)
//{
//	//判断是不是素数
//	//素数：1.只能够被本身或者1整除的数，不能被除这个2个数以外的数整除的就是素数
//	int m = 0;
//	for (m = 2; m <= n - 1; m++)//产生2到n-1这些数
//	{
//		if (n%m == 0)//说明不是素数
//			return 0;//不是素数返回0,return 这个关键词可以直接就结束这个函数。等于函数直接就结束了。
//	
//	}
//	if (m==n)
//	return 1;//说明是素数
//	
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是不是素数，是的话就打印出来
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}

//写一个函数，实现整形有序数组的二分查找。
//int binary_search(int arr[], int k,int num)
//{
//	//二分查找的具体算法。
//	int left = 0;
//	int right = num - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;//当找到元素的时候就返回元素的下标。
//	}
//	return -1;//-1表示没有找到。
//}
//int main()
//{
//	
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int k = 5;
//	int ret = binary_search(arr, k, num);//注意点：实参如果是一个数组，那么传递给形参的时候是数组首个元素的地址。
//	                                       //所以如果要计算数组元素的个数的话，就在主函数里面计算好在把素组的个数传递给调用的函数。
//	if (ret == -1)                       //地址32位的是4字节，64位的是8字节。
//		printf("没找到\n");
//	else
//		printf("%d找到了，下表是%d\n",k ,ret);
//	return 0;
//
//}


//写一个函数，调用一次这个函数时，就num++一次。
//void ADD(int* p)
//{
//	(*p)++;//这里加括号的意思是优先级不同，++的优先级是高的,所以需要给*p加一个括号。
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("%d\n", num);//1
//	ADD(&num);
//	printf("%d\n", num);//2
//	ADD(&num);
//	printf("%d\n", num);//3
//	ADD(&num);
//	printf("%d\n", num);//4
//	return 0;
//}



