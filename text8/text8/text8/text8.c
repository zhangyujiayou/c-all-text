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

//�ݹ麯����ʵ�֣���������һ��1234�����δ�ӡ1  2  3  4
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

//��ϰ2����д��������������ʱ���������ַ����ĳ���
//�ⷨ����һ����������ʱ�����ģ����ַ����ĳ��Ȱɡ�
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
//���ϵ�������ô�����ʱ�����ķ�����ȥ����ġ�
//��������ʹ�ò�������ʱ�����ķ���ȥ�����
//����ʹ�õݹ�ķ������ݹ�ĺ���˼·�������»�С��
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
//����ʹ�õľ��ǵݹ飬�ݹ�����Լ���ͣ�ĵ����Լ��������Լ��������һ��ѭ����������������Ͳ���ʹ��ѭ��������ʹ��if����������䡣
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//ʵ�ε����鴫�ݸ��βε�ʱ�򣬴��ݹ�ȥ�ľ��ǵ�һ��Ԫ�صĵ�ַ������Ҫ��ָ�������ա�
//	printf("len=%d\n", len);
//	return 0;
//}

//n���ĸ�ϰ����ķ�ʽ��
//��������ѭ���ķ�ʽд��һ������N!��
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
//������ʹ�õݹ�ķ�ʽȥд�����Ĵ��롣
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
//	ret = F(n);//ʹ����һ������N���ĺ�����
//	printf("%d\n", ret);
//	return 0;
//}

//������n��쳲���������
//������ʹ��һ�ֲ��õĵݹ�ķ�����Ч�ʲ��õ����⡣
//int count = 0;
//int Fid(int	n)
//{
//	if (n == 37)//�����37���ڼ��㵱�г��ֵĴ���
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
//������n��쳲���������
//������ʹ��һ�ֲ��õĵݹ�ķ�����Ч�ʲ��õķ�����

//��������������һ��Ч�ʸߵķ�����ʹ�õ�������ѭ���ķ�����ʵ�ֵġ�
//Ҳ�Ǽ����n��쳲���������
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
//		n--;//����ע�������--
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

//��ŵ�������⡣���õݹ����ʽȥʵ�֡�
//char A=  'A';
//char B = 'B';
//char C = 'C';
//void Hanoif(int n, char A, char B, char C)
//{
//
//	if (n == 1)
//	{
//		printf("��%c�ϵ�Բ���ƶ���%c��\n", A, C);
//	
//	}
//
//	else
//	{
//		Hanoif(n - 1, A, C, B);
//		printf("��%c�ϵ�Բ���ƶ���%c��\n", A, C);
//		Hanoif(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	//��Ҫ�ƶ���Բ�̵�������n
//	int n = 0;
//	scanf("%d", &n);
//	Hanoif(n, A, B, C);
//	return 0;
//}
//
//int main()
//{
//	/*char arr[] = "abcdef";*/
//	//printf("%d\n", sizeof(arr));//sizeof()������Ǽ��������ֽڵĴ�С��
//	//printf("%d\n", strlen(arr));//strlen()��������ַ����ĳ��ȡ�ֻ�ܼ����ַ����ĳ����ַ����ĳ����ǲ�����'\0'�ġ�
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//��Ҫ����\0����ֹͣ�ַ����ļ��㣬���������ֵ��
//
//	return 0;//strlen�ǿ⺯������������ͷ�ļ���sizeof�ǲ���������Ҫ����ͷ�ļ���
//}

//���ú���ʵ��ð������
//дһ��ð�ݺ����ľ���ʵ�֡�
//void bubble_sort(int arr[],int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		//����������ÿһ�˵�ð������
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
//	int arr[] = { 12,50,48,60,21,45,22,11,70,95 };//10����
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���
//	//ʵ��ð�ݣ�����ð�ݺ���
//	bubble_sort(arr,sz);
//	//���������������֮���������ʾ������
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\0");
//	return 0;
//}
//����д�����ǲ����Ե�����һ���������Ч�ʲ��ߵ����⡣����˵���ԭ�������ź����ĳ����ǻ�ɵɵ�����Ľ��бȽϡ��������һ���Ż���


//�Ż��Ժ�ġ�
//void bubble_sort(int* arr, int sz)
//{
//	int j = 0;
//	int flag = 1;//����һ����־λΪ1���ʹ�������������
//	for (j = 0; j < sz - 1; j++)
//	{
//		//����������ÿһ�˵�ð������
//		int k = 0;
//		for (k = 0; k < sz - 1 - j; k++)
//		{
//			if (arr[k]>arr[k + 1])
//			{
//				int tmp = 0;
//				tmp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tmp;
//				flag = 0;//��flag��Ϊ0���������ĿǰΪֹ��������ȫ����ġ����Խ��뵽�����if���������档
//			}
//		}
//		if (flag == 1)
//		{
//			break;//������֤��ĳһ�˾��������֮��������������n-1�˵����ѭ�����Դﵽ��Ч�ʵ�һ�������
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 12, 50, 48, 60, 21, 45, 22, 11, 70, 95,41,51,42,64 ,77,88,99,44,55,66,11,22,33,44,11,55,16,19};//10����
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���
//	//ʵ��ð�ݣ�����ð�ݺ���
//	bubble_sort(arr, sz);
//	//���������������֮���������ʾ������
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
 