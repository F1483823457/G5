#include "stdafx.h" 
#include<stdio.h>
#include<math.h>
int sushu(int x);
int main()
{
	int n,m;
	scanf("%d",&n);
	m=sushu(n);
	if(m) printf("%d是素数\n",n);
	else printf("%d不是素数\n",n);
	return 0;
}
int sushu(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0) break;
		if(x==2 || i>sqrt(x)) return 1;
		else return 0;
}
