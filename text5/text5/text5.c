#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int ch = 0;
//	//EOF-end of file �ļ�������־
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
//	printf("���������룺");
//	scanf("%s", password);//�������룬���ҷ���password������,����scanfֻ��������뻺�����пո�ǰ��Ķ���--ep ������1234 ABCD -- ��ֻ�����1234 ���뻺�����л������¿ո�+ABCD
//	//getchar();//��֮ǰ��һ�����뻺�����е���Ϊscanf���������µ�'\n'�ַ�����
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��Y/N��");
//	ret = getchar();//getchar()������scanf����
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	return 0;
//}
////getchar()���÷�������getcharȥ��ȡ/���գ�����whileѭ�������뻺�����е����ݡ����õ�һ���÷�������ȥ��ȡ��ǰ���û���������ݡ�


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;//continue���÷�����ֹ����ѭ����������continue���µ����ݡ�
//		putchar(ch);       //���main��������˼����ֻ�����0~9֮�������
//	}
//	return 0;
//}


//for(���ʽ1�����ʽ2�����ʽ3)
//���;
//���ʽ1Ϊ��ʼ�����֣����ʽ2Ϊ�����жϲ��֣������ж�ѭ��ʲôʱ����ֹ�����ʽ3Ϊ�������֡�


////����forѭ����ӡһ��ʮ
//int main()
//{
//	int a = 1;
//  //��ʼ���������жϣ����� 
//	for (a = 1; a < 11; a++)
//	{
//		printf("%d ", a);
//	}
//	return 0;
//}

//forѭ���ı���--for(;;)--forѭ�����������ֶ��ǿ��Խ���ʡ�Եģ����ǣ������鲻Ҫʡ��.
//forѭ���ı���2
//int x, y;
//int main()
//{
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//		printf("hehe\n");
//		return 0;
//}//��������Ϊ������Ҫͬʱ���������ֻ�ܴ�ӡ2��hehe��

//�����������forѭ��ѭ�����ٴΡ�
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}//�����һ���ܿӵ���Ŀ���м�Ĳ����ж������Ǹ�ֵ��䣬c������0Ϊ�٣���0Ϊ�档
   //����k=0��ʾ�Ǽ٣�����ѹ���������ѭ����䡣������0��ѭ����

//do....while()ѭ����
//do
//ѭ�����;(����ѭ�������Ҫ�û����ţ�{}��������)
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

//n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i < n + 1; i++)//����1��n��Щ����
//		ret = ret*i;//������˾��ǽ׳˵ĺ����㷨
//	printf("%d\n",ret);
//	return 0;
//}

//����1��+2��+3+.....+n!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n<=3; n++)
//	{
//		
//		int ret = 1;
//		for (i = 1; i <= n; i++)//����1��n��Щ����
//		{
//			ret = ret*i;//������˾��ǽ׳˵ĺ����㷨
//		}//n�Ľ׳�
//		sum = sum+ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//�ںú������⡣�е��Σ���Ҫ�ٿ���

