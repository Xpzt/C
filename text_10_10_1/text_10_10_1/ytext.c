#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
void print(int n)
{
	if( n>9 )
	{
		print(n/10);
	}
	printf("%d ",n%10);
}


int main()
{
	//����һ������ֵ���޷��ţ�����˳���ӡ����ÿһλ
	int num = 0;
	scanf("%d",&num);
	print(num);

	return 0 ;
}