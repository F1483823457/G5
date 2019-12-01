#include "stdafx.h"
#include<stdio.h>
double p(int,int);
int main()
{
	int n,x;
	scanf("%d %d",&n,&x);
	printf("%lf\n",p(n,x));
	return 0;
}
double p(int n,int x)
{
	if(n==0) return 0;
	else if(n==1) return 1;
	else return ((2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x))/n;
}