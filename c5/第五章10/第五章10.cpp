#include "stdafx.h"
#include<stdio.h>
main()
{
	double u,d,i,sum=0,n,t;
	u=2,d=1;
	for(i=0;i<20;i++)
	{
		n=u/d;
		t=u;
		u=u+d;
		d=t;
		sum+=n;
	}
	printf("%lf\n",sum);
	return 0;
}
