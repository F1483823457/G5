#include "stdafx.h"
#include<stdio.h>
#include<math.h>
main()
{
	double x0,x1;
	float a;
	scanf("%f",&a);
	x0=23456;
	x1=(x0+a/x0)/2.0;
	for(;;)
	{
		x0=x1;
		x1=(x0+a/x0)/2.0;
		if(fabs(x0-x1)<1e-5)
		{printf("%lf",x1);
		break;}
	}
	printf("\n");
	return 0;
} 