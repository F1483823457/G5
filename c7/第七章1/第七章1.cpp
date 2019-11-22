#include "stdafx.h"
#include<stdio.h>
int max(int a,int b);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",max(a,b));
	printf("%d\n",a*b/max(a,b));
	return 0;
}
int max(int a,int b)
{
	int x;
	while(b!=0)
	{
	x=a%b;
	a=b;
	b=x;
	}
	return a;
}