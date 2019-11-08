#include "stdafx.h"
#include<stdio.h>
#include<math.h>
int abc(double x);
int main()
{
	int a,b;
	a=abc(1e-6);
	b=abc(1e-8);
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}
int abc(double x)
{
	int sign=1,a=0;
	double pi=0.0,n=1.0,term=1.0;
	while(fabs(term)>=x)
	{
		pi+=term;
		n+=2;
		sign*=-1;
		term=sign/n;
		a++;
	}
	return a;
}