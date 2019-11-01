#include "stdafx.h"
#include<stdio.h>
int main()
{
	int n,m,a[5],i,j;
	scanf("%d",&n);
	m=n;
	printf("逆序输出");
	for(i=0;n>0;i++)
{	a[i]=n%10;
	n/=10;
	printf("%d",a[i]);
	}
	printf("\n每位数字");
	for(j=i-1;j>=0;j--)
{	printf("%d ",a[j]);
	}
	printf("\n");
	printf("%d是%d位数",m,i);
	return 0;
}