#include "stdafx.h"
#include <stdio.h>
#define PI 3.1415926
int main()
{
	double r,h;
	double c1,s1,s2,v1,v2;
	printf("Բ���İ뾶r=");
	scanf("%lf",&r);
	printf("Բ���ĸ�h=");
	scanf("%lf",&h);
    c1=PI*r*2;
    s1=PI*r*r;
	s2=4*s1;
	v1=PI*r*r*r*4/3;
	v2=s1*h;
	printf("Բ���ܳ�%.2lf,Բ�����%.2lf,Բ������%.2lf,Բ�����%.2lf,Բ�����%.2lf",c1,s1,s2,v1,v2);
	return 0;
}
