#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int is_prime(int n)
//{
//	//�ж��ǲ�������
//	//������1.ֻ�ܹ����������1�������������ܱ������2����������������ľ�������
//	int m = 0;
//	for (m = 2; m <= n - 1; m++)//����2��n-1��Щ��
//	{
//		if (n%m == 0)//˵����������
//			return 0;//������������0,return ����ؼ��ʿ���ֱ�Ӿͽ���������������ں���ֱ�Ӿͽ����ˡ�
//	
//	}
//	if (m==n)
//	return 1;//˵��������
//	
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж��ǲ����������ǵĻ��ʹ�ӡ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}

//дһ��������ʵ��������������Ķ��ֲ��ҡ�
//int binary_search(int arr[], int k,int num)
//{
//	//���ֲ��ҵľ����㷨��
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
//			return mid;//���ҵ�Ԫ�ص�ʱ��ͷ���Ԫ�ص��±ꡣ
//	}
//	return -1;//-1��ʾû���ҵ���
//}
//int main()
//{
//	
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int k = 5;
//	int ret = binary_search(arr, k, num);//ע��㣺ʵ�������һ�����飬��ô���ݸ��βε�ʱ���������׸�Ԫ�صĵ�ַ��
//	                                       //�������Ҫ��������Ԫ�صĸ����Ļ����������������������ڰ�����ĸ������ݸ����õĺ�����
//	if (ret == -1)                       //��ַ32λ����4�ֽڣ�64λ����8�ֽڡ�
//		printf("û�ҵ�\n");
//	else
//		printf("%d�ҵ��ˣ��±���%d\n",k ,ret);
//	return 0;
//
//}


//дһ������������һ���������ʱ����num++һ�Ρ�
//void ADD(int* p)
//{
//	(*p)++;//��������ŵ���˼�����ȼ���ͬ��++�����ȼ��Ǹߵ�,������Ҫ��*p��һ�����š�
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



