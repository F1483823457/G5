#include "stdafx.h"
#include<stdio.h>
int main()
{
	int n,m,a[5],i,j;
	scanf("%d",&n);
	m=n;
	printf("�������");
	for(i=0;n>0;i++)
{	a[i]=n%10;
	n/=10;
	printf("%d",a[i]);
	}
	printf("\nÿλ����");
	for(j=i-1;j>=0;j--)
{	printf("%d ",a[j]);
	}
	printf("\n");
	printf("%d��%dλ��",m,i);
	return 0;
}