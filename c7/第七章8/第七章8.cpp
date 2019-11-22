#include "stdafx.h"
#include<stdio.h>
int hanshu(int a);
int main()
{
	int n;
	scanf("%d",&n);
	hanshu(n);
	printf("\n");
	return 0;
}
int hanshu(int a)
{
	int i,j,x[4];
	for(i=0;a>0;i++)
	{
	x[i]=a%10;
	a/=10;
	}
	for(j=i-1;j>=0;j--)
	{
	if(j!=i-1) printf(" ");
	printf("%d",x[j]);
	}
	return 0;
}