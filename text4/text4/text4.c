#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//c������һ�Žṹ���ĳ����������
//1��˳��ṹ
//2��ѡ��ṹ--��֧���
//3��ѭ���ṹ--ѭ�����
//int main()
//{
//	int a = 0;
//	;//�����--�����
//	return 0;
//}


//if���
//if������ʽ����
//��䣻

//if���
//if������ʽ��
//��䣻
//else
//��䣻

//��������ʽ
//if (����ʽ1)��
//���1��
//else if (����ʽ2)��
//���2��
//else
//���3��

int main()
{
	int age = 5;
	if (age < 18)
	{
		printf("δ����\n");
		printf("����̸����\n");
	}
	else
	{
		if (age >= 18 && age < 28)
		    printf("����\n");
		else if (age >= 28 && age < 50)
			printf("׳��\n");
		else if (age >= 50 && age < 90)
			printf("����\n");
		else if (age >= 90)
			printf("�ϲ���\n");
	};
	return 0;
}
//��������Կ���if else ���ƶ������ʱ�����������Ҫ�ô�����������

//C���Ա�ʾ��٣�0��ʾ�٣���0��ʾ�棻
//ע��---else�Ǻ���������û�н���ƥ���if����ƥ��� 
//���罫һ������������ȥ�ж��ǲ���һ������ʱ�õĴ������д�����
//5==num1