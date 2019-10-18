#include "stdafx.h"
#include <stdio.h>
int main()
{
	int n,i;
	n=10;
    double p,r;
	r=0.07;
	p=1;
	for(i=0;i<10;i++)
		p*=1+r;
	printf("%.2lf",p);
	return 0;
}
