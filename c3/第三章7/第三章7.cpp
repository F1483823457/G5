#include "stdafx.h"
#include <stdio.h>
#define PI 3.1415926
int main()
{
	double r,h;
	double c1,s1,s2,v1,v2;
	printf("圆柱的半径r=");
	scanf("%lf",&r);
	printf("圆柱的高h=");
	scanf("%lf",&h);
    c1=PI*r*2;
    s1=PI*r*r;
	s2=4*s1;
	v1=PI*r*r*r*4/3;
	v2=s1*h;
	printf("圆的周长%.2lf,圆的面积%.2lf,圆球表面积%.2lf,圆球体积%.2lf,圆柱体积%.2lf",c1,s1,s2,v1,v2);
	return 0;
}
