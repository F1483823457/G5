#include "stdafx.h"
#include<stdio.h>
#include<math.h>
int main()
{
	double p,q,d,r,i,m;
	d=300000;
	p=6000;
	r=0.01;
	m=log10(p/(p-d*r))/log10(1+r);
	printf("%.1lf",m);
	return 0;
}
