#include "stdafx.h"
#include<stdio.h>
main()
{
	double h=100,s=100,i;
	for(i=1;i<10;i++)
	{
		h/=2;
	    s+=2*h;
	}
	printf("������%lf��\n�߶�Ϊ%lf\n",s,h);
	return 0;
}